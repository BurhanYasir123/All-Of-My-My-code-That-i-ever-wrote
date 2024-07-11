@echo off

set /p host=Enter the host (default is 127.0.0.1): 
set /p port=Enter the port (default is 5000): 

if not defined host set host=127.0.0.1
if not defined port set port=5000

mkdir project_flask
cd project_flask

mkdir templates

echo import flask > main.py
echo from flask import Flask, render_template >> main.py
echo app = Flask(__name__, template_folder='templates') >> main.py
echo @app.route('/') >> main.py
echo def hello(): >> main.py
echo    return render_template('index.html') >> main.py
echo if __name__ == '__main__': >> main.py
echo    app.run(host='%host%', port=%port%, debug=True) >> main.py

echo ^<html^> > templates/index.html
echo   ^<head^> >> templates/index.html
echo     ^<title^>Welcome to Flask^</title^> >> templates/index.html
echo   ^</head^> >> templates/index.html
echo   ^<body^> >> templates/index.html
echo     ^<h1^>Welcome to Flask^</h1^> >> templates/index.html
echo     ^<p^>This is a simple Flask web application.^</p^> >> templates/index.html
echo   ^</body^> >> templates/index.html
echo ^</html^> >> templates/index.html

REM Replace %host% and %port% in main.py with the actual values
setlocal enableDelayedExpansion
set "search=%host%"
set "replace=!host!"
for /f "delims=" %%i in (main.py) do (
    set "line=%%i"
    set "line=!line:%search%=%replace%!"
    echo !line!>>main_temp.py
)
del main.py
ren main_temp.py main.py

echo Flask project created successfully in project_flask folder. Host: %host%, Port: %port%

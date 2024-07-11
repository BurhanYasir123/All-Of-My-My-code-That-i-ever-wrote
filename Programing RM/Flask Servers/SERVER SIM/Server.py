from flask import Flask,request

players = []

app=Flask(__name__)

@app.route("/")
def index():
    string = ""
    for n in players:
        string = string + (n+",")
    return string 

@app.route("/join")
def join():
    name = request.args.get('name')
    players.append(name)
    print(name,players)
    return ""


if __name__ == "__main__":
    app.run(debug=True)
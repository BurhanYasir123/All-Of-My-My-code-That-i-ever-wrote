from flask import Flask,jsonify,request,render_template

app = Flask(__name__)

@app.route("/")
def home():
    return "home"

@app.route("/method1")
def method1():
    return render_template("index.html")


if __name__ == "__main__":
    app.run(debug=True)

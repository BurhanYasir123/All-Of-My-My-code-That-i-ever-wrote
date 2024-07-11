from flask import Flask
import random

app=Flask(__name__)

@app.route("/")
def index():
    return "home"

if __name__ == "__main__":
    app.run(debug=True)
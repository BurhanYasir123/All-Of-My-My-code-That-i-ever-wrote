from flask import Flask

app = Flask(__name__)

to_do = ["..","alert('default')"]

@app.route("/post_check/<javascript>",methods=["POST"])
def check_post(javascript):
    to_do.append(javascript)
    return ".."

@app.route("/check",methods=["GET"])
def check():
    to_do.pop(0)
    return to_do[0]


if __name__ == "__main__":
    app.run(debug=True)
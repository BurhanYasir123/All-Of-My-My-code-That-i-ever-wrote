import requests
import time

requests.get("http://localhost:5000/join?name=Burhan")
while True:
    r = requests.get("http://localhost:5000/")
    print(r.text)
    time.sleep(.25)
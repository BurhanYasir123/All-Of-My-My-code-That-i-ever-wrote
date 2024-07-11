import requests

data = "alert('hi')"

requests.post(f"http://127.0.0.1:5000/check_post/{data}")
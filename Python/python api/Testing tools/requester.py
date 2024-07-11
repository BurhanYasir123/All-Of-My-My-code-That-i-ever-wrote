import requests

r = requests.get('http://127.0.0.1:5000/method1')

r = r.text

with open('1.html','w') as f:
    f.write(r)
    print('success')


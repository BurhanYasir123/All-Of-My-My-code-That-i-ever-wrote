import requests
import threading
ts = []
def func():
    for i in range(0,2):
        r = requests.get('https://google.com')

        print(r)

for i in range(1,300):
    t = threading.Thread(target=func)
    ts.append(t)
    t.start()
    
for t in ts:
    t.join()





import requests
import time

url = "https://api.hashify.net/hash/md4/hex?value="

detected = False

f = open("./hash.txt","r")
hash = f.readlines()
f.close()

for h in hash:
    h.strip("/n")

f = open("./wordlist.txt","r")
passwords = f.readlines()
f.close()


for password in passwords:
    # time.sleep(.5)
    password.strip("/n")
    if detected == False:
        r = requests.get(url+password)
        r = r.text
        r = r.split('{"Digest":"')
        r = r[1].split('","DigestEnc"')
        r = r[0]
        h2 = ""
        for h in hash:
            h2 = h2 + h
        hash = h2
        if r == hash:
            print("FOUND!!!!",password,hash,url+password,r)
            detected = True
        else:
            print("NOT FOUND",password,hash,url+password,r)
    else:
        continue
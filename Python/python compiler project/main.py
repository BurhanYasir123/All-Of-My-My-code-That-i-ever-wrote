file = open('script.txt', 'r')
lines = file.readlines()
def func():
    num = 0
    for line in lines:
        if line == "\n":
            continue
        num = num + int(line)
    return num
out = open("output.txt","w")
out.write(str(func()))
out.close()

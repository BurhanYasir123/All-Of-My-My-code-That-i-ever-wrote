file = open('code.txt', 'r')
lines = file.readlines()



# lines = ["echo hi"]

for line in lines:
    if "echo" in line:
        line = line[5:len(line)]
        print(line)
    

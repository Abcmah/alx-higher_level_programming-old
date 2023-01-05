
#!/usr/bin/python3
def uppercase(s):
    for i in range(len(s)):
        if ord(s[i]) >= 97 and ord(s[i]) <= 122:
            num = 32
        else:
            num = 0
        print("{:c}".format(ord(s[i]) - num), end='')
    print()

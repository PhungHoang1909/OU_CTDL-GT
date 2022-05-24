from re import S
from traceback import print_tb


def show(s):
    uppercase = 0
    lowercase = 0
    for i in s:
        if i.isupper():
            uppercase += 1
        if i.islower():
            lowercase += 1
    print("Given string:", s)
    print("Number of uppercase letters:", uppercase)
    print("Number of lowercase letters:", lowercase)

s = str(input())
show(s)
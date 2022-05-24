from os import TMP_MAX


s1 = input()
s2 = input()

temp = s1[0:2] + s2[2:]
s1 = s2[0:2] + s1[2:]
s2 = temp

print(s1 + " " + s2)
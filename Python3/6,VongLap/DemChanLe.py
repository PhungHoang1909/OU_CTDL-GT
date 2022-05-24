a = int(input())
b = int(input())

chan = 0
le = 0

for i in range(a, b + 1):
    if (i % 2 == 0):
        chan += 1
    else:
        le += 1

print("Number of even numbers:", chan)
print("Number of odd numbers:", le)

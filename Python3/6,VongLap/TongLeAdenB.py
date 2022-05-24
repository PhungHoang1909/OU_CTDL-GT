a = int(input())
b = int(input())

sum = 0
# i = a
# while i <= b:
#     if (i % 2 != 0):
#         sum += i
#     i += 1
# print(sum)

for i in range(a, b + 1):
    if (i % 2 != 0):
        sum += i
print(sum)
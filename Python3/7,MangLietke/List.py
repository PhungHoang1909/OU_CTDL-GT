n = int(input())
lst = []
for i in range (n):
    lst.append(int(input()))

min = lst[0]

for i in lst:
    if i < min:
        min = i

print(min)

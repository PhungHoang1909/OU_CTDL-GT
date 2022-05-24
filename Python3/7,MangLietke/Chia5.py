lst = []
n = int(input())

for i in range(n):
    lst.append(int(input()))

lst5 = []
for j in lst:
    if j % 5 == 0:
        lst5.append(j)
if len(lst5) == 0:
    lst5 = [0]
print(lst5)
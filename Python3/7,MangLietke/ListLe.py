lst = []
n = int(input())

for i in range(n):
    lst.append(int(input()))

lst_odd = []
for j in lst:
    if j % 2 != 0:
        lst_odd.append(j)

print(lst_odd)
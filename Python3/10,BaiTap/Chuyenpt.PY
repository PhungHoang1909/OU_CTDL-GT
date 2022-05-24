#Initial list
res = []

# Input lengths
lengths = int(input())

# Add element
for i in range(lengths):
    # Input elements
    n = int(input())
    res.append(n)

def listToNum(res):
    lst = []
    for i in res:
        lst.append(str(i))
    return int("".join(lst))
print(listToNum(res))
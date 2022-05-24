#Initial list
res = []

# Input lengths
lengths = int(input())

# Add element
for i in range(lengths):
    # Input elements
    n = int(input())
    res.append(n)


def evenNum(res):
    lst_even = []
    for i in res:
        if i % 2 == 0:
            lst_even.append(i)
    print(lst_even)

evenNum(res)
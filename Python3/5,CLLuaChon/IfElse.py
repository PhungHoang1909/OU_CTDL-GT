a = int(input())
b = int(input())

if a != b:
    if a > b:
        print("a is greater than b")
    else:
        print("b is greater than a")
else:
    print("Both a and b are equal")

# Toan tu 3 ngoi:

x, y = 10, 20

print("Both x and y are equal" if x == y else "x is greater than y" if x > y else "y is greater than x")
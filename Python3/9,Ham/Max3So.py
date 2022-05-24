a = int(input())
b = int(input())
c = int(input())

def max3(a, b, c):
    max = a
    if a > b and a > c:
        max = a
    elif b > a and b > c:
        max = b
    elif c > a and c > b:
        max = c
    return max

print(max3(a, b, c))
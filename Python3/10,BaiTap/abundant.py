n = int(input())

def is_abundant(n):
    tong=0
    for i in range(1,n):
        if n%i==0:
            tong+=i
    return (bool(tong>n))
print(is_abundant(n))
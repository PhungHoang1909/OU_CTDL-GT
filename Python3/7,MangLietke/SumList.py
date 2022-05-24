n = int(input())
numbers = []

for i in range(n):
    numbers.append(int(input()))
sum = 0

for i in numbers:
    sum += i
print(sum)
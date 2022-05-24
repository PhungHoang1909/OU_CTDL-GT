def is_prime(n):
    count = 0
    for i in range(1, n + 1):
        if n % i == 0:
            count += 1
    if count == 2:
        return True
    return False

n = int(input())
print(is_prime(n))

# def is_prime(n):
#          if n < 2 :
#                  return False 
#          for i in range(2 ,int(n**0.5) + 1):
#                    if n % i == 0 :
#                             return False
#          return True         


# n = int(input())
# print(is_prime(n))

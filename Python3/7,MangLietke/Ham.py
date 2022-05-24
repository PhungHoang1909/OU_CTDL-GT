# 1. Ham len: tra ve so phan tu co trong list:
from random import vonmisesvariate


lst1 = [1, 2, 3]
print(len(lst1)) # kq: 3

# 2. Ham max, min:
print(max(lst1)) #kq: 3
print(min(lst1)) #kq: 1

# 3. Ham insert: them 1 phan tu vao 1 vi tri trong list
vowels = ['a', 'e', 'i', 'u']
# chen 'o' vao vi tri thu 4 trong list vowels
vowels.insert(3, 'o')
print(vowels) #kq: a e i o u

# 4. Ham remove: xoa 1 phan tu khoi list:
lst1.remove('1')
print(lst1) # kq: 2 3

# 5. Ham pop: xoa 1 phan tu voi chi so cho truoc trong list:
lst5 = ['A', 'B', 'C']
# xoa phan tu thu 2 khoi list
lst5.pop(1)
print(lst5) #kq: A C

# 6. Ham sort: sap xep phan tu theo 1 thu tu nhat dinh
lst6 = [4, 5, 3, 7, 6, 1]
# sap xep tang:
lst6.sort()
print(lst6) # kq: 1 3 4 5 6 7
# sap xep giam:
lst6.sort(reverse=True)
print(lst6) # kq: 7 6 5 4 3 1

# 7. Ham reverse: dung de dao nguoc list:
lst6.reverse()
print(lst6) # kq: 1 6 7 3 5 4

# 8. Ham count: Dem so lan xuat hien cua 1 phan tu trong list
list8 = [6, 2, 3, 8, 2]
print(list8.count(2)) # kq: 2

# 9. Ham clear: Xoa het phan tu trong list:
lst9 = [7, 8, 9]
lst9.clear()
print(lst9) #kq: []
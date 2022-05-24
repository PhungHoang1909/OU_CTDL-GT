# 1. Ham len(): tra ve do dai cua chuoi:
from email import message


s1 = "abc"
print(len(s1)) # kq: 3
s11 = "abcd"
print(len(s11)) # kq: 4


# 2. Lower(): chuyen chuoi ve dang in thuong:
s2 = "Elaina"
print(s2.lower()) # kq: elaina


# 3. upper(): chuyen chuoi ve dang in hoa:
s3 = "elaina"
print(s3.upper()) # kq: ELAINA


# 4. isalnum(): kiem tra xau co chi chua cac ky tu chu va so hay khog:
s4 = "python2022"
print (s4.isalnum()) # kq: True
s42 = "python2022.com"
print (s42.isalnum()) # kq: 


# 5. isalpha(): ___ co chua toan cac ky tu chu hay khong:
s5 = "elaina"
print(s5.isalpha()) # kq: True
s52 = "4elaina"
print(s52.isalpha()) # kq: False


# 6. isnumeric(): ___ toan cac ky tu so hay khong:
s6 = "2022"
print(s6.isnumeric()) # kq: True
s62 = "python2022"
print(s62.isnumeric()) # kq: False


# 7. split(): cat mot chuoi ra thanh list cac chuoi khac dua tren 1 phan tu chuoi dau vao
s7 = "Welcome to Codelearn.io!"
print(s7.split(" "))
# kq: 'Welcome', 'to', 'Codelearn.io'
s72 = "A1B1C1D1E1"
print(s72.split("1")) # xoa '1'
# kq: A B C D E ' '


# 8. join(): Noi 1 tap hop thanh 1 chuoi su dung ki tu cho truoc
lst8 = ["Welcome", "to", "Codelearn.io!"]
print(" ".join(lst8))
# kq: Welcome to Codelearn.io!
lst82 = ["A","B","C"]
print("-".join(lst82))
# kq: A-B-C


# Co the su dung split + join de loai bo khoang trang thua trong chuoi:
message = "  Welcome  to Codelearn.io!  "
print(" ".join(message.split()))
# kq: Welcome to Codelearn.io!


# 9. replace(): Thay the cac chuoi con tim thay thanh chuoi con moi:
name = "Cod3l3arn"
print(name.replace("3", "e"))
# kq: Codelearn
str = str(input())

def ktchuoi(str):
    s = str.split(" ")
    lst = []
    for i in s:
        if (len(i) > 3):
            lst.append(i)
    return lst

print(ktchuoi(str))
s = str(input())

def format(chuoi):
    if len (chuoi) >= 3:
        if chuoi[-3:] == "ing":
            return chuoi + "ly"
        else:
            return chuoi + "ing"
        return chuoi
    else:
        return chuoi
print(format(s))
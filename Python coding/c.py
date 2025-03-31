a = input()
b = a.find("  ")
if b > -1:
    while b > -1:
        a = a.replace('  ',' ')
        b = a.find("  ")
    print(a)
    
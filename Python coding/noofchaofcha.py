name = input("Enter your name. : ")
name2 = (name.lower())
tem = ''
i = 0
while i < len(name2):
    if name2[i] not in tem:
        tem += name2[i]
        print(f"{name2[i]} : {name2.count(name2[i])}")
    i += 1
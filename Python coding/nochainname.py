name = input("enter your name. :")
cha = input("enter a charachter in your name ,for example 'a'. :")
print(f"number of charachters your name is {len(name.strip(' '))}.")
print(f"number of times {cha.strip()} came is {name.strip().lower().count(cha.strip().lower())}.")
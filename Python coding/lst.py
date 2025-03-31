c = int(input('Enter your number. : '))
d = int(input(f'Enter the number till which you want the table of {c} to be returned. : '))
for i in range(1,d + 1):
    print(f"{i} : {i*c}")


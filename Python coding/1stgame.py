print("You have to solve a math problem.\n \nThe number is 5 sqare multiplyed by 2 + 4 + 9 - 4 - 9 + 4\n ")
prod = input("shall we proceed? :")
Y = f"{prod.lower()}"
if prod == Y:
    print(" \nok\n ")
wnum = (5**2*2)+4+9-4-9+4
pnum = input("enter your answer :")   
pnum1 = int(pnum)
if pnum1 == wnum:
    print("CONGRATS! YOU WIN!")
elif pnum1 < wnum:
        print(f"OOPS!TOO LOW.\n \nAnswer is {wnum}.")
elif pnum1 > wnum:
        print(f"OOPS!TOO HIGH.\n \nAnswer is {wnum}.")     
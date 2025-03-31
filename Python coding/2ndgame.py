print('Welcome to the number guessing game.')
print('instructions:- ')
print('     1. In this game you will be guessing a number.')
print('     2. You will be able to play 3 levels in this game.')
print('     3. Every level will get harder and harder, and the THIRD LEVEL will be the hardest.')
over = False
a = 1
while not over:
    print("Here's LEVEL 1.\nIn the FIRST LEVEL you will be guessing between 1 to 50 and you will get 10 chances.")
    import random
    wnum = random.randint(1,50)
    wnum1 = int(wnum)
    guess = 1
    prod = input("shall we proceed? Y/N:")
    print(" \nok\n ")
    if prod == 'n':
        break
    else:
        pass
    pnum = (input("enter your answer :"))   
    pnum1 = int(pnum)
    game_over = False
    while not game_over:
        if int(pnum1) == int(wnum1):
            print(f"CONGRATS! YOU WIN! YOU GUESSED THE NUMBER IN {guess} TIMES!")
            game_over = True
        else:
            if int(pnum1) < int(wnum1):
                print("Too low.")
                guess += 1
            else:
                print("Too high.")
                guess += 1
            if pnum1 == None:
                print("I didn't understand.\n ")
            pnum1 = int(input(" \nguess again. : "))
            if guess == 10:
               print(f'I think you should give up.\nIt was {wnum1}.\nBetter luck next time.')
               game_over = True
    d = str(input('Do you want to play next level? Y/N : '))
    if d == 'n':
        break
    if d == 'y': 
        pass          
    print("Here's LEVEL 2.\nIn the SECOND LEVEL you will be guessing between 1 to 100 and you will get 10 chances.")
    import random
    wnum = random.randint(1,100)
    wnum1 = int(wnum)
    guess = 1
    prod = input("shall we proceed? Y/N:")
    print(" \nok\n ")
    if prod == 'n':
        break
    else:
        pass
    pnum = (input("enter your answer :"))   
    pnum1 = int(pnum)
    game_over = False
    while not game_over:
        if int(pnum1) == int(wnum1):
            print(f"CONGRATS! YOU WIN! YOU GUESSED THE NUMBER IN {guess} TIMES!")
            game_over = True
        else:
            if int(pnum1) < int(wnum1):
                print("Too low.")
                guess += 1
            else:
                print("Too high.")
                guess += 1
            if pnum1 == None:
                print("I didn't understand.\n ")
            pnum1 = int(input(" \nguess again. : "))
            if guess == 10:
                print(f'I think you shuold give up.\nIt was {wnum1}.\nBetter luck next time.')
                game_over = True
    d = str(input('Do you want to play next level? Y/N : '))
    if d == 'n':
        break
    if d == 'y':
        pass
    print("Here's LEVEL 3.\nIn the THIRD LEVEL you will be guessing between 1 to 100 and you will get only 5 chances.")
    import random
    wnum = random.randint(1,100)
    wnum1 = int(wnum)
    guess = 1
    prod = input("shall we proceed? Y/N:")
    print(" \nok\n ")
    if prod == 'n':
        break
    else:
        pass
    pnum = (input("enter your answer :"))   
    pnum1 = int(pnum)
    game_over = False
    while not game_over:
        if int(pnum1) == int(wnum1):
            print(f"CONGRATS! YOU WIN! YOU GUESSED THE NUMBER IN {guess} TIMES!")
            game_over = True
        else:
            if int(pnum1) < int(wnum1):
                print("Too low.")
                guess += 1
            else:
                print("Too high.")
                guess += 1
            if pnum1 == None:
                print("I didn't understand.\n ")
            pnum1 = int(input(" \nguess again. : "))
            if guess == 5:
                print(f'I think you shuold give up.\nIt was {wnum1}.\nBetter luck next time.')
                game_over = True
    print('THANKS FOR PLAYING THE GAME.\nYOU CAN PLAY IT AGAIN.')
    over = True   
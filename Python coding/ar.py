
over = False
while not over:
    c = str(input('What do you want to play? First game or sencond game? : '))
    if c == '1':
        print("You have to solve a math problem.\n \nThe number is : 5 sqare multiplyed by 2 + 4 + 9 - 4 - 9 + 4\n ")
        prod = input("shall we proceed? :")
        print(" \nok\n ")
        if prod == 'n':
            break
        else:
            pass
        wnum = 5**2*2+4+9-4-9+4
        pnum = input("enter your answer :")   
        pnum1 = int(pnum)
        if pnum1 == wnum:
            print("CONGRATS! YOU WIN!")
        elif pnum1 < wnum:
            print(f"OOPS!TOO LOW.\n \nAnswer is {wnum}.")
        elif pnum1 > wnum:
            print(f"OOPS!TOO HIGH.\n \nAnswer is {wnum}.")
        d = str(input('Do you want to play one more time? Y/N : '))
        if d == 'n':
            over = True
        if d == 'y':    
            over = False
    elif c == '2':
        print('Welcome to the number guessing game.')
        print('instructions:- ')
        print('     1. In this game you will be guessing a number.')
        print('     2. You will be able to play 3 levels in this game.')
        print('     3. Every level will get harder and harder, and the THIRD LEVEL will be the hardest.')
        over1 = False
        a = 1
        while not over1:
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
            ov_er = False
            while not ov_er:
                if int(pnum1) == int(wnum1):
                    print(f"CONGRATS! YOU FINISHED LEVEL 1! YOU GUESSED THE NUMBER IN {guess} TIMES.")
                    ov_er = True
                    over1 = True
                    guess = 1
                    wnum = random.randint(1,50)
                    wnum1 = int(wnum)                  
                else:
                    if int(pnum1) < int(wnum1):
                        print("Too low.")
                        guess += 1
                    else:
                        print("Too high.")
                        guess += 1
                    pnum1 = int(input(" \nguess again. : "))
                    if guess == 11:
                        if pnum1 == wnum1:
                            ov_er = True
                            over1 = True 
                            guess = 1
                            wnum = random.randint(1,50)
                            wnum1 = int(wnum)
                        else:
                            print(f'I think you should give up.\nIt was {wnum1}.\nBetter luck next time.')
                            ov_er = True
                            over1 = True 
                            guess = 1
                            wnum = random.randint(1,50)
                            wnum1 = int(wnum)
                if over1 == True and ov_er == True:
                    e = str(input('Do you want to play this level again? y/n :'))
                    if e == 'y':
                        print('\nok\n')
                        pnum1 = int(input("enter your answer :"))
                        ov_er = False
                        over1 = False                
                    if e == 'n':
                        print('\nok\n')
                        ov_er = True
                        over1 = True
                else:
                    pass                                    
            d = str(input('Do you want to play next level? Y/N : '))
            if d == 'n':
                over = True
            if d == 'y': 
                over = False
        over2 = False
        while not over2:             
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
            o_ver = False
            while not o_ver:
                if int(pnum1) == int(wnum1):
                    print(f"CONGRATS! YOU FINISHED LEVEL 2! YOU GUESSED THE NUMBER IN {guess} TIMES.")
                    o_ver = True
                    over2 = True
                    guess = 1
                    wnum = random.randint(1,100)
                    wnum1 = int(wnum)
                else:
                    if int(pnum1) < int(wnum1):
                        print("Too low.")
                        guess += 1
                    else:
                        print("Too high.")
                        guess += 1
                    pnum1 = int(input(" \nguess again. : "))
                    if guess == 11:
                        if pnum1 == wnum1:
                            o_ver = True
                            over2 = True 
                            guess = 1
                            wnum = random.randint(1,50)
                            wnum1 = int(wnum)
                        else:
                            print(f'I think you should give up.\nIt was {wnum1}.\nBetter luck next time.')
                            o_ver = True
                            over2 = True 
                            guess = 1
                            wnum = random.randint(1,100)
                            wnum1 = int(wnum)
                if over2 == True and o_ver == True:
                    e = str(input('Do you want to play this level again? y/n :'))
                    if e == 'y':
                        print('\nok\n')
                        pnum1 = int(input("enter your answer :"))
                        o_ver = False
                        over2 = False                
                    if e == 'n':
                        print('\nok\n')
                        o_ver = True
                        over2 = True
                else:
                    pass              
            d = str(input('Do you want to play next level? Y/N : '))
            if d == 'n':
                over = True
            if d == 'y':
                over = False 
        over3 = False
        while not over3:
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
            ove_r = False
            while not ove_r:
                if int(pnum1) == int(wnum1):
                    print(f"CONGRATS! YOU FINISHED LEVEL 3! YOU GUESSED THE NUMBER IN {guess} TIMES.")
                    ove_r = True
                    over3 = True
                    guess = 1
                    wnum = random.randint(1,100)
                    wnum1 = int(wnum)           
                else:
                    if int(pnum1) < int(wnum1):
                        print("Too low.")
                        guess += 1
                    else:
                        print("Too high.")
                        guess += 1
                    pnum1 = int(input(" \nguess again. : "))
                    if guess == 6:
                        if pnum1 == wnum1:
                            ove_r = True
                            over3 = True 
                            guess = 1
                            wnum = random.randint(1,100)
                            wnum1 = int(wnum)
                        else:
                            print(f'I think you should give up.\nIt was {wnum1}.\nBetter luck next time.')
                            ove_r = True
                            over3 = True 
                            guess = 1
                            wnum = random.randint(1,100)
                            wnum1 = int(wnum)
                if over3 == True and ove_r == True:
                    e = str(input('Do you want to play this level again? y/n :'))
                    if e == 'y':
                        print('\nok\n')
                        pnum1 = int(input("enter your answer :"))
                        ove_r = False
                        over3 = False                
                    if e == 'n':
                        print('\nok\n')
                        ove_r = True
                        over3 = True 
                else:
                    pass        
        print('THANKS FOR PLAYING THE GAME.\nIF YOU WANT THEN YOU CAN PLAY IT AGAIN.') 
        d = str(input('Do you want to play one more time? Y/N : '))
        if d == 'n':
            over = True
        if d == 'y':
            over = False           
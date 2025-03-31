def lastcha(a):
    return a[-1]
# returns the last charachter of string.

def oddeven(a):
    if a%2 == 0:
        return "even"
    return "odd"
# checks if the number is odd or even.

def whichg2(a,b):
    if a < b:
        return b
    return a
# returns the number which is greater.(input as two numbers only.)

def whichg3(a,b,c):
    bigger = whichg2(a,b)
    return whichg2(bigger,c)
# returns the number which is greatest.(input as 3 numbers.)

def is_pallindrome(a): 
    if a == a[::-1]:
        return True
    return False
# checks if the word is a pallindrom(eg.naman = naman) or not.

def fibbonacci(n):
    a = 0 #first number
    b = 1 #second number
    i = 0    
    if n == 1:
        print(a)
    elif n == 2:
        print(a, b) #print will be a b, 0 1
    else:
        print(a, b, end = ',')
        for i in range(n-2):
            c = a + b # c=1
            a = b # a=1
            b = c # b=1
            print(b , end = ",")
#fibbonacci sequence =0 1 1 2 3 5 8 = 0+1,1+1,2+1........

def  user_info(first_name, last_name, age = None):
    print(f"Your first name is {first_name}.")
    print(f"Your last name is {last_name}.")
    print(f"your age is {age}.")
# prints first name, last name and age. 

def neglist(a):
    neg =[]
    i = 1
    for i in a:
        neg.append(-i)
    return neg
# returns negative values of a list.

def rstonum(a,b):
    sq = []
    i = 1
    for i in a:
        sq.append(i**b)
    return sq
 #multiplies expomemtialy to the given list.

def revls(a):
    r = []
    i = 1
    for i in range(1, len(a)+1):
         pop = a.pop()
         r.append(pop)
    return r
#reverses given list.
 
def revstr(a):
    return [i[::-1] for i in a]
#reverses a given string totally(elements included) 

def filtodev(a):
    l = []
    m = []
    for i in a:
        if i%2 == 0:
            l.append(i)
        else:
            m.append(i)
    return  f'[{l} , {m}]'
#filters odd and even numbers from a list.

def comfin(a,b):
    k = []
    for i in a:
        if i in b:
            k.append(i)
    return k
#finds common elements from the list.

def greatdiff(a):
    return max(a) - min(a)
#finds the greatest difference in elements of a list.

def noofintlist(a):
    count = 0
    for i in a:
        if type(i) == list:
            count += 1
    return count
#finds no of lists in a list.

def cubefin(a):
    cu = {}
    for i in range(1,a+1):
        cu[i] = i**3
    return cu
# returns cubes till the given number as dictionary.

def noofchn(s):
    wodc = {char:s.count(char) for char in s}
    return wodc
# rerturns number of chrachters in a string.

def onlynum(l):
    return [str(i) for i in l if type(i) == int or type(i) == float]
# returns only integers of a list in the form of string sorted from other data types.

def sqnum(b):
    b = int(input('enter your number: '))
    s = {f'Sqare of {i} is':i**2 for i in range(1,b+1)}
    for k,v in s.items():
        print(f'{k} : {v}')
# rteurns sqare of the number.

def avg(*args):
    t = 0
    for n in args:
        t += n
    return t/len(args)

# returns average of given numbers

def multinums(*args):
    m = 1
    for i in args:
        m *= i 
    return m
# multiplies the gien numbers.
 
def topow(a,*args):
    if args:
        return [i**a for i in args]
    else:
        return "You haven't given your numbers."
# raises the numbers to the given power in a list.
#for eg. [2,1,2,3]
#output = 1,4,9



#           PADK
#PRAMETERS, ARGS, DEFAULT,KWARGS.


def func2(a,**kwargs):
    if kwargs.get('reverse_str') == True:
        return [name[::-1].title() for name in a]
    else:
        return [name.title() for name in a] 
# This is important 

def nadd(*args):
    t = 0
    for n in args:
        t += n
    return t
#adds every number given.

a = str(input('Enter your name. : '))
b = int(input('Enter your age. : ')) 
print(f'Your name is {a}, you are {b} years old.')
if 13 > b > 0:
    print("You are still a child.")
elif 20 > b > 13 or b == 13:
    print('You are a teenager.')
elif 50 > b > 20 or b == 20:
    print('You are an adult.')
else:
    print('You have came a long way!')

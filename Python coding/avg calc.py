def avg(*args):
    t = 0
    for n in args:
        t += n
    return t/len(args)+1

print(avg(1,2,3,4,5,6,7,8,9,10))

n  = input('Enter a number which has more than 1 digit. : ') 
t = 0
i = 0
while i < len(n):
    t += int(n[i])
    i += 1
print(t)    
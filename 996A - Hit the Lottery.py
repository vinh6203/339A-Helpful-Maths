n = int(input())
count = 0
while n > 0:
    if n >= 100:
        count += int(n/100)
        n -= 100*(int(n/100))
    elif n >= 20:
        count += int(n/20)
        n -= 20*(int(n/20))
    elif n >= 10:
        count += int(n/10)
        n -= 10*(int(n/10))
    elif n >= 5:
        count += int(n/5)
        n -= 5*(int(n/5))
    else:
        count += n
        n = 0
print(count)

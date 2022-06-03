t = int(input())
for w in range(t):
    a = input()
    b = ""
    b += a[0]
    if len(a) == 2:
        print(a)
    else:
        for i in range(1, len(a)-1, 2):
            b += a[i]
        b += a[len(a)-1]
        print(b)

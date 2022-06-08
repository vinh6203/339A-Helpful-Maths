t = int(input())

for i in range(t):
    a = input()
    b = input()
    if "a" in b and len(b) > 1:
        print(-1)
        continue
    if a.replace("a", b) == a:
        print(1)
        continue
    print(pow(2, len(a)))

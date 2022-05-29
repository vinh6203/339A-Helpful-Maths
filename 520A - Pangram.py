check = []
p = int(input())
n = input()
n = n.lower()

for i in n:
    if i not in check:
        check.append(i)

if len(check) == 26:
    print("YES")
else:
    print("NO")

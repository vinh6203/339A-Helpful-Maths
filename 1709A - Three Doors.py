for _ in range(int(input())):
    dic = {}
    x = int(input())
    a = list(map(int, input().split()))
    key = x - 1
    for i in range(3):
        if key == -1:
            continue
        dic[a[key]] = 1
        key = a[key] - 1
    if len(dic) == 3:
        print("YES")
    else:
        print("NO")

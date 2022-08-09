for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    dic = {}
    count = 0
    for i in reversed(range(len(a))):
        if a[i] in dic:
            break
        count += 1
        dic[a[i]] = 1
    print(n - count)

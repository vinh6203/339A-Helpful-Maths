for _ in range(int(input())):
    n = int(input())
    s = input()
    table = {}
    ans = 0
    for i in s:
        if i not in table:
            table[i] = 1
            ans += 2
        else:
            ans += 1
    print(ans)

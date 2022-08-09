for _ in range(int(input())):
    s = int(input())
    ans = ""
    i = 0
    while s >= 10 - i:
        ans += str(9-i)
        s -= 9-i
        i += 1
    ans += str(s)
    print(ans[::-1])

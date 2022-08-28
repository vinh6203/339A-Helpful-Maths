for _ in range(
    int(input())
    ):
    n = int(input())
    a = list(map(int, input().split()))
    ans = "YES"
    for i in range(1, n):
        if a[i] % a[0] != 0:
            ans = "NO"
            break
    print(ans)

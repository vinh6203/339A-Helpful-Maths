for _ in range(
    int(input())
    ):
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort(reverse=True)
    total = 0
    count = 0
    for i in range(0, n):
        total += a[i]
        if total / (i + 1) >= x:
            count = i + 1
    print(count)

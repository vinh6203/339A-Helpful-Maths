for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    if a[len(a) - 1] - a[0] > n + 1:
        print("NO")
    else:
        print("YES")

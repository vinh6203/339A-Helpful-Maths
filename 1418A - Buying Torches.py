for _ in range(
    int(input())
    ):
    x, y, k = map(int, input().split())
    print((k*(y+1) + x - 3)//(x - 1) + k)

for _ in range(
    int(input())
    ):
    l = list(map(int, input().split()))
    a, b = map(int, input().split())
    print(min((max(l) + min(l))*a, min(l)*b + (max(l) - min(l))*a))

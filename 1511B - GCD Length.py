for _ in range(
    int(input())
    ):
    a, b, c = map(int, input().split())
    g = pow(10, c - 1)
    if a <= b:
        x = pow(10, a - 1)
        y = g + x*((pow(10, b - 1) - g)//x + 1)
    else:
        y = pow(10, b-1)
        x = g + y*((pow(10, a - 1) - g)//y + 1)
    print(x, y)

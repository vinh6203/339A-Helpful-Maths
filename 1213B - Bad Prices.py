for _ in range(
    int(input())
    ):
    n = int(input())
    a = list(map(int, input().split()))
    stack = []
    count = 0

    for i in a:
        while len(stack) > 0 and stack[-1] > i:
            stack.pop()
            count += 1
        stack.append(i)

    print(count)

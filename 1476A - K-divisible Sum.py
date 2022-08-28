for _ in range(
    int(input())
    ):
    n, k = map(int, input().split())
    sum = 0
    if n % k != 0:
        sum = n + k - n % k
    sum //= n
    if k % n != 0 or k == n:
        sum += 1
    print(sum)

for _ in range(int(input())):
    n = int(input())
    num = int(input())
    if num//(9*(pow(10, n-1))) == 1:
        print(pow(10, n) + pow(10, n-1) + 11 - num)
    else:
        print(pow(10, n) - 1 - num)

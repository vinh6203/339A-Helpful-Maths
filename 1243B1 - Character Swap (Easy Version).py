for _ in range(
    int(input())
    ):
    n = int(input())
    s = input()
    t = input()
    ans = "Yes"
    pair_diff = None
    count = 2
    for i, j in zip(s, t):
        if i != j:
            count -= 1
            if pair_diff == None:
                pair_diff = (i, j)
            elif pair_diff != (i, j) or count < 0:
                ans = "No"
                break
    if count == 1:
        ans = "No"
    print(ans)

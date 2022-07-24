for _ in range(int(input())):
    dic = {}
    count = 0
    n = input()
    for i in n:
        if i not in dic:
            dic[i] = 1
            if len(dic) == 4:
                count += 1
                dic = {}
                dic[i] = 1
    if len(dic) != 0:
        count += 1
    print(count)

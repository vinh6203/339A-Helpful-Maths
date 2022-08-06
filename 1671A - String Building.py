for _ in range(int(input())):
    s = input()
    temp = ""
    ans = "YES"
    for char in s:
        if len(temp) > 0 and char != temp[0]:
            if len(temp) < 2:
                ans = "NO"
                break
            else:
                temp = ""
        temp += char
    if len(temp) < 2:
        print("NO")
        continue
    print(ans)

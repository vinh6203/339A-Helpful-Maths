mp = {}
for _ in range(int(input())):
    s = input()
    if s not in mp:
        print("OK")
        mp[s] = 1
    else:
        print(s + str(mp[s]))
        mp[s] += 1

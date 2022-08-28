from math import lcm

for _ in range(
    int(input())
    ):
    s = input()
    t = input()
    lcm_string_len = lcm(len(s), len(t))
    s += (lcm_string_len//len(s))*s
    t += (lcm_string_len//len(t))*t
    if s[:lcm_string_len] == t[:lcm_string_len]:
        print(s[:lcm_string_len])
    else:
        print(-1)

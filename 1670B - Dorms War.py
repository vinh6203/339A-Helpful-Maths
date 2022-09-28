from sys import stdin
 
for _ in range(
    int(input())
    ):
    n = int(stdin.readline())
    s = stdin.readline()
    special_character = set(stdin.readline().split())
    
    max_distance = 0
    previous_special = 0
    for i in range(n):
        if s[i] in special_character:
            max_distance = max(max_distance, i - previous_special)
            previous_special = i
    print(max_distance)

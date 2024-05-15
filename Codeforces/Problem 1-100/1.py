n = int(input())
total = 0
for i in range(0, n):
    x = input()
    if x.count('1') >= 2:
        total += 1
print(total)
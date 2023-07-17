n = int(input())
fat = n
for i in range(n, 1, -1):
    fat = fat * (i - 1)
print(fat)
qnt = int(input())

par = []
impar = []

for i in range(qnt):
    num = int(input())
    if (num % 2 == 0):
        par.append(num)
    else:
        impar.append(num)

par.sort()
impar.sort(reverse=True)
for num in par:
    print(num)
for num in impar:
    print(num)
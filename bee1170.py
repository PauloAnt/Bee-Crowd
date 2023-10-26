qnt = int(input())

for i in range(qnt):
    cont = 0
    num = float(input())
    while num > 1:
        num /=  2
        cont += 1
    print(f"{cont} dias")
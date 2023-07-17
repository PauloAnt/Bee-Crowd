num = int(input("Informe um número inteiro: "))
mult = 0
if(num % 2 == 0):
    for i in range(num, 1, -2):
        mult = i**2
        print(i,"^",i,"=", mult )

else:
    for i in range(num - 1, 1, -2):
        mult = i**2
        print(i,"^",i,"=", mult )
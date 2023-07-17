num1, num2 = input().split()
num1, num2 = int(num1), int(num2)
cod = 1

if (num1 == num2):
    cod = 2
    print("Encerrando programa...")
elif(num2 > num1):
    print("Crescente")
else:
    print("Decrescente")

while (cod == 1):
    num1, num2 = input().split()
    num1, num2 = int(num1), int(num2)
    if(num1 == num2):
        print("Encerrando programa...")
        break
    elif(num2 > num1):
        print("Crescente")
    else:
        print("Decrescente")
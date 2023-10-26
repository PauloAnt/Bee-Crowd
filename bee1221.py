qnt = int(input())


for i in range(qnt):
    cont = False
    num = int(input())
    if num <= 1:
         print("Not Prime")
         cont = True
    elif num == 2:
         print("Prime")
         cont = True
    elif num % 2 == 0:
         print("Not Prime")
    else:
        for j in range(3, int(num ** 0.5) + 1, 2):
            if (num % j == 0):
                cont = True
                break
        if(cont):
            print("Not Prime")
        else:
            print("Prime")

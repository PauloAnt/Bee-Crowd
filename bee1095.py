num1 = -2
num2 = 65

for i in range(num1, num2):
    num1 += 3
    num2 -= 5
    print("I=",num1, "J=", num2)
    if(num2 == 0):
        break


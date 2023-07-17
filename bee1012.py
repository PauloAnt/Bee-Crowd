PI = 3.14159

num1, num2, num3 = input().split()
num1, num2, num3 = float(num1), float(num2), float(num3)

areatr = (num1 * num3)/2
areacir = PI * num3**2
areatrap = ((num1 + num2) * num3)/2
areaquad = num2**2
arearet = num1 * num2

print("TRIANGULO: {:.3f}".format(areatr))
print("CIRCULO: {:.3f}".format(areacir))
print("TRAPEZIO: {:.3f}".format(areatrap))
print("QUADRADO: {:.3f}".format(areaquad))
print("RETANGULO: {:.3f}".format(arearet))
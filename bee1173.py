numeros = []
pos = 0
cod = 1
mult = 0

valor = int(input())
numeros.append(valor)
print("N{} = {}".format([pos], valor))
pos += 1
mult = valor * 2
numeros.append(mult)


while (cod == 1):
    for numero in numeros:
        mult = mult * 2
        numeros.append(mult)
        print("N{} = {}".format([pos], numero * 2))
        pos += 1
        if(pos == 10):
            break
    break
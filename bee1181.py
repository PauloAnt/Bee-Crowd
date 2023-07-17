soma = 0
media = 0
matriz = []
line = int(input())
operation = input().upper()

for l in range(12):
    linha = []
    for c in range(12):
        linha.append(float(input()))
    matriz.append(linha)

if (operation == "S"):
    for l in range(1):
        for c in range(12):
            soma += matriz[line][c]
elif (operation == "M"):
    for l in range(1):
        for c in range(12):
            soma += matriz[line][c]

if (operation == "S"):
    print("{:.1f}".format(soma))
elif (operation == "M"):
    media = soma/12
    print("{:.1f}".format(media))

matriz = []
soma = 0
media = 0
point = 0

cod = input().upper()
for l in range(12):
    linha = []
    for c in range(12):
        linha.append(float(input()))
    matriz.append(linha)

for c in range(12):
    for l in range(12):
        if (l == c):
            point = l
        elif (point < l) and (point >= c):
            soma += matriz[l][c]

if (cod == "S"):
    print("{:.1f}".format(soma))
elif (cod == "M"):
    media = soma/66
    print("{:.1f}".format(media))
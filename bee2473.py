aposta = [int(x) for x in input().split()]
sorteado = [int(x) for x in input().split()]
cont = 0

for i in range(len(aposta)):
    if (aposta[i] in sorteado):
        cont += 1

if (cont < 3):
    print("azar")
if (cont == 3):
    print("terno")
if (cont == 4):
    print("quadra")
if (cont == 5):
    print("quina")
if (cont == 6):
    print("sena")
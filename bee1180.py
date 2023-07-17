qnt = int(input())

lista = list(map(int, input().split()))
menor_val = min(lista)
pos = 0

for i in range(qnt):
    if lista[i] == menor_val:
        pos = i

print("Menor valor:", menor_val)
print("Posicao:", pos)

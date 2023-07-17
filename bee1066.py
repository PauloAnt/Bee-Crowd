par = 0
impar = 0
pos = 0
neg = 0
qtd = 5

print(f"Digite {qtd} números: ")

for i in range(qtd):
    num = float(input())
    if(num > 0):
        pos += 1
    if(num < 0):
        neg += 1
    if(num % 2 == 0):
        par += 1
    if(num % 2 != 0):
        impar += 1

        
print(f"{par} valor(es) par(es)")
print(f"{impar} valor(es) impar(es)")
print(f"{pos} valor(es) positivo(s)")
print(f"{neg} valor(es) negativo(s)")
    
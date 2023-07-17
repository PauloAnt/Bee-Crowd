inter = 0
gremio = 0
emp = 0
cod = 1

while(cod == 1):
    gol1, gol2 = input().split()
    gol1, gol2 = int(gol1), int(gol2)
    if(gol1 > gol2):
        inter += 1
    elif(gol2 > gol1):
        gremio += 1
    else:
        emp += 1
    print("Novo grenal (1-sim 2-nao)")
    cod = int(input("R: "))

print(inter + gremio + emp ,"grenais")
print("Inter:", inter)
print("Gremio:", gremio)
print("Empates:", emp)

if(inter > gremio):
    print("Inter venceu mais")
elif(gremio > inter):
    print("Grêmio venceu mais")
else:
    print("Nao houve vencedor",)    
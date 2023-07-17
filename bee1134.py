alc = 0
gas = 0
die = 0
dec_cod = 1

while(dec_cod == 1):
    print("1.Álcool 2.Gasolina 3.Diesel 4.Fim).")
    cod = int(input("R: "))
    if(cod == 4):
        dec_cod = 2
    elif(cod == 1):
        alc += 1
    elif(cod == 2):
        gas += 1
    elif(cod == 3):
        die += 1

print("MUITO OBRIGADO")
print("Alcool: ", alc)
print("Gasolina: ", gas)
print("Diesel: ", die)
    
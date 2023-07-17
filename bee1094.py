coe = 0
sap = 0
rat = 0
num = 0
cob = 0
total = 0

qnt = int(input())

if(qnt >= 1) and (qnt <= 15):
    for i in range(qnt):
        num, cob = input().split(" ")
        num = int(num)
        if(cob == "C"):
            coe += num
        if(cob == "R"):
            rat += num
        if(cob == "S"):
            sap += num

total = coe + rat + sap

perc_coe = (coe*100)/total
perc_rat = (rat*100)/total
perc_sap = (sap*100)/total

print("Total: ", total, "cobaias")
print("Total de coelhos: ", coe)
print("Total de ratos: ", rat)
print("Total de sapos: ", sap)
print(f"Percentual de coelhos:  {perc_coe:.2f}", "%")
print(f"Percentual de ratos: {perc_rat:.2f}", "%")
print(f"Percentual de sapos:  {perc_sap:.2f}", "%")
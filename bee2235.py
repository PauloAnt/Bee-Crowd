cred = [int(x) for x in input().split()]

maior = max(cred)
cred.remove(maior)

if (cred[0] == maior):
    print("S")
elif (cred[1] == maior):
    print("S")
elif (cred[0] + cred[1] == maior):
    print("S")
elif (cred[0] == cred[1]):
    print("S")
else:
    print("N")
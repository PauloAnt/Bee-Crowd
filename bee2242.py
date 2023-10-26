risada = input()
n = ""

for letra in risada:
    if (letra in "aeiou"):
        n += letra
if (n == n[::-1]):
    print("S")
else:
    print("N")
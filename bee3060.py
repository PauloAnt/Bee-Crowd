val = int(input())
parc = int(input())
div = []
sub = 0

for i in range(parc):
    div.append(val // parc)

if (div != val):
    sub = val - sum(div)
    for i in range(sub):
        div[i] += 1

for num in div:
    print(num)

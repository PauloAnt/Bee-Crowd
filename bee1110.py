while True:
    card_des = []
    baralho = []
    dc = ''
    num = int(input())
    if (num == 0):
        break
    for i in range(1, num + 1):
        if (i % 2 == 0):
            baralho.append(i)
        else:
            card_des.append(i)
    if (num % 2 == 0):
        cont = 0
        while len(baralho) != 1:
            if (cont % 2 == 0):
                card_des.append(baralho[0])
                baralho.pop(0)
                cont += 1
            else:
                carga = baralho[0]
                baralho.pop(0)
                baralho.append(carga)
                cont += 1
    else:
        cont = 0
        while len(baralho) != 1:
            if (cont % 2 != 0):
                card_des.append(baralho[0])
                baralho.pop(0)
                cont += 1
            else:
                carga = baralho[0]
                baralho.pop(0)
                baralho.append(carga)
                cont += 1

    for item in card_des:
        dc += str(item) + ", "
    dc = dc.rstrip(", ")
    print(f"Discarded cards: {dc}")
    print(f"Remaining card: {baralho[0]}")
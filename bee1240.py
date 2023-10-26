qnt = int(input())
for i in range(qnt):
    a, b = map(int, input().split())
    a = str(a)
    b = str(b)
    if (len(a) < len(b)):
        print("nao encaixa")
    elif (a[-len(b):] == b):
        print("encaixa")
    elif (a[-len(b):] != b):
        print("nao encaixa")
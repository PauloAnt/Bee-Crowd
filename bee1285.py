while True:
    try:
        cont = 0
        num1, num2 = map(int, input().split())
        for i in range(num1, num2 + 1):
            if (len(set(list(str(i)))) == len(str(i))):
                cont += 1
        print(cont)
    except EOFError:
        break
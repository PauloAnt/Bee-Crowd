while True:
    try:
        soma1 = 1
        soma2 = 1
        a, b = map(int, input().split())
        for i in range(2, a + 1):
            soma1 *= i
        for i in range(2, b + 1):
            soma2 *= i
        print(soma1 + soma2)
    except EOFError:
        break
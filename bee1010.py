cod1, qnt1, uni1 = input().split()
cod1, qnt1, uni1 = int(cod1), int(qnt1), float(uni1)

cod2, qnt2, uni2 = input().split()
cod2, qnt2, uni2 = int(cod2), int(qnt2), float(uni2)

valor = qnt1 * uni1 + qnt2 * uni2
print("VALOR A PAGAR: R$ {:.2f}".format(valor))

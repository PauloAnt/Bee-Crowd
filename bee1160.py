h_inicial, min_inicial, h_final, min_final = input().split()
h_inicial, min_inicial, h_final, min_final = int(h_inicial), int(min_inicial), int(h_final), int(min_final)
hora_final = 0

hora = 60 * h_final - 60 * h_inicial


if (min_inicial < min_final):
    min = (min_inicial - min_final) * -1
    hora = (min + hora)
elif (min_inicial > min_final):
    min = min_inicial - min_final
    hora = hora - min
elif (min_inicial == min_final):
    min = min_inicial - min_final
    hora = hora - min


if (hora < 60):
    cont_min = hora
    cont = hora // 60
elif (hora > 60) and (min > 0):
    cont = hora // 60
    cont_min = cont % 60
elif (hora > 60) and (min == 0):
    cont = hora // 60
    cont_min = 0

if (min_inicial == min_final) and (h_inicial == h_final):
    print("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)")
else:    
    print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(cont, cont_min))
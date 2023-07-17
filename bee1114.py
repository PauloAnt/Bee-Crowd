SENHA = 2002
cod = 1

password = int(input("Informe a senha: "))
if (password == SENHA):
    print("Acesso Permitido")
    cod = 0
else:
    print("Senha inválida")

while (cod == 1):
    password = int(input("Informe a senha: "))
    if (password == SENHA):
        print("Acesso Permitido")
        cod = 0
    else:
        print("Senha inválida")
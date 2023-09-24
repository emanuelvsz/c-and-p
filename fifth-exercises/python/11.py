# Questão 11: Exiba uma lista de opções (menu) e imprima a tabuada da operação escolhida.

while True:
    print("Menu:")
    print("1 - Adição")
    print("2 - Subtração")
    print("3 - Multiplicação")
    print("4 - Divisão")
    print("5 - Sair")
    escolha = input("Escolha uma opção: ")

    if escolha == '5':
        break

    if escolha in ['1', '2', '3', '4']:
        num = int(input("Digite um número para ver a tabuada: "))

        if escolha == '1':
            for i in range(1, 11):
                print(f"{num} + {i} = {num + i}")
        elif escolha == '2':
            for i in range(1, 11):
                print(f"{num} - {i} = {num - i}")
        elif escolha == '3':
            for i in range(1, 11):
                print(f"{num} * {i} = {num * i}")
        elif escolha == '4':
            for i in range(1, 11):
                if i != 0:
                    print(f"{num} / {i} = {num / i}")
                else:
                    print(f"{num} / {i} = Infinito")
    else:
        print("Opção inválida! Tente novamente.")

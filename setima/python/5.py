agenda = []

while True:
    print("Menu de Opções:")
    print("1 - Cadastrar 10 registros")
    print("2 - Pesquisar registro pelo nome")
    print("3 - Classificar registros por ordem de nome")
    print("4 - Apresentar todos os registros")
    print("5 - Sair do programa")
    
    opcao = input("Escolha uma opção: ")
    
    if opcao == "1":
        for _ in range(10):
            nome = input("Digite o nome: ")
            endereco = input("Digite o endereço: ")
            telefone = input("Digite o telefone: ")
            registro = (nome, endereco, telefone)
            agenda.append(registro)
    elif opcao == "2":
        nome_pesquisa = input("Digite o nome a ser pesquisado: ")
        for registro in agenda:
            if registro[0] == nome_pesquisa:
                print("Registro encontrado:")
                print(registro)
                break
        else:
            print("Registro não encontrado.")
    elif opcao == "3":
        agenda.sort(key=lambda x: x[0])
    elif opcao == "4":
        for registro in agenda:
            print("Nome:", registro[0])
            print("Endereço:", registro[1])
            print("Telefone:", registro[2])
            print()
    elif opcao == "5":
        break
    else:
        print("Opção inválida. Tente novamente.")

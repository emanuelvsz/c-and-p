# Questão 8: Leia dois números e pergunte qual operação você deseja realizar.

num1 = float(input("Digite o primeiro número: "))
num2 = float(input("Digite o segundo número: "))
operacao = input("Escolha a operação (+, -, *, /): ")

if operacao == '+':
    resultado = num1 + num2
elif operacao == '-':
    resultado = num1 - num2
elif operacao == '*':
    resultado = num1 * num2
elif operacao == '/':
    if num2 != 0:
        resultado = num1 / num2
    else:
        print("Erro: Divisão por zero!")
        resultado = None
else:
    print("Operação inválida!")
    resultado = None

if resultado is not None:
    print(f"Resultado: {resultado}")

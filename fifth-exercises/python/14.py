num1 = int(input("Digite o primeiro número: "))
num2 = int(input("Digite o segundo número: "))

if num2 != 0:
    resto = num1 % num2
    print(f"O resto da divisão de {num1} por {num2} é: {resto}")
else:
    print("Erro: Divisão por zero!")

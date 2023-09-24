numero = int(input("Digite um número: "))
numero_str = str(numero)
reverso_str = numero_str[::-1]

if numero_str == reverso_str:
    print(f"{numero} é um número palíndromo.")
else:
    print(f"{numero} não é um número palíndromo.")

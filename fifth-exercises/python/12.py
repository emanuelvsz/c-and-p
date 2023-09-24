# Questão 12: Verifique se um número é primo.

numero = int(input("Digite um número inteiro: "))

if numero <= 1:
    eh_primo = False
elif numero == 2:
    eh_primo = True
elif numero % 2 == 0:
    eh_primo = False
else:
    eh_primo = True
    for i in range(3, int(numero**0.5) + 1, 2):
        if numero % i == 0:
            eh_primo = False
            break

if eh_primo:
    print(f"{numero} é um número primo.")
else:
    print(f"{numero} não é um número primo.")

# Questão 10: Calcule o preço a pagar pelo fornecimento de energia elétrica.

kWh = float(input("Digite a quantidade de kWh consumida: "))
tipo_instalacao = input("Digite o tipo de instalação (R para residências, I para indústrias, C para comércios): ")

if tipo_instalacao in ['R', 'r']:
    if kWh <= 500:
        preco = kWh * 0.40
    else:
        preco = kWh * 0.65
elif tipo_instalacao in ['C', 'c']:
    if kWh <= 1000:
        preco = kWh * 0.55
    else:
        preco = kWh * 0.60
elif tipo_instalacao in ['I', 'i']:
    if kWh <= 5000:
        preco = kWh * 0.55
    else:
        preco = kWh * 0.60
else:
    print("Tipo de instalação inválido!")
    preco = None

if preco is not None:
    print(f"O preço a pagar é: R$ {preco:.2f}")


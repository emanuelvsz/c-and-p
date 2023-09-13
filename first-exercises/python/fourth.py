# Solicita a quantidade de km percorridos e a quantidade de dias de aluguel
km_percorridos = float(input("Digite a quantidade de km percorridos: "))
dias_aluguel = int(input("Digite a quantidade de dias de aluguel: "))

# Taxa diária e taxa por km rodado
taxa_diaria = 60  # R$60 por dia
taxa_por_km = 0.15  # R$0.15 por km rodado

# Calcula o preço a pagar
preco_a_pagar = (dias_aluguel * taxa_diaria) + (km_percorridos * taxa_por_km)

# Exibe o preço a pagar
print(f"O preço a pagar é R${preco_a_pagar:.2f}")

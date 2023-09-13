# Solicita o preço da mercadoria e o percentual de desconto
preco_mercadoria = float(input("Digite o preço da mercadoria: "))
percentual_desconto = float(input("Digite o percentual de desconto: "))

# Calcula o valor do desconto
desconto = (percentual_desconto / 100) * preco_mercadoria

# Calcula o preço a pagar
preco_a_pagar = preco_mercadoria - desconto

# Exibe o valor do desconto e o preço a pagar
print(f"O valor do desconto é R${desconto:.2f}")
print(f"O preço a pagar é R${preco_a_pagar:.2f}")

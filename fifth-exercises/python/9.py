valor_casa = float(input("Digite o valor da casa a comprar: R$ "))
salario = float(input("Digite o salário: R$ "))
anos = int(input("Digite a quantidade de anos a pagar: "))

meses = anos * 12  # Converter anos em meses
prestacao = valor_casa / meses

limite_prestacao = salario * 0.30  # 30% do salário

if prestacao <= limite_prestacao:
    print("Empréstimo aprovado! Prestação mensal: R$", prestacao)
else:
    print("Empréstimo não aprovado. Prestação mensal excede 30% do salário.")

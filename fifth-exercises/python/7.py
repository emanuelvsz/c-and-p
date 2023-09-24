salario = float(input("Digite o salário do funcionário: R$ "))

if salario > 1250.0:
    aumento = salario * 0.10  # 10% de aumento
else:
    aumento = salario * 0.15  # 15% de aumento

novo_salario = salario + aumento
print(f"O valor do aumento é: R$ {aumento:.2f}")
print(f"Novo salário: R$ {novo_salario:.2f}")

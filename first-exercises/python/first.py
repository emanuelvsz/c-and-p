# Solicita o valor do salário e a porcentagem de aumento
salario_atual = float(input("Digite o valor do salário: "))
porcentagem_aumento = float(input("Digite a porcentagem de aumento: "))

# Calcula o valor do aumento
aumento = salario_atual * (porcentagem_aumento / 100)

# Calcula o novo salário
novo_salario = salario_atual + aumento

# Exibe o valor do aumento e o novo salário
print(f"O aumento é de R${aumento:.2f}")
print(f"O novo salário é de R${novo_salario:.2f}")

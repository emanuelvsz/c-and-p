def calcular_prestacao_atraso(valor, taxa, tempo):
    prestacao = valor + (valor * (taxa / 100) * tempo)
    return prestacao

# Exemplo de uso
valor = 1000
taxa = 5
tempo = 2
prestacao_atraso = calcular_prestacao_atraso(valor, taxa, tempo)
print(f"O valor da prestação em atraso é: R$ {prestacao_atraso:.2f}")

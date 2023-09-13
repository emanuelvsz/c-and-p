# Solicita a quantidade de cigarros fumados por dia e quantos anos já foram fumados
cigarros_por_dia = int(input("Digite a quantidade de cigarros fumados por dia: "))
anos_fumados = int(input("Digite quantos anos já foram fumados: "))

# Calcula a redução do tempo de vida em minutos
reducao_tempo_vida_minutos = cigarros_por_dia * 10 * 365 * anos_fumados

# Converte a redução do tempo de vida de minutos para dias
reducao_tempo_vida_dias = reducao_tempo_vida_minutos / (24 * 60)

# Exibe o total de dias de vida perdidos
print(f"Um fumante perderá {reducao_tempo_vida_dias:.2f} dias de vida devido ao hábito de fumar.")

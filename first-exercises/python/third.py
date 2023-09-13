# Solicita a distância a percorrer e a velocidade média esperada
distancia_km = float(input("Digite a distância a percorrer (em quilômetros): "))
velocidade_media_kmph = float(input("Digite a velocidade média esperada (em km/h): "))

# Calcula o tempo estimado da viagem
tempo_horas = distancia_km / velocidade_media_kmph

# Converte o tempo de horas para minutos
tempo_minutos = tempo_horas * 60

# Exibe o tempo estimado da viagem em horas e minutos
print(f"O tempo estimado da viagem é de {tempo_horas:.2f} horas ({tempo_minutos:.2f} minutos).")

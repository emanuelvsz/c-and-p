matriz = [[0] * 5 for _ in range(4)]

for i in range(4):
    for j in range(5):
        elemento = int(input(f"Digite o elemento da posição ({i + 1}, {j + 1}): "))
        matriz[i][j] = elemento

# Apresentar a matriz
for linha in matriz:
    print(linha)

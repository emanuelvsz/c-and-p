  matriz_A = [[int(input(f"Digite o elemento da posição ({i + 1}, {j + 1}): ")) for j in range(15)] for i in range(15)]

soma_pares = sum(matriz_A[i][i] for i in range(15) if matriz_A[i][i] % 2 == 0)
print(f"A soma dos elementos pares na diagonal principal é: {soma_pares}")

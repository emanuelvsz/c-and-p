def somatorio_n_primeiros_inteiros(n):
    somatorio = sum(range(1, n+1))
    return somatorio

# Exemplo de uso
n = 5
resultado = somatorio_n_primeiros_inteiros(n)
print(f"O somatório dos {n} primeiros números inteiros é: {resultado}")

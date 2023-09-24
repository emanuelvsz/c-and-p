n = float(input("Digite um número para calcular a raiz quadrada: "))
b = 2.0

while abs(n - (b * b)) >= 0.0001:
    p = (b + (n / b)) / 2
    b = p

print(f"A raiz quadrada é aproximadamente: {b:.4f}")

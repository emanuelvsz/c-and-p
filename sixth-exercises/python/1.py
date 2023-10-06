def find_character_at_position(s, c, p):
    index = s.find(c, p)
    if index != -1:
        return index
    else:
        return "Caractere não encontrado a partir da posição especificada."

s = input("Digite uma string: ")
c = input("Digite um caractere: ")
p = int(input("Digite a posição inicial: "))

result = find_character_at_position(s, c, p)
print(f"Índice da primeira ocorrência de '{c}' a partir da posição {p}: {result}")
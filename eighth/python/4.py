def verificar_string_em_lista(string, lista):
    return string in lista

# Exemplo de uso
string_a_verificar = "Python"
lista = ["C", "Java", "Python", "JavaScript"]
if verificar_string_em_lista(string_a_verificar, lista):
    print(f"A string '{string_a_verificar}' foi encontrada na lista.")
else:
    print(f"A string '{string_a_verificar}' não foi encontrada na lista.")

def invert_and_replace(input_string, char_to_replace='A', replacement_char='*'):
    reversed_string = input_string[::-1]
    replaced_string = reversed_string.replace(char_to_replace, replacement_char)
    return replaced_string

phrase1 = input("Digite a primeira frase: ")
phrase2 = input("Digite a segunda frase: ")

inverted_replaced_phrase1 = invert_and_replace(phrase1)
inverted_replaced_phrase2 = invert_and_replace(phrase2)

print("Frase 1 invertida e com 'A' substituídos por '*':", inverted_replaced_phrase1)
print("Frase 2 invertida e com 'A' substituídos por '*':", inverted_replaced_phrase2)

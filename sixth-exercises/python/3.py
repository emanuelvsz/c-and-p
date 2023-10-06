def remove_spaces(input_string):
    return input_string.replace(" ", "")

input_string = input("Digite uma string com espaços: ")
result = remove_spaces(input_string)
print("String sem espaços: ", result)

def format_name(full_name):
    name_parts = full_name.split()
    if len(name_parts) >= 2:
        last_name = name_parts[-1]
        first_name = ' '.join(name_parts[:-1])
        return f"{last_name.upper()}/{first_name}"
    else:
        return "Nome completo inválido."

full_name = input("Digite um nome completo: ")
formatted_name = format_name(full_name)
print("Sobrenome/Nome formatado: ", formatted_name)

def extract_date_components(date_string):
    components = date_string.split('/')
    if len(components) == 3 and all(component.isdigit() for component in components):
        dd, mm, aaaa = map(int, components)
        return dd, mm, aaaa
    else:
        return None

date_string = input("Digite uma data no formato DD/MM/AAAA: ")

components = extract_date_components(date_string)
if components:
    dd, mm, aaaa = components
    print(f"Dia: {dd}, Mês: {mm}, Ano: {aaaa}")
else:
    print("Formato de data inválido ou não numérico.")

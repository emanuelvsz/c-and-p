def gerar_email(nome_completo):
    partes_nome = nome_completo.split()
    primeiro_nome = partes_nome[0]
    sobrenome = " ".join(partes_nome[1:])
    email = f"{primeiro_nome[0].lower()}{sobrenome.replace(' ', '').lower()}@lp.com.br"
    return email

# Exemplo de uso
nome_completo = "Sr. Fulano de Tal"
email = gerar_email(nome_completo)
print(f"{nome_completo}, seu email é: {email}")

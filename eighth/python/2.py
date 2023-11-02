def converter_kelvin_para_celsius_fahrenheit(temp_kelvin):
    temp_celsius = temp_kelvin - 273.15
    temp_fahrenheit = (temp_kelvin - 273.15) * 9/5 + 32
    return temp_celsius, temp_fahrenheit

# Exemplo de uso
temp_kelvin = 300
temp_celsius, temp_fahrenheit = converter_kelvin_para_celsius_fahrenheit(temp_kelvin)
print(f"A temperatura em graus Celsius é: {temp_celsius:.2f}°C")
print(f"A temperatura em graus Fahrenheit é: {temp_fahrenheit:.2f}°F")

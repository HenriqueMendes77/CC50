valor = float(input("Valor: "))
pago = float(input("Pago: "))

troco = round((pago - valor) * 100)

m25 = m10 = m5 = m1 = 0

if troco > 0:
    m25 = troco // 25
    troco %= 25

    m10 = troco // 10
    troco %= 10

    m5 = troco // 5
    troco %= 5

    m1 = troco

print(f"Moedas de 25: {int(m25)}")
print(f"Moedas de 10: {int(m10)}")
print(f"Moedas de 5: {int(m5)}")
print(f"Moedas de 1: {int(m1)}")

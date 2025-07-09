
cartao = input("Cartão: ")
digitos = len(cartao)
inverso = cartao[::-1]

p1 = p2 = 0

for i in range(1, digitos, 2):
    n = int(inverso[i]) * 2
    if n >= 10:
        p1 += n // 10 + n % 10
    else:
        p1 += n

for i in range(0, digitos, 2):
    p2 += int(inverso[i])

total = p1 + p2

if total % 10 == 0:
    # American Express (AMEX)
    if digitos == 15 and cartao[:2] in ("34", "37"):
        print("American Express")

    # MasterCard
    elif digitos == 16 and cartao[:2] in ("51", "52", "53", "54", "55"):
        print("MasterCard")

    # Visa
    elif digitos in (13, 16) and cartao[0] == "4":
        print("Visa")

    else:
        print("inválido")
else:
    print("inválido")


texto = input("texto: ").strip()  

letras = 0
palavras = texto.count(" ") + 1
frases = 0

for i in range(len(texto)):
    if texto[i] in "!.?":
        frases += 1

    elif texto[i].isalpha():
        letras += 1

resultado = round(0.0588 * (letras*100)/palavras - 0.296 * (frases*100)/palavras - 15.8)

print(f"letras: {letras}")
print(f"palavras: {palavras}")
print(f"frases: {frases}")
print(f"resultado: {resultado}")


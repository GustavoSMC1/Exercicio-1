frase = "Python é uma linguagem de programação de código aberto"
with open("frase.txt", "w", encoding="utf-8") as arquivo:
    arquivo.write(frase)


with open("frase.txt", "r", encoding="utf-8") as arquivo:
    conteudo = arquivo.read()


palavras = conteudo.split()
for palavra in palavras:
    print(palavra)

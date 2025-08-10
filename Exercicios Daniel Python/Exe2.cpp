nota1 = float(input("Digite a nota do 1º bimestre: "))
nota2 = float(input("Digite a nota do 2º bimestre: "))

media = (nota1 + nota2) / 2

with open("notas_aluno.txt", "w") as arquivo:
    arquivo.write(f"Nota 1º bimestre: {nota1}\n")
    arquivo.write(f"Nota 2º bimestre: {nota2}\n")
    arquivo.write(f"Média: {media:.2f}\n")

print("Notas e média salvas no arquivo 'notas_aluno.txt'.")

def ler_matriz(nome):
    linhas = int(input(f"Digite o número de linhas da matriz {nome}: "))
    colunas = int(input(f"Digite o número de colunas da matriz {nome}: "))
    
    matriz = []
    print(f"Digite os elementos da matriz {nome}:")
    for i in range(linhas):
        linha = []
        for j in range(colunas):
            valor = float(input(f"{nome}[{i+1}][{j+1}]: "))
            linha.append(valor)
        matriz.append(linha)
    return matriz, linhas, colunas

def multiplicar_matrizes(A, B):
    m = len(A)
    n = len(A[0])
    p = len(B[0])

    C = [[0 for _ in range(p)] for _ in range(m)]
    for i in range(m):
        for j in range(p):
            for k in range(n):
                C[i][j] += A[i][k] * B[k][j]
    return C
def exibir_matriz(M, nome="Matriz"):
    print(f"\n{nome}:")
    for linha in M:
        print(linha)

A, m, n = ler_matriz("A")
B, p, q = ler_matriz("B")

if n != p:
    print("Erro: não é possível multiplicar as matrizes (dimensões incompatíveis).")
else:
    C = multiplicar_matrizes(A, B)
    exibir_matriz(A, "Matriz A")
    exibir_matriz(B, "Matriz B")
    exibir_matriz(C, "Matriz C (Resultado da Multiplicação)")

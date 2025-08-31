def ler_matriz_3x3():
    matriz = []
    print("Digite os 9 valores da matriz 3x3:")
    for i in range(3):
        linha = []
        for j in range(3):
            valor = int(input(f"M[{i+1}][{j+1}]: "))
            linha.append(valor)
        matriz.append(linha)
    return matriz

def eh_quadrado_magico(matriz):
    soma_magica = sum(matriz[0])
    
    for linha in matriz:
        if sum(linha) != soma_magica:
            return False

    for j in range(3):
        soma_coluna = sum(matriz[i][j] for i in range(3))
        if soma_coluna != soma_magica:
            return False
    diag1 = sum(matriz[i][i] for i in range(3))
    diag2 = sum(matriz[i][2-i] for i in range(3))
    
    if diag1 != soma_magica or diag2 != soma_magica:
        return False
    
    return True
matriz = ler_matriz_3x3()

if eh_quadrado_magico(matriz):
    print("SIM")
else:
    print("NAO")


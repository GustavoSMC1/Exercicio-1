import itertools

def eh_quadrado_magico(m):
    for i in range(3):
        if sum(m[i*3:(i+1)*3]) != 15:
            return False
    for j in range(3):
        if m[j] + m[j+3] + m[j+6] != 15:
            return False
    if m[0] + m[4] + m[8] != 15:
        return False
    if m[2] + m[4] + m[6] != 15:
        return False

    return True

def mostrar_quadrado(m):
    for i in range(3):
        print(m[i*3:(i+1)*3])
    print("-"*10)
numeros = [1,2,3,4,5,6,7,8,9]
cont = 0
for perm in itertools.permutations(numeros):
    if eh_quadrado_magico(perm):
        mostrar_quadrado(perm)
        cont += 1

print(f"Total de quadrados mágicos encontrados: {cont}")

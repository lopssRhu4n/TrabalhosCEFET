import numpy as np

# Possiveis combinacoes de vizinhos -> CADA COMBINAÇÂO equivale a um índice que
# pode ser utilizado para saber o resultado daquela combinação na regra dividi-
# da em binário

#     0         0        0  -> 0
#     0         0        1  -> 1
#     0         1        0  -> 2
#     0         1        1  -> 3
#     1         0        0  -> 4
#     1         0        1  -> 5
#     1         1        0  -> 6
#     1         1        1  -> 7


def gerarAutomato(MAX, numCelulas, regra):
    if regra < 0 or regra > 255:
        print('Regra inválida')
        return

    # Transformando regra em valor binário para obter o valor de cada combina-
    # ção de 0 até 7

    binRegraArr = gerarArrayDaRegraEmBinario(regra)
    # Gerando matrix com todas as gerações zeradas inicialmente
    geracoes = np.zeros((MAX, numCelulas))

    # Tornando apenas o elemento do meio da primeira geracao com o valor 1
    geracoes[0][int(numCelulas/2)] = 1

    # Aplicando a regra para cada uma das gerações
    for i in range(1, MAX):
        for j in range(numCelulas):

            antIndex = i - 1
            leftIndex = j - 1
            rightIndex = j + 1

            antValue = geracoes[antIndex][j].astype('int')
            leftValue = geracoes[antIndex][leftIndex].astype(
                'int') if leftIndex > 0 else 0
            rightValue = geracoes[antIndex][rightIndex].astype(
                'int') if rightIndex < numCelulas else 0

            # print("BinStr: " + str(leftValue) +
            # str(antValue) + str(rightValue))
            binValue = 4 * leftValue + 2 * antValue + 1 * rightValue
            # print("BinVal: " + str(binValue))

            # Mudando o valor da celula na geracao atual com base no valor
            # achado do indice da regra
            geracoes[i][j] = binRegraArr[binValue]

        print("GERAÇÃO: " + str(i + 1))

        for i in range(MAX):
            print(geracoes[i])


def gerarArrayDaRegraEmBinario(regra):

    binRegraStr = format(regra, 'b')[::-1]

    binRegraArr = []

    for i in range(len(binRegraStr)):
        binRegraArr.append(int(binRegraStr[i]))

    for i in range(8 - len(binRegraStr)):
        binRegraArr.append(0)

    return binRegraArr


gerarAutomato(10, 23, 30)

# FEITO POR RHUAN LOPES ! :)

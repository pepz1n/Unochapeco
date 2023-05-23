# Definir o valor infinito
INF = 999

# Definir o número de vértices no grafo
nV = 4

# Função que executa o algoritmo de Floyd-Warshall
def floyd_warshall(G):
    # Criar uma matriz de distâncias com os valores do grafo
    distance = list(map(lambda i: list(map(lambda j: j, i)), G))

    # Loop para percorrer todos os vértices
    for k in range(nV):
        for i in range(nV):
            for j in range(nV):
                # Atualizar a distância mínima entre os vértices i e j passando pelo vértice k
                distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j])

    # Chamar a função para imprimir a solução
    print_solution(distance)

# Função para imprimir a solução
def print_solution(distance):
    for i in range(nV):
        for j in range(nV):
            if(distance[i][j] == INF):
                # Se a distância entre os vértices é infinita, imprimir "INF"
                print("INF", end=" ")
            else:
                # Se a distância é finita, imprimir a distância
                print(distance[i][j], end="  ")
        print(" ")

# Definir o grafo como uma matriz de adjacência
G = [[0, 3, INF, 5],
     [2, 0, INF, 4],
     [INF, 1, 0, INF],
     [INF, INF, 2, 0]]

# Chamar a função do algoritmo de Floyd-Warshall
floyd_warshall(G)

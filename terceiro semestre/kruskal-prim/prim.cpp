#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Função para encontrar o vértice com a chave mínima que ainda não está incluído na MST
int encontrarVerticeMinimo(vector<int>& chave, vector<bool>& mstSet) {
    int minKey = INT_MAX;
    int minIndex = -1;
    int numVertices = chave.size();

    for (int v = 0; v < numVertices; v++) {
        if (!mstSet[v] && chave[v] < minKey) {
            minKey = chave[v];
            minIndex = v;
        }
    }

    return minIndex;
}

// Função para imprimir a MST
void imprimirMST(vector<int>& mst, vector<vector<int>>& grafo) {
    int numVertices = grafo.size();
    cout << "Aresta\tPeso\n";
    for (int i = 1; i < numVertices; i++) {
        cout << mst[i] << " - " << i << "\t" << grafo[i][mst[i]] << "\n";
    }
}

// Função principal que aplica o algoritmo de Prim
void prim(vector<vector<int>>& grafo) {
    int numVertices = grafo.size();

    vector<int> chave(numVertices, INT_MAX); // Chaves utilizadas para escolher a aresta de peso mínimo
    vector<int> mst(numVertices, -1); // Vetor para armazenar a MST
    vector<bool> mstSet(numVertices, false); // Vetor para rastrear os vértices incluídos na MST

    chave[0] = 0; // Inicializa a chave do primeiro vértice como 0, para garantir que seja escolhido primeiro

    for (int count = 0; count < numVertices - 1; count++) {
        int u = encontrarVerticeMinimo(chave, mstSet); // Encontra o vértice com a chave mínima que ainda não está incluído na MST
        mstSet[u] = true; // Marca o vértice como incluído na MST

        // Atualiza as chaves e os vértices pais dos vértices adjacentes
        for (int v = 0; v < numVertices; v++) {
            if (grafo[u][v] != 0 && !mstSet[v] && grafo[u][v] < chave[v]) {
                mst[v] = u;
                chave[v] = grafo[u][v];
            }
        }
    }

    // Imprime a MST
    imprimirMST(mst, grafo);
}

int main() {
    int numVertices = 5; // Número total de vértices do grafo

    // Exemplo de grafo representado por uma matriz de adjacência
    vector<vector<int>> grafo = {
            {0, 2, 0, 6, 0},
            {2, 0, 3, 8, 5},
            {0, 3, 0, 0, 7},
            {6, 8, 0, 0, 9},
            {0, 5, 7, 9, 0}
    };

    prim(grafo);

    return 0;
}

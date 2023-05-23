#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Estrutura para representar uma aresta
struct Aresta {
    int origem, destino, peso;
};

// Estrutura para representar um subconjunto para a união
struct Subconjunto {
    int pai, classificacao;
};

// Função para comparar as arestas com base em seus pesos
bool compararArestas(const Aresta& a, const Aresta& b) {
    return a.peso < b.peso;
}

// Função para encontrar o conjunto de um elemento "i" usando a técnica de compressão de caminho
int encontrar(Subconjunto subsets[], int i) {
    if (subsets[i].pai != i)
        subsets[i].pai = encontrar(subsets, subsets[i].pai);

    return subsets[i].pai;
}

// Função para unir dois conjuntos usando a técnica de união por classificação
void unir(Subconjunto subsets[], int x, int y) {
    int xraiz = encontrar(subsets, x);
    int yraiz = encontrar(subsets, y);

    if (subsets[xraiz].classificacao < subsets[yraiz].classificacao)
        subsets[xraiz].pai = yraiz;
    else if (subsets[xraiz].classificacao > subsets[yraiz].classificacao)
        subsets[yraiz].pai = xraiz;
    else {
        subsets[yraiz].pai = xraiz;
        subsets[xraiz].classificacao++;
    }
}

// Função principal que aplica o algoritmo de Kruskal
void kruskal(vector<Aresta>& arestas, int numVertices) {
    vector<Aresta> arvore;
    int numArestas = arestas.size();

    // Ordena as arestas em ordem crescente de peso
    sort(arestas.begin(), arestas.end(), compararArestas);

    // Cria um vetor de subconjuntos com um único elemento em cada conjunto
    Subconjunto* subsets = new Subconjunto[numVertices];
    for (int v = 0; v < numVertices; v++) {
        subsets[v].pai = v;
        subsets[v].classificacao = 0;
    }

    // Passa sobre todas as arestas, na ordem crescente de peso
    for (int i = 0; i < numArestas; i++) {
        int origem = encontrar(subsets, arestas[i].origem);
        int destino = encontrar(subsets, arestas[i].destino);

        // Se a inclusão dessa aresta não forma um ciclo, adiciona à árvore
        if (origem != destino) {
            arvore.push_back(arestas[i]);
            unir(subsets, origem, destino);
        }
    }

    // Imprime a árvore geradora mínima
    cout << "Arestas da arvore geradora minima:\n";
    for (int i = 0; i < arvore.size(); i++) {
        cout << arvore[i].origem << " - " << arvore[i].destino << " : " << arvore[i].peso << "\n";
    }

    delete[] subsets;
}

int main() {
    int numVertices = 4; // Número total de vértices do grafo

    vector<Aresta> arestas;
    arestas.push_back({0, 1, 10}); // Adicione as arestas do seu grafo aqui
    arestas.push_back({0, 2, 6});
    arestas.push_back({0, 3, 5});
    arestas.push_back({1, 3, 15});
    arestas.push_back({2, 3, 4});

    kruskal(arestas, numVertices);

    return 0;
}
//Neste exemplo, estou criando um grafo com 4 vértices e adicionando as arestas manualmente.
//A função kruskal será chamada com o vetor de arestas e o número de vértices, e ela imprimirá as arestas da árvore geradora mínima.

// Grafos - BFS (busca em largura)
#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <queue> // fila para usar na BFS

using namespace std;

class Grafo
{
    int V; // número de vértices
    list<int> *adj; // ponteiro para um array contendo as listas de adjacências

public:
    Grafo(int V); // construtor
    void adicionarAresta(int v1, int v2); // adadjiciona uma aresta no grafo

    // faz uma BFS a partir de um vértice
    void bfs(int v);
};

Grafo::Grafo(int V)
{
    this->V = V; // atribui o número de vértices
    this->adj = new list<int>[V]; // cria as listas
}

void Grafo::adicionarAresta(int v1, int v2)
{
    // adiciona vértice v2 à lista de vértices adjacentes de v1
    adj[v1].push_back(v2);
}

void Grafo::bfs(int v)
{
    queue<int> fila;
    bool visitados[V]; // vetor de visitados
    int dist[V];
    memset(visitados, false, V);
    memset(dist, -1, V);
    dist[0] = 0;
    cout << "Visitando vertice " << v << " ...\n";
    visitados[v] = true; // marca como visitado

    while(true){
        list<int>::iterator it;
        for(it = adj[v].begin(); it != adj[v].end(); it++){
            if(!visitados[*it]){
                visitados[*it] = true; // marca como visitado
                dist[*it] = dist[v] + 1;
                // cout << *it << ' ';
                printf("dist[v] = %d  v = %d\n", dist[v], v);
                printf("Visitando vertice %d dist ...\n", *it, dist[*it]);
                fila.push(*it); // insere na fila
            }
        }
        // verifica se a fila NÃO está vazia
        if(!fila.empty()){
            v = fila.front(); // obtém o primeiro elemento
            fila.pop(); // remove da fila
        } else
            break;
    }
}

int main()
{
    int V = 8;

    Grafo grafo(V);
    //Grafo grafo = new Grafo(V);

    // adicionando as arestas
    grafo.adicionarAresta(0, 1);
    grafo.adicionarAresta(0, 2);
    grafo.adicionarAresta(1, 3);
    grafo.adicionarAresta(1, 4);
    grafo.adicionarAresta(2, 5);
    grafo.adicionarAresta(2, 6);
    grafo.adicionarAresta(6, 7);
    grafo.bfs(0);

    return 0;
}
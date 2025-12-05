#ifndef ADJACENCY_LIST
#define ADJACENCY_LIST

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


class AdjacencyList {
private:
    vector<vector<int> > adjList;
    bool isDirected;

public:
    AdjacencyList(int vertices, bool directed = false)
    {
        adjList.resize(vertices);
        isDirected = directed;
    }

    void addEdge(int src, int dest)
    {
        adjList[src].push_back(dest);
        if (!isDirected) {
            adjList[dest].push_back(src);
        }
    }

	int* getN(int v){

		
		int* neigh = new int[adjList[v].size()];
		for (int j = 0; j < adjList[v].size(); ++j) {
                neigh[j] = adjList[v][j];
            }
		for (int j = 0; j < adjList[v].size(); ++j) {
                cout << neigh[j] + 1 << ", ";
            }
		return neigh;
	}

    void printList()
    {
        for (int i = 0; i < adjList.size(); ++i) {
            cout << i +1<< ": ";
            for (int j = 0; j < adjList[i].size(); ++j) {
                cout << adjList[i][j] +1 << ",";
            }
            cout << endl;
        }
    }
};


#endif
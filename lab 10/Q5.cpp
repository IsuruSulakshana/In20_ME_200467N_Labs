#include <iostream>
#include<list>

using namespace std;

struct Node{
    // A node will 2 entities
    int label;
    list<int> neighbours ;
    //1. data type int called label
    //2. a int type list called neighbours

};

struct Graph{
    //graph will have an array of type "node" with length specified by n
    int n=8;
    Node * nodes = new Node[n];

    void intializenodes(){
        //iterate through the nodes and assign labels
        for(int i=0;i<n;i++){
            nodes[i].label=i;
        }
    }

    void addEdge(int u, int v) {
    // Select node u and push v into u's neighbour list
    nodes[u].neighbours.push_back(v);
}

    void print(){
        //lets iterate through each node and print its neighbours
        for (int i = 0; i < n; i++) {
            cout << "Node " << (nodes[i].label) + 1 << ": ";
            for (int neighbour : nodes[i].neighbours) {
                cout << neighbour << " ";
            }
            cout << endl;
        }

    }
};

int main() {
    Graph * g = new Graph;
    g->intializenodes();
    g->addEdge(1,2);
    g->addEdge(1,3);
    g->addEdge(1,4);
    g->addEdge(1,5);
    g->addEdge(2,3);
    g->addEdge(2,6);
    g->addEdge(4,6);
    g->addEdge(4,7);
    g->addEdge(4,8);
    g->addEdge(5,6);
    g->addEdge(5,7);
    g->addEdge(5,8);
    //add edges for the graphs here.

    //print the graph adjaceny list
    g->print();
}
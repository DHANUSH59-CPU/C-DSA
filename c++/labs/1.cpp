#include <iostream>
#include <vector>
#include <algorithm>

// Define a structure to represent an edge
struct Edge {
    int src, dest, weight;
};

// Define a structure to represent a graph
struct Graph {
    int V, E;
    std::vector<Edge> edges;
};

// Function to create a graph with V vertices and E edges
Graph* createGraph(int V, int E) {
    Graph* graph = new Graph;
    graph->V = V;
    graph->E = E;
    return graph;
}

// A structure to represent a subset for union-find
struct Subset {
    int parent;
    int rank;
};

// A utility function to find the subset of an element i (uses path compression)
int find(std::vector<Subset>& subsets, int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

// A function that does union of two sets of x and y (uses union by rank)
void Union(std::vector<Subset>& subsets, int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

// Compare two edges according to their weights
bool compareEdge(Edge a, Edge b) {
    return a.weight < b.weight;
}

// Function to construct MST using Kruskal's algorithm
void KruskalMST(Graph* graph) {
    int V = graph->V;
    std::vector<Edge> result;  // Store the resultant MST

    // Step 1: Sort all the edges in non-decreasing order of their weight
    std::sort(graph->edges.begin(), graph->edges.end(), compareEdge);

    // Allocate memory for creating V subsets
    std::vector<Subset> subsets(V);
    for (int v = 0; v < V; ++v) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    int e = 0;  // An index variable, used for result[]
    int i = 0;  // An index variable, used for sorted edges

    // Number of edges to be taken is equal to V-1
    while (e < V - 1 && i < graph->E) {
        // Step 2: Pick the smallest edge. And increment the index for next iteration
        Edge next_edge = graph->edges[i++];

        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);

        // If including this edge doesn't cause a cycle, include it in result
        // and increment the index of result for next edge
        if (x != y) {
            result.push_back(next_edge);
            Union(subsets, x, y);
            e++;
        }
    }

    // Print the contents of result[] to display the MST
    std::cout << "Following are the edges in the constructed MST\n";
    int minimumCost = 0;
    for (auto& edge : result) {
        std::cout << edge.src << " -- " << edge.dest << " == " << edge.weight << std::endl;
        minimumCost += edge.weight;
    }
    std::cout << "Minimum Cost Spanning Tree: " << minimumCost << std::endl;
}

int main() {
    int V = 4; // Number of vertices in the graph
    int E = 5; // Number of edges in the graph
    Graph* graph = createGraph(V, E);

    // add edge 0-1
    graph->edges.push_back({0, 1, 10});

    // add edge 0-2
    graph->edges.push_back({0, 2, 6});

    // add edge 0-3
    graph->edges.push_back({0, 3, 5});

    // add edge 1-3
    graph->edges.push_back({1, 3, 15});

    // add edge 2-3
    graph->edges.push_back({2, 3, 4});

    KruskalMST(graph);

    delete graph;
    return 0;
}

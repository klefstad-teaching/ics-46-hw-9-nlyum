#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include "dijkstras.h"
using namespace std;


vector<int> dijkstra_shortest_path(const Graph& G, int source, vector<int>& previous) {
    int numVertices = G.size();
    vector<int> distances(numVertices, INF);
    vector<bool> visited(numVertices, false);
    distances[source] = 0;
    previous[source] = UNDEFINED;
    priority_queue<pair<int, int>> minHeap;     // pair: vertex, weight
    minHeap.push({source, 0});
    while (!minHeap.empty()) {
        int u = minHeap.extractVertexWithMinimumWeight().first();
        if (visited[u])     // skip if we've already visited it
            continue;
        visited[u] = true;  // mark that we're visiting this so we don't visit later
        for (Edge edge : G[u]) {    // look at all adjacent vertices
            int v = edge.dst;       // v is this adjacent vertex
            int weight = edge.weight;   // slide code has edge.second? not sure why
            if (!visited[v] && distances[u] + weight < distances[v]) {
                distances[v] = distances[u] + weight;
                previous[v] = u;
                minHeap.push({v, distances[v]});
            }
        }
    }
    return distances;
}

vector<int> extract_shortest_path(const vector<int>& /*distances*/, const vector<int>& previous, int destination) {

}

void print_path(const vector<int>& v, int total) {

}

#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include "dijkstras.h"
using namespace std;

struct compare_weights {
    bool operator()(const pair<int, int>& left, const pair<int, int>& right) {
        return left.second > right.second;
    }
};

vector<int> dijkstra_shortest_path(const Graph& G, int source, vector<int>& previous) {
    int numVertices = G.size();
    vector<int> distances(numVertices, INF);
    vector<bool> visited(numVertices, false);
    distances[source] = 0;
    previous[source] = UNDEFINED;
    priority_queue<pair<int, int>, vector<pair<int, int>>, compare_weights> minHeap;
    minHeap.push({source, 0});
    while (!minHeap.empty()) {
        int u = minHeap.top().first;
        minHeap.pop();
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

vector<int> extract_shortest_path(const vector<int>& distances, const vector<int>& previous, int destination) {
    int source_index;
    for (int i = 0; i < distances.size(); ++i) {
        if (distances[i] == 0) {
            source_index = i;
            break;
        }
    }
    vector<int> path;
    int i = destination;
    path.push_back[i];
        while (previous[i] != UNDEFINED) {
            i = previous[i];
            path.push_back[i];
        }
    reverse(path.begin(), path.end());
    return path;
}

void print_path(const vector<int>& v, int total) {
    for (int node : v) 
        cout << node << " ";
    cout << endl;
    cout << "Total cost is " << total << endl;

}

#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include "dijkstras.h"
using namespace std;


vector<int> dijkstra_shortest_path(const Graph& G, int source, vector<int>& previous) {
    int n = G.size();
    G.resize(n, INF);
}

vector<int> extract_shortest_path(const vector<int>& /*distances*/, const vector<int>& previous, int destination) {

}

void print_path(const vector<int>& v, int total) {

}

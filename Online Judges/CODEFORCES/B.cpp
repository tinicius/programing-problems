#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 100 + 10;

vector<bool> visited(MAX);
vector<vector<int>> edges(MAX);

void dfs(int i) {
    if (!visited[i]) {
        visited[i] = true;
        cout << i << " ";

        for (auto k : edges[i]) dfs(k);
    }
}

void bfs(int i) {
    if (visited[i]) return;

    // Create a queue for BFS
    list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[i] = true;
    queue.push_back(i);

    while (!queue.empty()) {
        // Dequeue a vertex from queue and print it
        i = queue.front();
        cout << i << " ";
        queue.pop_front();

        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (auto adjacent : edges[i]) {
            if (!visited[adjacent]) {
                visited[adjacent] = true;
                queue.push_back(adjacent);
            }
        }
    }
}

int main() {
    int v1, v2;

    set<int> n;

    for (int i = 0; i < visited.size(); i++) {
        visited[i] = false;
    }

    while (scanf("%d, %d", &v1, &v2) >= 0) {
        // cout << v1 << " " << v2;
        edges[v1].push_back(v2);
        edges[v2].push_back(v1);
        n.insert(v1);
        n.insert(v2);
    }

    for (auto k : n) bfs(k);
    cout << endl;

    for (int i = 0; i < visited.size(); i++) {
        visited[i] = false;
    }

    for (auto k : n) dfs(k);

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 100000

int n;
vector<pair<int,int>> edges[MAX_N+1];
bool visited[MAX_N];
int dist[MAX_N];

void DFS(int node, int total_dist){
    for(int i=0;i<(int) edges[node].size();i++){
        int node2, weight;
        node2 = edges[node][i].first;
        weight = edges[node][i].second;

        if(!visited[node2]){
            visited[node2] = true;
            dist[node2] = total_dist + weight;
            DFS(node2, total_dist+weight);
        }
    }
}

pair<int,int> FindLargestVertex(int node) {
    for(int i=1;i<=n;i++){
        visited[i] = false;
        dist[i] = 0;
    }

    visited[node] = true;
    dist[node] = 0;
    DFS(node,0);

    int farthest_dist = -1;
    int farthest_vertex = -1;
    for(int i=1;i<=n;i++){
        if(dist[i] > farthest_dist){
            farthest_dist = dist[i];
            farthest_vertex = i;
        }
    }

    return make_pair(farthest_vertex, farthest_dist);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i=0;i<n;i++){
        int node1, node2, weight;
        cin >> node1 >> node2 >> weight;

        edges[node1].push_back(make_pair(node2, weight));
        edges[node2].push_back(make_pair(node1, weight));
    }

    int f_vertex = FindLargestVertex(1).first;

    int diameter = FindLargestVertex(f_vertex).second;

    cout << diameter;
    return 0;
}
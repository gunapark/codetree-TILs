#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 50
int n;
int root_node;

vector<int> edges[MAX_N];
bool visit[MAX_N];
int cnt_leaf = 0;

void count_leaf_node(int node){
    if((int)edges[node].size()==0) cnt_leaf++;

    else{
        for(int i=0;i<(int)edges[node].size();i++){
            count_leaf_node(edges[node][i]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;

        if(a==-1) root_node=i;
        //edges[부모][자식] 이렇게만 저장해서 자식을 삭제하면 자식의 subnode도 삭제되게끔...
        else{
            edges[a].push_back(i);
        }
    }
    //삭제할 노드를 입력 받음.
    int dnode;
    cin >> dnode;

    //node들을 찾아다니면서 dnode가 있는지 탐색
    for(int i=0;i<n;i++){
        for(int j=0;j<(int)edges[i].size();j++){
            if(edges[i][j]==dnode)
                edges[i].erase(edges[i].begin()+j);
        }
    }
    if(dnode == root_node){
        cout << 0;
        return 0;
    }
    count_leaf_node(root_node);
    cout<<cnt_leaf;

    return 0;
}
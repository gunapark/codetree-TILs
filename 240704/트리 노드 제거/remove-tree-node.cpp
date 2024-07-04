#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 50
int n;
int root_node;

vector<int> edges[MAX_N];
bool visit[MAX_N];
int cnt_leaf = 0;

int count_leaf_node(int node){
    if((int)edges[node].size()==0) return 1;
    else{
        for(int i=0;i<(int)edges[node].size();i++){
            if(!visit[i]){
                visit[i]=true;
                return 0 + count_leaf_node(i);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        //2번째 줄을 입력을 받음.
        cin >> a;
        //루트 노드는 아무것도 하지 않음.
        if(a==-1) root_node=i;
        else{
            edges[11].push_back(i);
        }
        //쌍방으로 해줄 필요는 없다고 생각함.
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

    //루트 노드부터 트리를 돌아다니면서 자손이 0개인 친구들을 찾으면 되지 않을까?
    for(int i=0;i<n;i++){
        visit[i]=false;
    }
    visit[root_node]=true;

    cout << count_leaf_node(root_node);

    return 0;
}
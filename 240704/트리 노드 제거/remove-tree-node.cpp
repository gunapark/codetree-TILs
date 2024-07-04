#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 50
int n;

vector<int> edges[MAX_N];
bool visit[MAX_N];
int cnt_leaf = 0;

void count_leaf_node(int node){
    if((int)edges[node].size()==0) cnt_leaf++;
    
    for(int i=0;i<(int)edges[node].size();i++){
        if(!visit[i]){
            visit[i]=true;
            count_leaf_node(i);
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
        if(a==-1) continue;

        //루트 노드가 아니면 a노드의 vector에 i노드가 자손임을 추가해줌.
        edges[a].push_back(i);
        //쌍방으로 해줄 필요는 없다고 생각함.
    }
    //삭제할 노드를 입력 받음.
    int dnode;
    cin >> dnode;
    if(dnode==0){
        cout << 0;
        return 0;
    }
    //edge를 찾아다니면서 dnode가 있는지 탐색
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
    visit[0]=true;
    count_leaf_node(0);
    cout << cnt_leaf;

    return 0;
}
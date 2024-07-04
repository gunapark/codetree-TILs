#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

#define MAX_M 1000
#define MAX_N 10000

unordered_set<int> incoming_edge_node_set;
vector<int> edges[MAX_N+1];
unordered_set<int> node_set;
unordered_map<int,int> check_sec_map;
int m;
bool visit[MAX_N] = {false};




int main() {
    cin >> m;

    for(int i=0;i<m;i++){
        int node1, node2;
        cin >> node1 >> node2;

        edges[node1].push_back(node2);
        edges[node2].push_back(node1);
        incoming_edge_node_set.insert(node2);
        check_sec_map[node2]++;
        node_set.insert(node1);
        node_set.insert(node2);
    }

    //2번 조건에서 쓸라고 사용.
    unordered_set<int> copy_node_set = node_set;

    //1번 조건
    vector<int> check_one_vertor;
    for(auto it=node_set.begin();it!=node_set.end();it++){
        //node에는 있는데 incoming node에는 없다면?
        if(incoming_edge_node_set.find(*it)==incoming_edge_node_set.end()){
            //해당 요소를 check_one_vertor에 추가.
            check_one_vertor.push_back(*it);
        }
    }
    //들어오는 간선이 하나도 없는 node의 vector의 size가 1이 아니라면.
    if((int)check_one_vertor.size()!=1){
        cout << 0;
        return 0;
    }

    //1번 조건을 만족했다면, check_one_vector에는 1개 밖에 들어있지 않기 때문. 그것이 root node.
    int root_node=check_one_vertor[0];

    //2번 조건
    //전체 node_set에서 root_node를 빼버린다.
    copy_node_set.erase(root_node);

    //들어오는 간선의 개수를 모아둔 hashmap[node]를 사용하여 확인
    for(auto it=copy_node_set.begin();it!=copy_node_set.end();it++){
        if(check_sec_map[*it]!=1){
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    //3번 조건
    //루트 노드에서 간선을 사용해서 자신을 제외한 모든 노드에 도달할 수 있다.
    //root node의 번호는 위에서 구해놈 root_node.
    //루트에서 BFS를 해서 visit vector에 넣어놓고, 자신을 제외한 노드 set인 copy_node_set과 비교?

    return 0;
}
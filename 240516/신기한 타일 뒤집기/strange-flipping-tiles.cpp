#include <iostream>
using namespace std;

class tile{
    public:
        char color;
        tile(char color = 'g'){
            this->color = color;
        }

};

int main() {
    int n;
    cin >> n;
    tile tiles[10000];
    int start = 10000/2;


    for(int i=0;i<n;i++){
        int x;
        char dir;
        cin >> x >> dir;
        if(dir=='L'){
            for(int i=0;i<x;i++){
                tiles[start-i].color = 'w';
            }
            start = start-x+1;
        }
        if(dir=='R'){
            for(int i=0;i<x;i++){
                tiles[start+i].color = 'b';
            }
            start = start+x-1;
        }

    }
    int cnt_w=0, cnt_b=0;
    for(int i=0;i<10000;i++){
        if(tiles[i].color=='w'){
            cnt_w++;
        }
        if(tiles[i].color=='b'){
            cnt_b++;
        }
    }
    cout << cnt_w << " " << cnt_b;
    return 0;
}
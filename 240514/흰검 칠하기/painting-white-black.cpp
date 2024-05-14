#include <iostream>
using namespace std;

class tile{
    public:
        char color;
        int cnt_white;
        int cnt_black;
        tile(char color='n', int cnt_white=0, int cnt_black =0){
            this->color = color;
            this->cnt_white = cnt_white;
            this->cnt_black = cnt_black;
        }
};


int main() {
    int n, start;
    cin >> n;
    tile tiles[10000];
    start = 5000;

    
    for(int i=0;i<n;i++){
        int x;
        char op;
        cin >> x >> op;
        if(op=='L'){
            for(int i=0;i<x;i++){
                if(tiles[start-i].color=='g') continue;
                tiles[start-i].color='w';
                tiles[start-i].cnt_white++;
                if(tiles[start-i].cnt_white>=2 && tiles[start-i].cnt_black>=2) tiles[start-i].color='g';
            }
            start=start-x+1;
        } else{
            for(int i=0;i<x;i++){
                if(tiles[start+i].color=='g') continue;
                tiles[start+i].color='b';
                tiles[start+i].cnt_black++;
                if(tiles[start+i].cnt_black==2 && tiles[start+i].cnt_white>=2) tiles[start+i].color='g';
            }
            start=start+x-1;
        }
    }
    int cnt_g=0,cnt_w=0,cnt_b=0;
    for(int i=0;i<10000;i++){
        if(tiles[i].color=='w') cnt_w++;
        if(tiles[i].color=='g') cnt_g++;
        if(tiles[i].color=='b') cnt_b++;
    }

    cout << cnt_w << " " << cnt_b << " " << cnt_g;
    return 0;
}
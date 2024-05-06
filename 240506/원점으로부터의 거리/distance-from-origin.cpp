#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int distance(int x){
    if(x<0){
        return x = x-2*x;
    } return x;
}

class point{
    public:
        int x,y;
        int dis, num;
        point(int x,int y,int num){
            this->x = x;
            this->y = y;
            this->dis = distance(x) + distance(y);
            this->num = num;
        }
        point(){};
};

bool cmp(point a, point b){
    if(a.dis==b.dis){
        return a.num<b.num;
    } return a.dis < b.dis;
}

int main() {
    int n;
    cin >> n;
    point points[n] = {};
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        points[i] = point(x,y,i+1);
    }

    sort(points, points+n,cmp);

    for(int i=0;i<n;i++){
        cout << points[i].num <<endl;
    }

    return 0;
}
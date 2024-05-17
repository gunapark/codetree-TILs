#include <iostream>
#include <algorithm>

using namespace std;

class Developer{
    public:
        int covid;
        int handshake;
        Developer(int covid=0,int handshake=0){
            this->covid = covid;
            this->handshake = handshake;
        }
};

class Info{
    public:
        int sec;
        int x;
        int y;
        Info(int sec=0, int x=0, int y=0){
            this->sec=sec;
            this->x=x;
            this->y=y;
        }
};

bool cmp(Info a, Info b){
    return a.sec<b.sec;
}

int main() {
    int num_of_dev, max_handshake, first_covid_man, times;

    cin >> num_of_dev >> max_handshake >> first_covid_man >> times;

    Developer developers[num_of_dev+1];
    developers[first_covid_man].covid =1;
    
    Info info[times];

    for(int i=0;i<times;i++){
        cin>>info[i].sec>>info[i].x>>info[i].y;
    }
    sort(info,info+times,cmp);

    for(int i=0;i<times;i++){
        if(developers[info[i].x].covid==1 && developers[info[i].x].handshake<max_handshake){
            developers[info[i].y].covid=1;
        }
        if(developers[info[i].y].covid==1 && developers[info[i].y].handshake<max_handshake){
            developers[info[i].x].covid=1;
        }
        developers[info[i].x].handshake++;
        developers[info[i].y].handshake++;
    }
    for(int i=1;i<=num_of_dev;i++){
        cout << developers[i].covid;
    }
    return 0;
}
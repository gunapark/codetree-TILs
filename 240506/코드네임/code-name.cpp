#include <iostream>
#include <string>
using namespace std;

class agent{
    public:
        string codename;
        int score;

        agent(string _codename="", int _score=0){
            this->codename = _codename;
            this->score = _score;
        }
};

int main() {
    agent *fbi = new agent[5];

    for(int i=0;i<5;i++){
        cin >> fbi[i].codename >> fbi[i].score;
    }

    int min = 100, cnt = 0;
    for(int i=0;i<5;i++){
        if(fbi[i].score<min){
            min = fbi[i].score;
            cnt = i;
        }
    }
    cout << fbi[cnt].codename << " " << fbi[cnt].score;
    return 0;
}
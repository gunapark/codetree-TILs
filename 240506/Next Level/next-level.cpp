#include <iostream>
#include <string>
using namespace std;

class user{
    public:
        string ID;
        int level;
    user(string ID = "codetree", int level=10){
        this->ID = ID;
        this->level = level;
    }
};
int main() {
    user abc;
    cout << "user " << abc.ID << " lv " << abc.level <<endl;
    string name;
    int level;
    cin >> name >> level;
    abc = user(name,level);
    cout << "user " << abc.ID << " lv " << abc.level;
    return 0;
}
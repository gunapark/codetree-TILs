#include <iostream>
#include <string>
using namespace std;

class product{
    public:
        string name = "codetree";
        int code = 50;
};
int main() {
    product codetree, another;
    cin >> another.name >> another.code;

    cout << "product " << codetree.code << " is " << codetree.name << endl;
    cout << "product " << another.code << " is " << another.name << endl;
    return 0;
}
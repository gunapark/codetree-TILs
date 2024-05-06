#include <iostream>
#include <string>
using namespace std;

class data{
    public:
        string date;
        string day;
        string weather;
};

int main() {
    int n;
    cin >> n;
    data *datas = new data[n];

    for(int i=0;i<n;i++){
        cin >> datas[i].date >> datas[i].day >> datas[i].weather;
    }

    string min_date = "2101";
    int index=-1;
    for(int i=0;i<n;i++){
        if(datas[i].weather == "Rain" && datas[i].date < min_date){
            min_date = datas[i].date;
            index = i;
        }
    }

    cout << datas[index].date << " " << datas[index].day << " " << datas[index].weather;    
    return 0;
}
#include <iostream>
#include <vector>
#include <cmath>
#include <limits.h>
#include <algorithm>
using namespace std;

#define MAX_N 100000

int n;
vector<pair<int,int>> checkpoint;


int main() {
    cin >> n;
    vector<int> left;
    vector<int> right(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        checkpoint.push_back({x,y});
    }

    left.push_back(0);
    for(int i=1;i<=n-1;i++){
        left.push_back(left[i-1]+abs(checkpoint[i].first-checkpoint[i-1].first)+abs(checkpoint[i].second-checkpoint[i-1].second));
    }

    right[n-1]=0;
    for(int i=n-2;i>=0;i--){
        right[i] = right[i-1]+abs(checkpoint[i].first-checkpoint[i+1].first)+abs(checkpoint[i].second-checkpoint[i+1].second);
    }

    int min_dist = INT_MAX;
    for(int i=1;i<n-1;i++){
        int dist = left[i-1]+right[i+1]+abs(checkpoint[i-1].first-checkpoint[i+1].first)+abs(checkpoint[i-1].second-checkpoint[i+1].second);
        min_dist = min(min_dist, dist);
    }

    cout << min_dist;
    return 0;
}
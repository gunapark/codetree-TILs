#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t; // n은 수열의 길이, t는 비교 대상 정수
    cin >> n >> t;
    
    vector<int> sequence(n); // 수열을 저장할 벡터
    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }
    
    int start = 0, end = 0; // 투 포인터 초기화
    int maxLength = 0; // 최대 길이를 저장할 변수
    
    while (end < n) {
        // 현재 부분 수열이 조건을 만족하는지 확인
        if (sequence[end] > t) {
            // 조건을 만족하면 최대 길이 갱신
            maxLength = max(maxLength, end - start + 1);
            end++;
        } else {
            // 조건을 만족하지 않으면 시작 포인터를 옮김
            start = end + 1;
            end = start;
        }
    }
    
    cout << maxLength << endl; // 최대 길이 출력
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i].first;
        A[i].second = i;
    }
    int K;
    cin >> K;
    K--;
    sort(A.begin(), A.end(), greater<pair<int, int>>());
    int cnt = 0;
    while(true) {
        cnt++;
        if(A[0].second == K) {
            cout << cnt << endl;
            break;
        }
        for(int i = 1; i < N; i++) {
            if(A[i].second < A[0].second) {
                A[i].first++;
            }
        }
        A.erase(A.begin());
        sort(A.begin(), A.end(), greater<pair<int, int>>());
    }
    return 0;
}

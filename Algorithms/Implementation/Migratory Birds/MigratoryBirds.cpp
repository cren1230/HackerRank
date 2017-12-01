#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    vector <int> type(5);
    for(int i = 0; i < n; i++) {
        type[ar[i]-1]++;
    }
    long count = type[0];
    long commBird = 0;
    for(int i = 1; i < 5; i++)
    {
        if (count < type[i]) {
            count = type[i];
            commBird = i;
        }
    }
    return commBird+1;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}

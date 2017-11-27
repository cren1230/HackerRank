#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    int maxValue = ar[0];
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (ar[i] == maxValue)
        {
            count++;
            continue;
        }
        if (ar[i] > maxValue)
        {
            maxValue = ar[i];
            count = 1;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}

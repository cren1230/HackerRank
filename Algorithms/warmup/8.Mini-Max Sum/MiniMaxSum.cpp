#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main() {
    vector<long> arr(5);
    long sum = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    long min = LONG_MAX;		//min
    long max = LONG_MIN;		//max
    for(int i = 0; i < 5; i++){
       if(arr[i] < min)		min = arr[i];
       if(arr[i] > max)		max = arr[i];
       sum += arr[i];
    }

    cout << sum - max << " " << sum - min;
    return 0;
}

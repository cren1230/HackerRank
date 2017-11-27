#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<double> result(3);
    for(int i = 0;i < n;i++){
       cin >> arr[i];

        if(arr[i] > 0) result[0] += 1;
        else if(arr[i] < 0) result[1] += 1;
        else result[2] += 1;
    }

    for(int i = 0; i < 3; i++){
       cout << setprecision(6) << result[i] / n << endl;
    }
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    // solution 1: 2D

//    vector< vector<int> > a(n,vector<int>(n));
//    for(int i = 0;i < n;i++){
//       for(int j = 0;j < n;j++){
//          cin >> a[i][j];
//       }
//    }
//    vector<int> sum(2);
//    for(int i = 0;i < n;i++){
//       for(int j = 0;j < n;j++){
//           if(i == j)
//              sum[0] += a[i][j];
//           if(i + j == n -1)
//               sum[1] += a[i][j];
//       }
//    }
//


    //solution 2: 1D

    vector<int> a(n*n);
    for(int i = 0;i < n*n ;i++)
       cin >> a[i];

    vector<int> sum(2);

//    for(int i = 0; i < n*n; i++){
//	   if((i % (n + 1)) == 0)		sum[0] += a[i];
//	   if(((i % (n - 1)) == 0) && (i != 0) && i != (n*n)-1)		sum[1] += a[i];
//    }

    for(int i = 0, j = n - 1; i < n*n; i = i + n + 1, j = j + n -1){
	   sum[0] += a[i];
	   sum[1] += a[j];
    }

    cout << abs(sum[0] - sum[1]);

    return 0;
}

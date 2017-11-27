#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;

    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; j++)
            cout << (i+j < n-1 ? " " : "#");
        cout << endl;
    }
//output:
//#
//##
//###
//####
//#####
//######
//

//    cout << endl << endl;
//
//    for(int i = 0; i<n; ++i){
//        for(int j = 0; j<n; j++)
//            cout << (i+j <= n-1 ? "#" : " ");
//        cout << endl;
//    }
//
//output:
//######
//#####
//####
//###
//##
//#
//
//
//    cout << endl << endl;
//
//    for(int i = 0; i<n; ++i){
//        for(int j = 0; j<n; j++)
//            cout << (i >= j ? "#" : " ");
//        cout << endl;
//    }
//
//output:
//#
//##
//###
//####
//#####
//######
//
//    cout << endl << endl;
//
//    for(int i = 0; i<n; ++i){
//        for(int j = 0; j<n; j++)
//            cout << (i <= j ? "#" : " ");
//        cout << endl;
//    }
//
//output:
//######
//#####
//####
//###
//##
//#
//
//    cout << endl << endl;
//
//    for(int i = 0; i<n; ++i){
//        for(int j = 0; j<2*n -1; j++)
//            cout << (((j >= n - i - 1) && (j <= n + i - 1)) ? "#" : " ");
//        cout << endl;
//    }
//
//output:
//     #
//    ###
//   #####
//  #######
// #########
//###########
//
//    cout << endl << endl;
//
//    for(int i = n-1; i>=0; --i){
//        for(int j = 0; j<2*n -1; j++)
//            cout << (((j >= n - i - 1) && (j <= n + i - 1)) ? "#" : " ");
//        cout << endl;
//    }
//output:
//###########
// #########
//  #######
//   #####
//    ###
//     #



    return 0;
}

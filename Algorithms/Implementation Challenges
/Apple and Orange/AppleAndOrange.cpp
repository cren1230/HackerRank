#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    int n_a = 0, n_o = 0;

    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
       int p = a + apple[apple_i];
       if(p >= s && p <= t)
    	   n_a++;
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
       int p = b + orange[orange_i];
       if(p >= s && p <= t)
    	   n_o++;
    }
    cout << n_a << endl;
    cout << n_o << endl;

    return 0;
}

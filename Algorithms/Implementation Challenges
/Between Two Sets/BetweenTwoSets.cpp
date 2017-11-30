#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
	while(b > 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int gcd(vector <int> input) {
	int result = input[0];
	for (int i = 1; i < input.size(); i++) {
		result = gcd(result, input[i]);
	}
	return result;
}

int lcm(int a, int b) {
	return a * (b / gcd(a, b));
}


int lcm(vector <int> input) {
	int result = input[0];
	for (int i = 1; i < input.size(); i++) {
		result = lcm(result, input[i]);
	}
	return result;
}

int getTotalX(vector <int> a, vector <int> b) {
    // Complete this function
    int f = lcm(a);
    int l = gcd(b);
    int count = 0;
    for(int i = f, j =2; i<=l; i=f*j,j++){
        if(l%i==0){ count++;}
    }
    return count;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}

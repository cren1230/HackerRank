#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    // Complete this function
    int s = grades.size();
    vector<int> newScore(s);
    for(int i = 0; i < s; i++){
        int diff = 5 - grades[i]%5;
        diff  = (grades[i] >= 38 && (diff < 3)) ? diff : 0;
        newScore[i] = grades[i] + diff;
    }
    return newScore;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    return 0;
}

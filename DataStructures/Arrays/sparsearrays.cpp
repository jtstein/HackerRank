// Jordan Stein
// https://www.hackerrank.com/challenges/sparse-arrays
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n = 0;
    vector<string> q1;
    vector<string> q2;
    
    cin >> n;
    string readin = " ";
    
    for(int i = 0; i < n; i++){
        cin >> readin;
        q1.push_back(readin);
    }
    
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> readin;
        q2.push_back(readin);
    }
    
    vector<int> counter(n);
    for(int i = 0; i < q2.size(); i++){
        for(int j = 0; j < q1.size(); j++ ){
            if(q2[i] == q1[j]){
               counter[i]++;
            }
        }
    }
    
    for(int i = 0; i < counter.size(); i++){
        cout << counter[i] << endl;
    }
    
    return 0;
}

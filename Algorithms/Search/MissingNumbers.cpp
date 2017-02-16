// Jordan Stein
// https://www.hackerrank.com/challenges/missing-numbers

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n, m;
    n = m = 0;
    vector<int> a, b;
    int readin = 0;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> readin;
        a.push_back(readin);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> readin;
        b.push_back(readin);
    }
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    vector<int> missingVals;
    
    if(n > m){
        int i = 0;
        for(int i=0; i < m; i++){
           if(a[i] != b[i]){
                if(!(find(missingVals.begin(), missingVals.end(), a[i]) != missingVals.end()))
                     missingVals.push_back(a[i]);
               a.erase(a.begin()+i);
               i--;
           }
        }
    }
    else{
        int i = 0;
        for(int i=0; i < n; i++){
           if(a[i] != b[i]){
               if(!(find(missingVals.begin(), missingVals.end(), b[i]) != missingVals.end()))
                      missingVals.push_back(b[i]);   
               b.erase(b.begin()+i);
               i--;
           }
        }

    }
        
    for(int i=0; i < missingVals.size(); i++){
        cout << missingVals[i] << " ";
     }
    
    return 0;
}

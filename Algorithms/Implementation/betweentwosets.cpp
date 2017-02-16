// Jordan Stein
// https://www.hackerrank.com/challenges/between-two-sets

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
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
    }
    
    vector<int> factorsList;
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(b[i] % a[j] == 0){
                if (!(find(factorsList.begin(), factorsList.end(), a[j]) != factorsList.end())){
                    factorsList.push_back(a[j]);
                }
            }
        }
    }
    
    bool firstFactor = true;
    for (int i=0; i < m; i++){
        if (b[i] % b[0] != 0){
            firstFactor = false;
        }
    }
    if (firstFactor && !(find(factorsList.begin(), factorsList.end(), b[0]) != factorsList.end())){
        factorsList.push_back(b[0]);
    }
    
    int factorCount = 0;
    
        for(int i=0; i<factorsList.size(); i++){
         cout<< factorsList[i] << endl;   
        }
    
    for(int i=0; i<factorsList.size(); i++){
        bool allFactors = true;
        for(int j=0; j < m; j++){
            if (b[j] % factorsList[i] != 0){
                allFactors = false;
                cout<<b[j] << " " << factorsList[i] << endl;
            }
        }
        if(allFactors)
            factorCount++;
    }
    
    cout << factorCount;

    return 0;
}
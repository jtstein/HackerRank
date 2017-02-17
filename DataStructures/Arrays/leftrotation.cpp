// Jordan Stein
// https://www.hackerrank.com/challenges/array-left-rotation
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, d;
    n = d = 0;
    vector<int> arr;
    cin >> n;
    cin >> d;
    
    int readin = 0;
    for(int i=0; i < n; i++){
        cin >> readin;
        arr.push_back(readin);
    }
    
    for(int i=0; i < d; i++){
        rotate(arr.begin(), arr.begin()+1, arr.end());
    }
    
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}

// Jordan Stein
// https://www.hackerrank.com/challenges/maxsubarray
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int testCount = 0;
    cin >> testCount;
    int arrLen = 0;
    int val = 0;
    int max = 0;
    int maxends = 0;
    int sum = 0;
    bool contiguous = false;
    
    for(int z = 0; z < testCount; z++){
        cin >> arrLen;
        vector<int> arr;
        for(int y = 0; y < arrLen; y++){
            cin >> val;
            arr.push_back(val);
        }
        
        
        int maxends = 0;

        max = -9999;
        maxends = 0;

         for (int i = 0; i < arrLen; i++)
         {
             maxends = maxends + arr[i];
             if (max < maxends)
                 max = maxends;

             if (maxends < 0)
                 maxends = 0;
         }

         cout << max << " ";
        

        sum = 0;
        for(int i = 0; i < arrLen; i++){
            if (arr[i] > 0){
                sum += arr[i];
            }
        }
        if (sum == 0){
            max = -99999;
            for(int i = 0; i < arrLen; i++){
                if (arr[i] > max){
                    max = arr[i];
                }
            }
            sum = max;
        }
        cout << sum << endl;
    }
       
    return 0;
}

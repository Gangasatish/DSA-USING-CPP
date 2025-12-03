#include<bits/stdc++.h>
using namespace std;
int missingnum(vector<int> arr, int n){
    int sum = n*(n+1)/2;
    int N = arr.size();
    int sum2 = 0;
    for(int i =0; i<N; i++){
        sum2 = sum2 + arr[i];
    }
    return sum - sum2;
}
int main(){
    vector<int> arr = {1, 2, 4, 5};
    int n = 5;
    int mn = missingnum(arr, n);
    cout << mn;
    return 0;
}
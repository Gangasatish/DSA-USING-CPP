#include<bits/stdc++.h>
using namespace std;
int subarray(vector<int> arr, int k){
    int n = arr.size();
    int length = 0;
    for(int i =0; i<n ; i++){
        int sum = 0;
        for(int j = i; j<n ; j++){
            sum = sum + arr[j];
            if(sum == k){
                length = max(length, j - i+ 1);
                break;
            }
        }
    }
    return length;
}
int main(){
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int length1 = subarray(arr, k);
    cout<< "length of subarray :" <<length1;
}
#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int> &arr, int start, int end){
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
vector<int> rotatetheelements(vector<int> &arr, int k){
    int n = arr.size(); 
    k = k % n;
    reverse(arr, n-k , n-1);
    reverse(arr, 0, n-k-1);
    reverse(arr, 0, n-1);
    return arr;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k;
    cin>>k;
    vector<int> nums = rotatetheelements(arr, k);
    for(int num : nums){
        cout<<" "<< num;

    }
    return 0;

}
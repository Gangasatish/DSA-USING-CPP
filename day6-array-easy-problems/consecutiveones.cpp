#include<bits/stdc++.h>
using namespace std;

int countOnes(vector<int> arr){
    int n = arr.size();
    int ones = 0;
    int cnt = 0;

    for(int j = 0; j < n; j++){
        if(arr[j] == 1){
            cnt++;
        } else {
            cnt = 0;
        }
        ones = max(ones, cnt);
    }
    return ones;
}

int main(){
    vector<int> arr = {1, 1, 0, 1, 1, 1};
    int c = countOnes(arr);
    cout << "The maximum consecutive 1's are " << c;
    return 0;
}

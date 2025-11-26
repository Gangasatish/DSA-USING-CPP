#include<iostream>
using namespace std;
int largest_element(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i<=n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[5] = {2, 5, 3, 4, 1};
    int n = sizeof(arr[5] /arr[0]);
    int max = largest_element(arr, n);
    cout<<max;
}
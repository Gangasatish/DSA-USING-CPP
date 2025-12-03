#include <bits/stdc++.h>
using namespace std;

// Class to encapsulate subarray logic
class SubarraySolver {
public:
    // Function to get the length of longest subarray with sum equal to k
    int getLongestSubarray(vector<int>& a, int k) {
        int n = a.size();
        map<int, int>summap;
        int sum = 0;
        int maxlen = 0;
        for(int i =0;i<n;i++){
            sum = sum + a[i];
            if(sum == k){
                maxlen = max(maxlen, i+1);
            }
            int rem = sum - k;
            if(summap.find(rem)!=summap.end()){
                int len = i - summap[rem];
                maxlen = max(maxlen, len);
            }
            if(summap.find(sum)==summap.end()){
                summap[sum] = i;
            }
        }
return maxlen;
    }
};

int main() {
    vector<int> a = { 2, 0, 0, 3, 0, 0, 0, 0, 2};
    int k = 2;

    SubarraySolver solver;
    int len = solver.getLongestSubarray(a, k);

    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
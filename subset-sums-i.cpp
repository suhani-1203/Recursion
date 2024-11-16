//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  void generateSubsets(int index,vector<int>& arr,int n, vector<int>& sum,vector<int>& subarr){
      if(index==n){
          int temp=0;
          for(int i=0;i<subarr.size();i++){
              temp+=subarr[i];
          }
          sum.push_back(temp);
          return;
      }
      subarr.push_back(arr[index]);
      generateSubsets(index+1,arr,n,sum,subarr);
      subarr.pop_back();
      generateSubsets(index+1,arr,n,sum,subarr);
      
  }
    vector<int> subsetSums(vector<int> arr, int n) {
        vector<int> sum;
        vector<int> subarr;
        generateSubsets(0,arr,n,sum,subarr);
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends

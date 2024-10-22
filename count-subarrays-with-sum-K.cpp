//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int generateSubsequences(int index,int n,int arr[],int subarr[],int totalSum,int currSum){
	    if(index==n){
	        if(currSum==totalSum){
	            return 1;
	        }
	        else
	            return 0;
	    }
	    int left=generateSubsequences(index+1,n,arr,subarr,totalSum,currSum);
	    subarr[index]=arr[index];
	    int right=generateSubsequences(index+1,n,arr,subarr,totalSum,currSum+subarr[index]);
	    
	    return left+right;
	}
	
	int perfectSum(int arr[], int n, int sum)
	{
	    int ans[n];
        int count=generateSubsequences(0,n,arr,ans,sum,0);
        int high=pow(10,9)+7;
        return count%high;
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends

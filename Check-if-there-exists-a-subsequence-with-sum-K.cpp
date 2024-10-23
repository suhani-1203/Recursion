bool checkSubset(int index,vector<int> &arr,int n,int currSum,int totalSum){
    if(index==n){
        if(currSum==totalSum)
            return true;
        else
            return false;
    }
    if(checkSubset(index+1,arr,n,currSum,totalSum)==true)
        return true;

    if(checkSubset(index+1,arr,n,currSum+arr[index],totalSum)==true)
        return true;
    
    return false;
}



bool isSubsetPresent(int n, int k, vector<int> &a)
{
    bool check=checkSubset(0,a,n,0,k);
    return check;
}

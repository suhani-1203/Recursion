
class Solution {
  public:
        void generateSubsequences(int index,string current,string& str,unordered_set<string>&subsequences){
            if(index==str.size()){
                subsequences.insert(current);
                return;
            }      
            generateSubsequences(index+1,current+str[index+1],str,subsequences);
            
            generateSubsequences(index+1,current,str,subsequences);
        } 
        int countSubsequences(string& str){
            unordered_set<string> subsequences;
            generateSubsequences(0,"",str,subsequences);
            return subsequences.size();
        }
        string betterString(string str1, string str2) {
            int noOfSubsequence1=countSubsequences(str1);
            int noOfSubsequence2=countSubsequences(str2);
            
            if(noOfSubsequence1==noOfSubsequence2 || noOfSubsequence1>noOfSubsequence2)
                return str1;
            else 
                return str2;
            
    }
};

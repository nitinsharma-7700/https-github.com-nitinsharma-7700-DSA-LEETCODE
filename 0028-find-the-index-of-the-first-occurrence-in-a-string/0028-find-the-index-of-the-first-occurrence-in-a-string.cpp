class Solution {
public:
void longest_pre_suf(vector<int>&lps,string s){

int pre=0,suf=1;
while(suf<s.size()){
    if(s[pre]==s[suf]){
        lps[suf]=pre+1;
        pre++,suf++;
    }
    else{
        if(pre==0){
            lps[suf]=0;
            suf++;
        }
        else{
            pre=lps[pre-1];
        }
    }
}
}
    int strStr(string haystack, string needle) {
        vector<int>lps(needle.size(),0);
        int first=0,second=0;
        longest_pre_suf(lps,needle);
        while(second<needle.size()&&first<haystack.size()){
            if(needle[second]==haystack[first]){
                second++,first++;
            }
            else{
                if(second==0){
                    first++;
                }
                else second=lps[second-1];
            }
        }
        if(second==needle.size()){
            return first-second;
        }
        
        return -1;
    }
};
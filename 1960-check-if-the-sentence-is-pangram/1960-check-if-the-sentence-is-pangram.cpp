class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.size();
        vector<int>ans(26,0);
        for(int i=0;i<n;i++){
            ans[sentence[i]-'a']=1;

        }
        for(int i=0;i<26;i++){
            if(ans[i]==0){
                return 0;
            }
        }
        return 1;

        
    }
};
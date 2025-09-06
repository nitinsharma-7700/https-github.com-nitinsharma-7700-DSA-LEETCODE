class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> valid_S(26,0);
        vector<int> valid_T(26,0);

        for(int i=0;i<s.size();i++){
            valid_S[s[i]-'a']++;

        }
        for(int i=0;i<t.size();i++){
            valid_T[t[i]-'a']++;

        }
        for(int i=0;i<26;i++){
            if(valid_S[i]-valid_T[i]!=0){
                return char(i+'a');
            }
        }
        return -1;
    }
};
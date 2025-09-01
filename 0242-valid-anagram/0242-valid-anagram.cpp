class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return 0;
        }
        vector<int> count(26,0);
        vector<int> count_2(26,0);
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
       
        for(int i=0;i<26;i++){
            if(count[i]!=0){
                return 0;
            }
        }
        return 1;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return 0;
        }
        vector<int> count_1(26,0);
        vector<int> count_2(26,0);
        for(int i=0;i<s.size();i++){
            count_1[s[i]-'a']++;
             count_2[t[i]-'a']++;
        }
       
        for(int i=0;i<26;i++){
            if(count_1[i]!=count_2[i]){
                return 0;
            }
        }
        return 1;
    }
};
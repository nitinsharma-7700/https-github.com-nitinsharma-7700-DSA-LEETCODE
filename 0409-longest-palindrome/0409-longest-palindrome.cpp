class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0),upper(26,0);
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'){
                lower[s[i]-'a']++;// no of uppercase and char are calculating 
            }
            else upper[s[i]-'A']++;
        }
        int count=0;
        bool odd=0;
        for(int i=0;i<26;i++){
            if(lower[i]%2==0){ // agar no. even ha to unhe count me ese hi add kar de 
                count+=lower[i];
            }
            else {count+=lower[i]-1;// nahi to ek kam karke add krde
            odd=1;// agar koi odd ya single h usko add kar jo centre ko cover kre
                  // eg. aacbcaa odd =1 b ke liye kiya ha 
            }
            if(upper[i]%2==0){
                count+=upper[i];
            }
            else {count+=upper[i]-1;
            odd=1;
            }
        }
        return count+odd;
        
    }
};
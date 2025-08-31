class Solution {
public:
    bool isPalindrome(string s) {
        int start=0,end=s.size()-1;
        string x;
        string y;
        while(start<=end){
            if(s[start]>='A'&& s[start]<='Z'){
                s[start]='a'+(s[start]-'A');
                x.push_back(s[start]);
                start++;
            }
            else if((s[start]-'a')>=0 && (s[start]-'a')<=25 || s[start]>='0' && s[start]<='9'){
                x.push_back(s[start]);
                start++;
            }
            else start++;
        }
        start=0;
        while(end>=start){
            if(s[end]>='A' && s[end]<='Z'){
                s[end]='a'+(s[end]-'A');
                y.push_back(s[end]);
                end--;
            }
            else if((s[end]-'a')>=0 && (s[end]-'a')<=25 || s[end]>='0' && s[end]<='9'){
                y.push_back(s[end]);
               end--;
            }
            else end--;
        }
        if(x==y){
            return 1;
        }
        return 0;
    }
};
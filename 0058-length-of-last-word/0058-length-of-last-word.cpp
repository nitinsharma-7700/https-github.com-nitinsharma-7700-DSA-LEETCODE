class Solution {
public:
    int lengthOfLastWord(string s) {
        int start=s.size()-1;
        int size=0;
        while(s[start]==' '){
            start--;
        }
        while(start>=0){
            if(s[start]==' '){
                break;

            }
            size++;
            start--;
        }
       return size; 
    }
};
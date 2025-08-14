class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        int start=0,end=address.size()-1;
        while(start<=end){
            if(address[start]=='.'){
               s.append("[.]");
                
            }
            else s.push_back(address[start]);
            start++;
        }
        return s;
        
    }
};
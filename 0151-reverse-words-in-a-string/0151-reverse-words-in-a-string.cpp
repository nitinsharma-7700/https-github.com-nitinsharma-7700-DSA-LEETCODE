
class Solution {
public:
    string reverseWords(string s) {
        // Step 1: Use stringstream to extract words
        stringstream ss(s);
        string word;
        vector<string> words;

        while (ss >> word) {   // automatically skips extra spaces
            words.push_back(word);
        }

        // Step 2: Reverse the words
        reverse(words.begin(), words.end());

        // Step 3: Join them with a space
        string result;
        for (int i = 0; i < words.size(); i++) {
            if (i > 0) result += " ";
            result += words[i];
        }

        return result;
    }
};
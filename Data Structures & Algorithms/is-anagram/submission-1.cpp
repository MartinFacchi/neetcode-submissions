class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> dict_s;
        unordered_map<char, int> dict_t;

        if (s.size() != t.size()){
            return false;
        }
        for (char letter : s){
            dict_s[letter] += 1;
        }
        
        for (char letter : t){
            dict_t[letter] += 1;
        }

        for (char letter : t){
            if (dict_t[letter] != dict_s[letter]){
                return false;
            }
        }        

        return true;
    }
};

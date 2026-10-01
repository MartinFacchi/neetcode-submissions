class Solution {
public:
    bool isValid(string s) {
        stack<char> pila;

        if(s.length()%2 != 0){
            return false;
        }

        int i = 0;
        while(i < s.length()){
            if(s[i] == '{' || s[i] == '(' || s[i] == '['){
                pila.push(s[i]);
            }
            else{
                if (pila.empty()){
                    return false;
                }

                if ((pila.top() == '[' &&  s[i] != ']') ||
                    (pila.top() == '{' && s[i] != '}') ||
                    (pila.top() == '(' &&  s[i] != ')')){

                    return false;
                }

                pila.pop();
            }

            i ++;
        } 
        return pila.empty();
    }
};

  #include<iostream>
using namespace std;
  
  class Solution {
public:
    bool isValid(string s) 
    {
        string str;
        for (int i = 0; i < s.size(); ++ i) 
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                str.push_back(s[i]);
            else 
            {
                if (s[i] == ')' && (!str.size() || str[str.size() - 1] != '(')) 
                    return false; 
                else if (s[i] == '}' && (!str.size() || str[str.size() - 1] != '{')) 
                    return false; 
                else if (s[i] == ']' && (!str.size() || str[str.size() - 1] != '[')) 
                    return false;
                str.pop_back();
            }
        }
        if (!str.size()) 
            return true;
        return false;
    }
};


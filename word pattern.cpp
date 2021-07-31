#include<iostream>
using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string s) {
         s += " ";
    unordered_map<char, string>mp;
    set<string>st;
    int i;
    for(i = 0; i < pattern.size() && s.size() != 0; i++) {
        if(mp.find(pattern[i]) == mp.end()) {
            mp[pattern[i]] = s.substr(0, s.find(" "));
            st.insert(s.substr(0, s.find(" ")));
        }else {
            unordered_map<char, string>::iterator it;
            it = mp.find(pattern[i]);
            // cout<<s.substr(0, s.find(" "))<<s.find(" ")<<endl;
            // return false;
            if(it -> second != s.substr(0, s.find(" "))) {
                return false;
            }
        }
        s = s.substr(s.find(" ") + 1);
    }
    if(i != pattern.size() && s.size() == 0) {
      return false;
    }
    if(i == pattern.size() && s.size() != 0) {
        return false;
    }
    return st.size() == mp.size() ? true : false;
    //return true;
    }
};

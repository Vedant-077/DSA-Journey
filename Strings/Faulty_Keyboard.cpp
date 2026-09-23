#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string finalString(string s) {
        int n=s.length();
        string word="";
       
    
        for(int i=0;i<n;i++)
        {
            if(s[i]!='i')
            {
             word+=s[i];
            }
            if(s[i]=='i')
            {
                reverse(word.begin(),word.end());
            }
        }

    return word;}
};
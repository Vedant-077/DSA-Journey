#include<bits/stdc++.h>
#include<string>
using namespace std;

class Solution {
public:
    int possibleStringCount(string word) {
        int count=1;
        if(word.length()==0)
        {
            count=0;
        }
        
       for(int i=0;i<word.length();i++)
       {
        if(word[i]==word[i+1])
        {
            count++;
        }
       } 
   return count; }
};
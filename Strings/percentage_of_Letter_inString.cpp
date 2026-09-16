#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int percentageLetter(string s, char letter) {
       int n=s.length();
       int count=0;
       for(int i=0;i<n;i++)
       {
        if(s[i]==letter)
        {
            count++;
        }
       } 
       float ans=(count*100/n);
       
       
       
   return ans; }
};
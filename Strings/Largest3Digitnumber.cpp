#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        string goodint="";
      for(int i=0;i<num.length()-2;i++)
      {
        if((num[i]==num[i+1]) && (num[i+1]==num[i+2]) && (num[i]==num[i+2]))
        {
            ans=num.substr(i,3);
            if(ans[0]>goodint[0])
            {
                goodint=ans;
            }
        }
      }  
    return goodint;}
};
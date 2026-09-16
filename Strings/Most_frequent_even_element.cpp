#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

        unordered_map<int, int> freq;

        
        for(auto c : nums)
        {
            if(c % 2 == 0)
            {
                freq[c]++;
            }
        }

        int maxfreq = 0;
        int maxnum = -1;

        
        for(auto p : freq)
        {
            if(p.second > maxfreq ||
               (p.second == maxfreq && p.first < maxnum))
            {
                maxfreq = p.second;
                maxnum = p.first;
            }
        }

        return maxnum;
    }
};
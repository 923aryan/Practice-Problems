class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.empty())
        return 0;
        if(s == " ")
        return 1;


        long long maxx = INT_MIN;
        long long counter= 0;
        for(int i = 0; i < s.length(); i++)
        {
            counter = 0;
            long long hash[95] = {0};
            for(int j = i; j < s.length(); j++)
            {
            if(hash[s[j]  - ' '] > 0)
            {
                counter = 0; 
                 break;
            }
            else
            {
                counter++;
                maxx = max(maxx, counter); 
               //cout<<counter<<"<-\n";
                hash[s[j] - ' ']++;
            }
         }
        }
       // cout<<max<<endl;
        return (int)maxx;
         
    }
};
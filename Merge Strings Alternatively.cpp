class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int k;
        int d=0;
        string s;
        for(int i=0;i<n;i++)
        {
             s+=word1[i];
            if(i<m)
            {
                s+=word2[i];
            }
        }
        if(n<m)
        {

            for(int i=n;i<m;i++ )
            {
                s+=word2[i];
            }
        }

        return s;
    }
};

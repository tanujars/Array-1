//Time Complexity-O(n*m)
//Space Complexity-O(1) without considering the output Space
//Did the code run on Leetcode? Yes

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i=0,j=0,k=matrix.size()-1;
        vector<int>m;
        if(matrix.empty())
        {
            return m;
        }
        int l=matrix[0].size()-1,p;
        while(i<=k && j<=l)
        {
            for(p=j;p<=l;p++)
            {
                m.push_back(matrix[i][p]);
            }
            i++;
            for(p=i;p<=k;p++)
            {
                m.push_back(matrix[p][l]);
            }
            l--;
            if(i<=k)
            {
                for(p=l;p>=j;p--)
                {
                    m.push_back(matrix[k][p]);
                }
                k--;
            }
            if(j<=l)
            {
                for(p=k;p>=i;p--)
                {
                    m.push_back(matrix[p][j]);
                }
                j++;
            }
        }
        return m;
    }
};

class Solution {
public:
    void nextPermutation(vector<int>& a)
    {
        int len = a.size();
            int i,j;
            for(i = len - 2; i >= 0 ; i--)
                if(a[i] < a[i+1]) break;

            if (i == -1) {
                reverse(a.begin(), a.end());
                return;
            }

            for(j = len - 1; j > i; j--)
                if(a[j] > a[i]) break;

            swap(a[i], a[j]);
            reverse(a.begin() + i + 1, a.end());
            return ;
    }
};
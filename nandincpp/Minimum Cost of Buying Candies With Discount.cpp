class Solution {
public:
    int minimumCost(vector<int>& A) {
        sort(begin(A), end(A), greater<>());
        int ans = 0, N = A.size();
        for (int i = 0; i < N; ++i) {
            ans += A[i++];
            if (i < N) ans += A[i++];
        }
        return ans;
    }
};
class Solution {
public:
    void flip(vector<int>& A, int k){
        reverse(A.begin(), A.begin() + k + 1);
    }
    
    int findLargest(vector<int> A, int start, int end){
        int max_val=INT_MIN, index=0;
        for(int i=start; i<end; i++){
        if(A[i]>max_val){
          max_val = A[i];
          index = i;
            }
        }
        return index;
    }
    
    vector<int> pancakeSort(vector<int>& A) {
        int n=A.size();
        vector<int> result;
        
        while(n>0){
            int k = findLargest(A, 0, n); // 1 (5)

            flip(A, k); // 5, 1, 4, 3, 2
            result.push_back(k+1);
            
            n--;
            flip(A, n); // 
            result.push_back(n+1);
        }

        return result;
    }
};
class Solution {
public:
    int getSum(int a, int b) 
    {
        bitset<32> A(a), B(b), C;
        int carry = 0;
        
        for(int i=0;i<32;i++)
        {
            C[i] = carry ^ (A[i]^B[i]);
            carry = (A[i]&B[i]) | (B[i]&carry) | (carry&A[i]);
        }
        int mybit_int;

        mybit_int = (int)(C.to_ulong());
        
        return mybit_int;
    }
};
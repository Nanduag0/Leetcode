class Solution {
public:
	vector<int> sortArrayByParityII(vector<int>& A) {

		int i = 0;
		int n = A.size();
		int j = 1;

		while(1){

			while(i<n && A[i]%2 == 0) i+=2;
			while(j<n && A[j]%2 != 0) j+=2;

			if(i<n && j<n){
				swap(A[i],A[j]);
			}else{
				break;
			}

		}
		return A;
	}
};
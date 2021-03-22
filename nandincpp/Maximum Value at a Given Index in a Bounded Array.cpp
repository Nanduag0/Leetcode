#define ll long long

class Solution {
    ll answer = 0;
public:
    int maxValue(int n, int index, int maxSum)
    {
        ll low = 1, high = maxSum;
        ll left_space = index, right_space = n - index - 1;
        
        while(low <= high)
        {
            ll mid = low + (high-low)/2;
            
            ll sum = mid;
            ll left_sum = 0, right_sum = 0;
            ll temp = mid - 1;
            
            if(right_space <= temp)
                right_sum = temp*(temp+1)/2 - (temp-right_space)*(temp-right_space+1)/2;
            else
                right_sum = temp*(temp+1)/2 + 1*(right_space - temp);
            
            if(left_space <= temp)
               left_sum = temp*(temp+1)/2 - (temp-left_space)*(temp-left_space+1)/2;
            else
                left_sum = temp*(temp+1)/2 + 1*(left_space - temp);
            
            sum += (left_sum + right_sum);
            
            if(sum <= maxSum)
            {
                answer = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        
        return answer;
    }
};
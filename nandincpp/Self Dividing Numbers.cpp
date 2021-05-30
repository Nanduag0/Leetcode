class Solution {
public:
  bool is_good(int n){
    int k = n;
    
    while(k){
      int dig = k % 10;
      k /= 10;
      if( dig == 0 || n % dig != 0 ) return false;
    }
    
    return true;
  }
  
  
  vector<int> selfDividingNumbers(int left, int right) {
    vector<int> answer;
    do if(is_good(left)) answer.push_back(left); 
    while(++left <= right);
    return answer;
  }
};
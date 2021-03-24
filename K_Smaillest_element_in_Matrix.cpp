int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  vector<int> vec;
  int x=0;
  priority_queue<int,vector<int>,greater<int>> pq;
  
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
         pq.push(mat[i][j]);
         
      }
  }
  while(k>0)
  {
      x=pq.top();
      pq.pop();
      k--;
      
  }
  return x;
  
  
  
  
}

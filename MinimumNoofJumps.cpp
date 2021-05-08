int minJumps(int arr[], int n){
    // Your code here
    int jump=1;
    int step=arr[0];
    int maxi=arr[0];
    if(step==0)
    {
        return -1;
    }
    if(n==1)
    {
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        if(i==n-1)
        {
            return jump;
        }
       maxi=max(maxi,arr[i]+i);
       step--;
       if(step==0)
       {
           jump++;
           if(i>=maxi)
           {
               return -1;
           }
           step=maxi-i;
       }
    }
    return jump;
}

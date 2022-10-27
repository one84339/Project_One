    int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int i=0;i<N;i++)
           sum += arr[i];
           
        if(sum%2 !=0)
        return 0;
        else
        return isSubset(arr,N,sum/2);
    }
    
    
    bool isSubset(int arr[], int n, int s){
        bool dp[n+1][s+1];
        int i,j;
        
        for(i=0;i<=n;i++)
        for(j=0;j<=s;j++){
            if(i==0)
              dp[i][j]=false;
            else if(j==0)
            dp[i][j]=true;
        }  
        for(i=1;i<=n;i++)
        for(j=1;j<=s;j++){    
            if(arr[i-1]<=j)
            dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            else 
            dp[i][j] = dp[i-1][j];
            
        }
        return dp[n][s];
    }


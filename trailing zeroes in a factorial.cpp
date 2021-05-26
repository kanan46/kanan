 int trailingZeroes(int N)
    {
        // Write Your Code here
       int j=5;
        int ans=0;
        while(j<=N)
        {
            ans+= N/j;
            j=j*5;
        }
        return ans;
    }

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        // Allocate memory for product array andinitialise it by 1
        vector<long long int> vec(n, 1ll);
        if (n == 1) 
        {
            return vec;
        }
        
        // In this loop temp will store the product of values on the left side of nums[i]
        long long temp = 1ll;
        for(int i = 0;i < n;i++) 
        {
            vec[i] *= temp;
            temp *= nums[i];
        }
        
        // In this loop temp will store the product of values on the right side of nums[i]
        temp = 1ll;
        for(int i = n - 1;i >= 0;i--)
        {
            vec[i] *= temp;
            temp *= nums[i];
        }
        
        
        return vec; // return the expected vector
    }
};

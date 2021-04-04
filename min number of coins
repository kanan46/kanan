#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
	int mc(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    int res=INT_MAX;
	    if(V==0)
	    {
	        return 0;
	    }
        for(int i=0; i<M; i++){
            if(coins[i]<=V){
                int sub_res= mc(coins, M, V-coins[i]);
                if(sub_res != INT_MAX && sub_res +1 < res)
                res=sub_res+1;
            }
        }
        return res; 
	}
};
int main(){
	int coins[]={9,6,5,1};
	int M= sizeof(coins)/sizeof(coins[0]);
	int V=11;
	cout<<"min. number of coins req="<<mc(coins, M, V);
	return 0;
}

class Solution{
    unordered_map<string , vector<string>> dp;
public:
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        // code here
        vector<string> result;
        for (string w:dict){
            if(s.substr(0,w.length())==w){
                if(w.length()==s.length())
                    result.push_back(w);
                else
                {
                    vector<string>temp=wordBreak(n,dict,s.substr(w.length()));
                    for(string t: temp)
                        result.push_back(w+" "+t);
                }
            }
        }
        dp[s]=result;
        return result;
    }
};

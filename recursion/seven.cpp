#include<iostream>
#include<vector>
using namespace std;

    void solve(vector<int> nums, vector<int> output,int i,vector<vector<int>>& ans)
    {
        //basecase
        if(i >= nums.size())
        {
            ans.push_back(output);
            return ;
        }

        //exclude game
        solve(nums,output,i+1,ans);

        //include game
        int element = nums[i];
        output.push_back(element);
        solve(nums,output,i+1,ans);

    }
        vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int> > ans; //sare output isme store karna hai
        vector<int> output;
        int i = 0;
        solve(nums,output,i,ans);
        return ans;
    }

    // ----------------------------------------------------------------------------------------------

    void solve(vector<string>& ans, string str, string output, int i) {
    //base case
    if(i>=str.length()) {
        if(output.length()>0)
        ans.push_back(output);
        return ;
        }
    
    //exclude
    solve(ans, str, output, i+1);
    //include
    output.push_back(str[i]);
    solve(ans, str, output, i+1);
}

vector<string> subsequences(string str){
	
	vector<string> ans;
    string output = "";
    solve(ans,str,output,0);
    return ans;
	
}



int main()
{
    return 0;
}
    

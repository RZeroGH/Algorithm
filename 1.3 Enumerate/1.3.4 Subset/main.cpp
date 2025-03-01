#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> tmp;
        int n = nums.size();

        for (int st = 0; st < (1 << n); ++st) // (1 << n)意思是活的2^n个情况，并且根据st进行每个数的选取 
        {
            vector<int> t;
            for (int i = 0; i < n; ++i)
            {
                if ((st >> i) & 1) // 用于确认第i位是否是1，是就pushback到子集中 
                {
                    t.push_back(nums[i]);
                }
            }
            tmp.push_back(t);
        }

        return tmp;
    }
};

int main()
{
	
	return 0;
} 

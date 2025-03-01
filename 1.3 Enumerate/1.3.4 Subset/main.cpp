#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> tmp;
        int n = nums.size();

        for (int st = 0; st < (1 << n); ++st) // (1 << n)��˼�ǻ��2^n����������Ҹ���st����ÿ������ѡȡ 
        {
            vector<int> t;
            for (int i = 0; i < n; ++i)
            {
                if ((st >> i) & 1) // ����ȷ�ϵ�iλ�Ƿ���1���Ǿ�pushback���Ӽ��� 
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

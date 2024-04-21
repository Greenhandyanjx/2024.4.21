#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>res;
        int n = nums.size();
        for (int i = 0; i < nums.size() - 2; i++)
        {
            int x = nums[i];
            if (x + nums[i + 1] + nums[i + 2] > 0)break;
            else if (x + nums[n - 2] + nums[n - 1] < 0)continue;
            int lef = i + 1, rig = n - 1;
            while (lef < rig)
            {
                int sum = lef + rig+x;
                if (sum < 0)lef++;
                else if (sum > 0)rig--;
                else {
                    res.push_back({ x, nums[lef], nums[rig] });
                }
            }
        }
        return res;
    }
};
int main()
{


	return 0;
}
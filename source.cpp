// this thing doesn't work
#include <iostream>
#include"string.h"
#include<string>
#include <vector>
#include <queue>
#include <stack>
using namespace std;


int searchInsert(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size() - 1;
    int mid;
    while (l<=r)
    {
        mid = ((l + r) / 2);
        if (target == nums[mid])
            return mid;
        else if (target > nums[mid])
            l = mid;
        else
            r = mid;
    }
    return mid;
}
 
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);
    int out= searchInsert(nums,7);
    //system("pause");
    return 0;
};

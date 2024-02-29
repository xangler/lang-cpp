#include "sort.h"
using namespace std;

vector<int> Solution::sortArray(vector<int>& nums) {
    QuickSort(nums, 0, nums.size()-1);
    return nums;
}

void Solution::QuickSort(vector<int>& nums,int l,int r) {
    if (l<r)
    {
        int mid = partition(nums, l, r);
        QuickSort(nums, l, mid-1);//注意点，l和r的值自己写错
        QuickSort(nums, mid + 1, r);//注意点,l和r的值自己写错
    }
}

int Solution::partition(vector<int>& nums, int l, int r)
{
    //选取不同的主元，交换方式不一样，选取左主元，得从右向左遍历，且判断该pivot是否小于当前元素，小于则交换
    //下面以右主元为例
    int pivot = nums[r];
    //两个指针,一者移动
    int i = l, j = l,temp;
    //遍历序列，找主元应该插入的位置
    for (;j<r;j++)
    {
        //交换
        if (nums[j] < pivot) {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
        }
    }
    nums[r] = nums[i];
    nums[i] = pivot;
    return i;//返回分割位置
}

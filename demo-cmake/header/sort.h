#ifndef HEADER_SORT_H
#define HEADER_SORT_H

#include <vector>
using namespace std;

class Solution {
public:
	vector<int> sortArray(vector<int>& nums);

private:
	void QuickSort(vector<int>& nums,int l,int r);
	int partition(vector<int>& nums, int l, int r);
};

#endif // !HEADER_SORT_H

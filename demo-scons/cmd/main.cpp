#include <vector>
#include <iostream>
#include "header/sort.h"

using namespace std;

int main(void){
    auto solution = Solution();
    vector<int> arr = {32,12,7, 78, 23,45};
    
    cout << "排序前" << endl;
    for(int i=0;i<arr.size();i++)
        cout << arr[i] << "\t";
    cout << endl;

    vector<int> out = solution.sortArray(arr);
    cout << "排序后" << endl;
    for(int i=0;i<out.size();i++)
        cout << out[i] << "\t";
    cout << endl;
    return 0;
}

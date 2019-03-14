//
// Created by Administrator on 2019/3/14.
//

#include "lc376.h"

int lc376::wiggleMaxLength(vector<int>& nums){
    if(nums.size() < 2)return nums.size();
    int len = nums.size();
    int f = 1;int b = 1;
    for (int i = 1; i < len; ++i) {
       if(nums[i] - nums[i-1] >0)f = b+1;
       else if(nums[i] - nums[i-1] <0)b = f + 1;
    }
    return max(f,b);
}
void lc376::test() {
    lc376 sl;
    int arr[] = {1,7,4,9,2,5};
    vector<int> v(arr,arr+6);
    cout << sl.wiggleMaxLength(v);
}
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        return nums.size();
    }
};
//unique函数可以对有序（必须有序）数组进行去重——相邻重复元素移到数组末尾（把不重复的元素前移）
//其返回值是一个迭代器，指向冗余元素的起始位置
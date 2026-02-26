class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int origin_size = 0;
        for (int x :nums) {
            if (x!=val){
                nums[origin_size++]=x;//这里是后置自增，先进行入栈，再加1
            }
        }
        return origin_size;
    }
};
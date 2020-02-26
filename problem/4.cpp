class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int p1 = 0;
        int p2 = 0;
        vector<int> nums;
        while(p1 < nums1.size() && p2 < nums2.size())
        {
            if(nums1[p1] < nums2[p2])
            {
                nums.push_back(nums1[p1]);
                p1 ++;
            }
            else
            {
                nums.push_back(nums2[p2]);
                p2 ++;
            }
        }
        if(p1 < nums1.size())
        {
            for(int i = p1;i < nums1.size();i++)
                nums.push_back(nums1[i]);
        }
        if(p2 < nums2.size())
        {
            for(int i = p2;i<nums2.size();i++)
                nums.push_back(nums2[i]);
        }
        int tot = nums.size() - 1;
        double res;
        if(tot % 2 == 1)
            res = (nums[tot/2] + nums[tot/2 + 1]) / 2.0;
        else
            res = nums[tot/2] * 1.0;
        return res;
    }
};

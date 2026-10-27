class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums1_ptr = m -1;
        int nums2_ptr = n -1;
        int size = m + n - 1;
        while (size >= 0){
            if (nums1_ptr >= 0 && nums2_ptr >= 0){
                if (nums1[nums1_ptr] > nums2[nums2_ptr]){
                    nums1[size] = nums1[nums1_ptr];
                    nums1[nums1_ptr] = -1;
                    nums1_ptr--;
                } else if (nums2[nums2_ptr] >= nums1[nums1_ptr]){
                    nums1[size] = nums2[nums2_ptr];
                    nums2_ptr--;
                }
            } else if (nums1_ptr < 0){
                nums1[size] = nums2[nums2_ptr];
                nums2_ptr--;
            } else if (nums2_ptr < 0){
                nums1[size] = nums1[nums1_ptr];
                nums1_ptr--;
            }
            size--;
        }
        
        
    }
};
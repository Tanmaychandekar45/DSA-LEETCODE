class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        vector<int>res;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                res.push_back(nums1[i]);
                i++;
            }
            else{
                res.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            res.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            res.push_back(nums2[j]);
            j++;
        }

        int mid=res.size()/2;

        if(res.size()%2 != 0){
            return res[mid];
        }
        else {
            return (res[mid-1]+res[mid])/2.0;
        }
    }
};
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double sum=0, ans=0;
        int len=nums1.size()+nums2.size();
        vector<int> v(len);
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), v.begin());
        if(v.size()%2==0)
        {
            sum+=v[v.size()/2];
            sum+=v[v.size()/2-1];
            ans=sum/2;
        }
        else
        {
            ans=v[v.size()/2];
        }
        return ans;
    }
};

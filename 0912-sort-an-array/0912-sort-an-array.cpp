class Solution {
public:
    void mergeSort(vector<int>& a, int l, int h) {
        if (l >= h) return;

        int m = l + (h - l) / 2;

        mergeSort(a, l, m);
        mergeSort(a, m + 1, h);

        vector<int> t;
        int i = l, j = m + 1;

        while (i <= m && j <= h)
            t.push_back(a[i] <= a[j] ? a[i++] : a[j++]);

        while (i <= m) t.push_back(a[i++]);
        while (j <= h) t.push_back(a[j++]);

        for (int k = l; k <= h; k++)
            a[k] = t[k - l];
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
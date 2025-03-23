void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m - 1;      // nums1'in aktif elemanlarının son indexi
    int j = n - 1;      // nums2'nin son indexi
    int k = m + n - 1;  // nums1'in son toplam indexi

    for (; i >= 0 && j >= 0; k--) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i--];
        } else {
            nums1[k] = nums2[j--];
        }
    }

    for (; j >= 0; k--, j--) {
        nums1[k] = nums2[j];
    }
}
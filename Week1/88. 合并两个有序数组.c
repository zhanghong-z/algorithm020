void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int tail = m + n - 1;  
    --m, --n;              
    while (n >= 0) {       
        if (m >= 0 && nums1[m] > nums2[n]) {   
            nums1[tail--] = nums1[m--];         
        } else {
            nums1[tail--] = nums2[n--];
        }
    }             
}
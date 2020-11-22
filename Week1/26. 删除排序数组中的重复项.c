int removeDuplicates(int* nums, int numsSize){
    int x = 0, y = 1;
    if(numsSize < 2){
        return numsSize;
    }

    while(y < numsSize){
        if(nums[y++] > nums[x]){
             nums[++x] = nums[y - 1];
        }    
    }
    return (x + 1);
}
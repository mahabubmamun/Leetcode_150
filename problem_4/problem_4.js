/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let size = nums.length;
    if(size<=2)
    {
        return size;
    }
    let k = 2;
    for(let i=0;i<size;i++)
    {
        if(nums[i] != nums[k-2])
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
};

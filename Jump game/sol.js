/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function(nums) {
    let size = nums.length;
    let val = 0;
    for(let i=0;i<size;i++)
    {
        if(i>val)
        {
            return false;
        }
        val = Math.max(val, i+nums[i]);
    }
    return true;
};

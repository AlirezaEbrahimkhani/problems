/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function (nums) {
  let maxSub = nums[0];
  let max = 0;

  for (let i = 0; i < nums.length; ++i) {
    if (max < 0) max = 0;
    max += nums[i];
    maxSub = Math.max(max, maxSub);
  }
  return maxSub;
};

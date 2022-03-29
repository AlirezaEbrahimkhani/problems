/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDisappearedNumbers = function (nums) {
  let temp = [...Array(nums.length + 1)].map((_, i) => i + 1);
  let set = new Set(nums);
  let result = [];
  for (let i = 0; i < temp.length - 1; i++) {
    if (!set.has(temp[i])) result.push(temp[i]);
  }
  return result;
};

/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function (nums) {
  let countHistory = {};

  for (let i = 0; i < nums.length; i++) {
    if (countHistory[nums[i]]) {
      countHistory[nums[i]]++;
    } else {
      countHistory[nums[i]] = 1;
    }
  }
  let res;
  Object.keys(countHistory).forEach((key) => {
    if (countHistory[key] === 1) res = key;
  });
  return res;
};

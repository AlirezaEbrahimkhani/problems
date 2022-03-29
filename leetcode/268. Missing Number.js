var missingNumber = function (nums) {
  let temp = [...Array(nums.length + 1)].map((_, i) => i);
  let sortedArray = nums.sort((a, b) => a - b);
  for (let i = 0; i < temp.length; i++) {
    if (temp[i] != sortedArray[i]) return temp[i];
  }
};

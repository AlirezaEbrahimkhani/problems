/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  let left = 0;
  let right = 1;
  let max = 0;
  while (right < prices.length) {
    if (prices[left] < prices[right]) {
      let tempMax = prices[right] - prices[left];
      max = Math.max(max, tempMax);
    } else {
      left = right;
    }
    right++;
  }
  return max;
};

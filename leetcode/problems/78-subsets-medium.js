/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var subsets = function (numbersArray) {
  let result = [[]];
  for (let i = 0; i < numbersArray.length; i++) {
    let temp = JSON.parse(JSON.stringify(result));
    for (let j = 0; j < result.length; j++) {
      temp[j].push(numbersArray[i]);
    }
    result.push(...temp);
  }
  return result;
};

module.exports = subsets;

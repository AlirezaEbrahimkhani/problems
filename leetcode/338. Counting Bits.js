/**
 * @param {number} n
 * @return {number[]}
 */
// var countBits = function (n) {
//   let result = [];
//   for (let i = 0; i <= n; i++) {
//     result.push(baseTwo(i));
//   }

//   function baseTwo(num) {
//     let count = 0;
//     while (num != 0) {
//       if (num % 2 === 1) count++;
//       num = Math.floor(num / 2);
//     }
//     return count;
//   }
//   return result;
// };

var countBits = function (n) {
  let memory = [0];
  let offset = 1;

  for (let i = 1; i <= n; i++) {
    if (offset * 2 == i) offset *= 2;
    memory[i] = memory[i - offset] + 1;
  }
  return memory;
};

console.log(countBits(2));
console.log(countBits(5));

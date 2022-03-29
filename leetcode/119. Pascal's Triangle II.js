/**
 * @param {number} rowIndex
 * @return {number[]}
 */
var getRow = function (rowIndex) {
  let memory = {
    0: [1],
    1: [1, 1],
  };

  if (rowIndex < 2) return memory[rowIndex];

  function calcPascal(index) {
    let result = [1];
    for (let i = 1; i < memory[index - 1].length; i++) {
      result.push(memory[index - 1][i - 1] + memory[index - 1][i]);
    }
    result.push(1);
    memory[index] = result;
  }
  for (let i = 2; i <= rowIndex; i++) {
    calcPascal(i);
  }
  return memory[rowIndex];
};

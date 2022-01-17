const subset = require("../problems/78-subsets");

describe("78-subset", () => {
  test("should return all possible subsets (the power set)", () => {
    expect(subset([0])).toEqual([[], [0]]);
    expect(subset([1, 2, 3])).toEqual([
      [],
      [1],
      [2],
      [1, 2],
      [3],
      [1, 3],
      [2, 3],
      [1, 2, 3],
    ]);
  });
});

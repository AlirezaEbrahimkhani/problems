/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root1
 * @param {TreeNode} root2
 * @return {boolean}
 */
var leafSimilar = function (root1, root2) {
  let leaves1 = [];
  let leaves2 = [];

  function findLeaves(node, leaves) {
    if (node != null) {
      if (node.left === null && node.right === null) leaves.push(node.val);
      findLeaves(node.left, leaves);
      findLeaves(node.right, leaves);
    }
  }

  findLeaves(root1, leaves1);
  findLeaves(root2, leaves2);

  return JSON.stringify(leaves1) === JSON.stringify(leaves2);
};

module.exports = leafSimilar;

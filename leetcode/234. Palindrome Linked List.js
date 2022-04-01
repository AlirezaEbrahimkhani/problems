/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {boolean}
 */

// var isPalindrome = function(head) {
//     let nums = []
    
//     while(head) {
//         nums.push(head.val);
//         head = head.next;
//     }

//     for(let i = 0; i < nums.length; ++i) {
//         if(nums[i] != nums[nums.length - 1 - i]) {
//             return false;
//         }
//     }
//     return true
// };


var isPalindrome = (head) => {
    
    let fast = head;
    let slow = head;
    
    while(fast && fast.next) {
        fast = fast.next.next;
        slow = slow.next;
    }
    
    let temp;
    let prev;
    while(slow) {
        temp = slow.next;
        slow.next = prev;
        prev = slow;
        slow = temp;
    }
    
    let left = head;
    let right = prev;
    while(right) {
        if(left.val != right.val) return false;
        left = left.next;
        right = right.next;
    }
    return true
    
}

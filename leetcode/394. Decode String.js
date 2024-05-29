/**
 * @param {string} s
 * @return {string}
 */
var decodeString = function(s) {
    let stack = [];

    if(!s.includes('[')) return s;

    for (let char of s) {
        if (char !== ']') {
            stack.push(char);
        } else {
            let enStr = "";
            while (stack[stack.length - 1] !== '[') 
                enStr = stack.pop() + enStr;
            
            stack.pop();

            let num = "";
            while (/\d/.test(stack[stack.length - 1]))
                num = stack.pop() + num;
            
            stack.push(enStr.repeat(Number(num)));
        }
    }

    return stack.join("");
};

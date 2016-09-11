/**
 * @param {string} s
 * @return {string}
 */
var reverseString = function(s) {
    var arr1 = s.split("");
    return arr1.reverse().join("");

};
console.log(reverseString("hello"));
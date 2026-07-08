/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
    if (x < 0 || x < -(2 ** 31) || x > (2 ** 31) - 1) {
        return false
    }
    let originalVal = x;
    let revNum = 0
    while (x > 0) {
        revNum = (revNum * 10) + (x % 10)
        x = Math.floor(x / 10)
    }
    if (revNum == originalVal) {
        return true
    }
    return false;


};
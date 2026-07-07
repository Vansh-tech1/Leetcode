/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {
    let revNum = 0
    let isNegative = false;
    if (x < 0) {
        isNegative = true;
        x *= -1;
    }
    while (x > 0) {
        revNum = (revNum * 10) + (x % 10)
        x = Math.floor(x / 10)
    }
    if (revNum < -(2 ** 31) || revNum > 2 ** 31 - 1) {
        return 0
    }
    if (isNegative) {
        return revNum *= -1
    }

    return revNum;

};
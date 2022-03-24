// 1523. Count Odd Numbers in an Interval Range
// Difficulty: Easy

/**
 * @param {number} low
 * @param {number} high
 * @return {number}
 */
var countOdds = function(low, high) {
    let num = Math.floor((high - low)/2);
    if (low%2 || high%2) {
        num++;
    }
    
    return num;
};

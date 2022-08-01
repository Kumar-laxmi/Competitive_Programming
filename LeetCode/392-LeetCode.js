// 392. Is Subsequence
// Difficulty: Easy

/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isSubsequence = function(s, t) {
    let i = 0;
    
    for(let j = 0; j<t.length; j++) {
        if(s[i]===t[j]) {
            i = i + 1;
        }
    }
    
    return i===s.length;
};

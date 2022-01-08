process.stdin.resume();
process.stdin.setEncoding('utf8');

// your code goes here
var input = '';

process.stdin.on('data', function(data) {
    input += data;
});

process.stdin.on('end', function() {
    input = input.split('\n');
    let num = parseInt(input.shift());
    for(let i=0; i<num; i++){
        let m = parseInt(input[i].split(' ')[0]);
        let n = parseInt(input[i].split(' ')[1]);
        let g = gcd(m, n);
        console.log(g + ' ' + ((m * n) / g));
    }
});

function gcd(a, b){
    if(a === 0)
        return b;
        
    if(b === 0)
        return a;
        
    if(a === b)
        return a;
        
    if(a > b)
        return gcd(a-b, b);
    else
        return gcd(a, b-a);
}

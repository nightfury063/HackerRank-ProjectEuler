function processData(input) {
    var MAX = 150000;
    
    var primes= [], is_prime = [];
    for(var i =0; i< MAX; ++i){
        is_prime.push(1);
    }
    is_prime[0]= is_prime[1] = 0;
    
    for(var i=2; i<MAX; i++){
        if(is_prime[i]){
            primes.push(i);
            for(var j = i+i; j<MAX; j+=i){
                is_prime[j] = 0;
            }
        }
    }
    
    
    input = input.split(/\s+/);
    var T = parseInt(input[0]);
    
    for(var tc = 0; tc < T; ++tc){
        var N = parseInt(input[tc+1]);
        console.log(primes[N-1]);
    }
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});

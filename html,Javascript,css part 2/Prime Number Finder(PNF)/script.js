
let Prime_Numbers = []

function Is_Prime(n){
    if(n < 2){
        return false
    }
    for(let i = 2;i < n-1;i++){
        if( n % i === 0){
            return false
        }
    }
    return true
}

function START(n){
    for(let i = 0;i!=n;i++){
        if(Is_Prime(i) == true){
            Prime_Numbers.push(i)
        }
    }
    console.log(Prime_Numbers)
}
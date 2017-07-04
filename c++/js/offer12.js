function Power(base, exponent)
{
    // write code here
    var sum = 1;
    if(base)
    for(var i = 1; i <= Math.abs(exponent); i++){
    	sum *= base;
    }
    if(exponent < 0)
    	sum = 1/sum;
    return sum;
}
console.log(Power(2,-3));
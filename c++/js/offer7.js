function Fibonacci(n)
{
    // write code here
    if(n == 0 || n == 1){
		return n;
	}
	var arr=[];
	arr[0] =0,arr[1]=1;
	for(var i = 2; i <= n; i++){
		arr[i] = arr[i-1]+arr[i-2];
	}
	return arr[n];
}
console.log(Fibonacci(3));
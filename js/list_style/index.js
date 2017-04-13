function main(){
	var brr = readline().split(" ").map(x=>+x);
	var minSize = brr[0], maxSize = brr[1];
	var n = readline().map(x=>+x);
	var arr=new Array(1010); 
	var flag=new Array(1010);
	arr=readline().split(" ").map(x=>+x);
	for(var j = 1; j <= 1000; j++){
	    flag[j] = 1;
	}
	for(var i = 0; i < n; i++){
	    info(arr[i], minSize, maxSize);
	}
	var ans = 0;
	for(var i = minSize; i <= maxSize; i++){
	    if(flag[i])
	        ans++;
	}
	print(ans);
}

function info(var x, var minsize, var maxsize){
    for(var i = x*2; i <= Math.min(x*10, maxsize); i++){
        flag[i] =0;
    }
    for(var j = Math.max(Math.ceil(x/10), minsize); j <= x/2; j++)
    {
        flag[j]=0;
    }
}
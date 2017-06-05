var str = readline().split(" ").map(x=>+x);
var n = str[0];
var S = str[1];
var arr = readline().split(" ").map(x=>+x);
var sum = [];
var ans =0;

var l=0,r=n;
while(l != r){
	var mid = (l+r+1)>>1;
	var ret = 0;
	for(var i = 0; i < n; i++){
		sum[i] = arr[i]+mid*(i+1);
	}
	sum.sort(cmp);
	for(var i=0; i < mid; i++){
		ret += sum[i];
	}
	if(ret <= S){
		l = mid;
		ans = ret;
	}
	else r = mid-1;
}
print(l+" "+ans);
function cmp(value1, value2){
	return value1-value2;
}
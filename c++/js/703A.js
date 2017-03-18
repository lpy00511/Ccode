function cmp(x){
	return parseInt(x);
}
var n = parseInt(readline());
var a = [];
for(var i = 0; i < n; i++){
	a[i] = readline().split(" ").map(cmp);
}
function test(){
	//var a =[[3,5],[1,2],[4,2]];
	var awin = 0, bwin = 0;
	var result='';
	for(var i = 0; i < n; i++)
	{
		if(a[i][0] > a[i][1]){
			awin ++;
		}
		else if(a[i][0] < a[i][1]){
			bwin ++;
		}
		else{
			continue;
		}
	}
	if(awin > bwin){
		result='Mishka';
	}
	else if(awin < bwin){
		result='Chris';
	}
	else{
		result='Friendship is magic!^^';
	}
	print(result);
	return result;
}
console.log(test(3));
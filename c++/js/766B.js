function cmp(arg1, arg2){
	return arg1-arg2;
}
function triangle(n, a){
	a.sort(cmp);
	//console.log(a);
	for(var i = 0; i+2 < a.length; i++){
		var flag;
		var temp1 = Number(a[i]);
		var temp2 = Number(a[i+1]);
		var temp3 = Number(a[i+2]);
		if(temp3 < (temp1+temp2)&&temp3>(temp2-temp1))
		{	//console.log(temp1+' '+temp2+' '+temp3);
			return 'YES';
		}
	}
	return 'NO';
}
//console.log(triangle(30,[197,75,517,39724,7906061,1153471,3,15166,168284,3019844,272293,316,16,24548,42,118,5792,5,9373,1866366,4886214,24,2206,712886,104005,1363,836,64273,440585,3576]));
function main(){
	var n;
	var a=[];
	n = parseInt(readline());
	a = readline().split(' ').map(function returnInt(element)
		{
			return parseInt(element);
		});
	var result = triangle(n, a);
	print(result);
}
main();
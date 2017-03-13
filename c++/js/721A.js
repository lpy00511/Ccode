
function main(str){

	//var len = str.length;
	var len = parseInt(readline());
	var str = readline();
	var ans = 0, sum = 0;
	var s='', s1=[];
	var a=[];
	if(str.indexOf('B') < 0){
		print(0);
	}
	else if(str.indexOf('W') < 0){
		ans = len;
		print(1);
		print(ans);
	}
	else{
		var r = "W";
		s = str.replace(new RegExp(r, 'gm'),' ');
		var r1 = /\s+/g;
		s = s.replace(r1,' ');
		s1 = s.split(" ");
		var k = 0;
		for(var i = 0; i < s1.length; i++){
			if(s1[i] !== ""){
				a[k++] = s1[i].length;
			}
		}
		print(k);
		for(var j = 0; j < k; j++){
			print(a[j]+' ');
		}
	}
}
console.log(main("WWWW"));
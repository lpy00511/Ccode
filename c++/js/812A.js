var l = [];
var s = [];
var r = [];
var p = [];
//将每一列存储在一个数组内
for(var i= 0; i < 4;i++){
	var numbers = readline().split(" ").map(function(x){ return parseInt(x)});
	//最好不要在循环里写函数
	l.push(numbers[0]);
	s.push(numbers[1]);
	r.push(numbers[2]);
	p.push(numbers[3]);
}
var result = false;
for(var i =0; i < 4;i++){
	if(p[i] == 1){
		if(l[i] == 1 || s[i] == 1 || r[i] == 1){
			result = true;
		}
	}
}
if(!result){
	for(var i =0; i < 4;i++){
		if(p[i] == 1){
			if(l[(i+1)%4] == 1 || s[(i+2)%4] == 1 || r[(i+3)%4] == 1)
				result = true;
		}
	}
}
if(result)
	print("YES");
else print("NO");
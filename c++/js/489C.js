function calculate(m,s){
	/*
	var inp = readline().split(" ").map(function(x){return parseInt(x);});
	var m = inp[0];
	var s = inp[1];
	*/
	var maximum='',minimum=''; 
	if(s === 0)
	{
		if(m === 1){
			maximum = '0';
			minimum = '0';
		}
		else 
		{
			maximum = '-1';
			minimum = '-1';
		}
	}else if(s > m*9){
		maximum = '-1';
		minimum = '-1';
	}
	else if(m === 1){
		maximum = s.toString();
		minimum = s.toString();
	}
	else{
		/*最大值*/
		if(s < 9){
			maximum = s.toString();
			for(var i = 2; i <= m; i++)
			{
				maximum += '0';
			}
		}
		else if(s >= 9){
			var ans = s;
			maximum = '9';
			ans = ans-9;
			while(ans > 0){
				if(ans >= 9){
					maximum = maximum+'9';
					ans -= 9;
				}
				else {
					maximum += ans.toString();
					ans -= ans;
				}
			}
			var len='';
			for(var j = 1; j <= m-maximum.length; j++)
			{
				len = len+ '0';
			}
			maximum = maximum+len;
		}
		/*最小值*/
		s = s-1;
		if(s < 9){
			var s1 = s;
			minimum = (s1).toString();
			var len1='';
			for(var k = 1; k <= m-2; k ++)
			{
				len1 = len1+'0';
			}
			minimum = '1'+len1+minimum;
		}
		else {
			var ans1 = s;
			var flag = 0;
			var temp=0;
			minimum = '9';
			ans1 = ans1 - 9;
			while(ans1 > 0){
				if(minimum.length === m-1)
				{	
					temp = ans1;
					ans1 = 0;
					flag = 1;
					break;
				}
				else{
					if(ans1 >= 9){
						minimum = '9'+minimum;
						ans1 -= 9;
						}
					else{
						minimum = ans1.toString()+minimum;
						ans1 -= ans1;
					}
				}
			}
			if(flag === 1)
			{
				minimum = (temp+1).toString()+minimum;
			}
			else{
				var temp1 = '';
				for(var l = 1; l < m-minimum.length; l ++)
				{
					temp1 = temp1+'0';
				}
				minimum = '1'+temp1+minimum;
			}
		}
	}
	//print(minimum+" "+maximum);
	return minimum+" "+maximum;
}
function main(str){
	var m = Number(str.split(" ")[0]);
	var s = Number(str.split(" ")[1]);
	return calculate(m,s);
}
console.log(main("1 2"));
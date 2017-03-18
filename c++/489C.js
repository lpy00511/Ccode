function calculate(m,s){
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
	}else if(s > m*9)
	{
		maximum = '-1';
		minimum = '-1';
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
			while(ans > 0){
				maximum = '9';
				ans = ans-9;
				if(ans >= 9){
					var temp2 = '';
					temp2+='9';
					maximum += temp2;
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
		s = s-1
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
			while(ans1 > 0){
				minimum = '9';
				ans1 = ans1 - 9;
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
				for(var l = 2; l <= m-2; l ++)
				{
					temp1 = temp1+'0';
				}
				minimum = '1'+temp1+minimum;
			}
		}
	}
	return maximum+" "+minimum;
}
function main(str){
	/*
	var m = Number(readline().split(" ")[0]);
	var s = Number(readline().split(" ")[1]);
	print(calculate(m,s));
	*/
	var m = Number(str.split(" ")[0]);
	var s = Number(str.split(" ")[1]);
	return calculate(m,s);
}
console.log(main("3 24"));







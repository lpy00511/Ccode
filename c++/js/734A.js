function test(n, s){
	var n = parseInt(readline());
	var s = readline().split("");
	var len = s.length;
	var ans = 0;
	for(var i = 0; i < len; i++)
	{
		if(s[i] == 'A')
			ans ++;
	}
	var flag;
	if(ans > len-ans)
	{
		flag = "Anton";
	}
	else if(ans < len-ans)
	{
		flag = "Danik";
	}
	else flag = "Friendship";
	print(flag);
	return flag;
}
console.log(test(6,"DDDAAA"));
function moonUporDown(s, n){
	//var n = parseInt(readline());
	//var a = readline().split(" ");
	var a = s.split(" ");
	var len = a.length;
	var flag;
	if(n == 1)
	{
		if(a[0] == 0)
            { 
            	flag = "UP";
            	return flag;
            }
		else if(a[0] == 15)
			{
				flag = "DOWN";
				return flag;
			} 
		else{
			flag = -1;
			return flag;
			//print(flag);
		} 
	}
	else {
		if(a[len-2] == 14 && a[len-1] == 15){
			flag = "DOWN";
			//print(flag);
			return flag;
		}
		else if(a[len-1] == 0 && a[len-2] == 1){
			flag = "UP";
			//print(flag);
			return flag;
		}
		else if((a[len-1]-a[len-2])>0)
		{
			flag = "UP";
			//print(flag);
			return flag;
		}
		else if((a[len-2]-a[len-1])>0)
		{
			flag = "DOWN";
			//print(flag);
			return flag;
		}
	}
}
console.log(moonUporDown("15", 1));
/*
  var n = parseInt(readline());
	var a = readline().split(" ");
	var len = a.length;
	var flag;
	if(n == 1)
	{
		if(a[0] == 0)
            print("UP");
		else if(a[0] == 15)
			print("DOWN");
		else{
			flag = -1;
			print(flag);
		} 
	}
	else {
		if(a[len-2] == 14 && a[len-1] == 15){
			flag = "DOWN";
			print(flag);
		}
		else if(a[len-1] == 0 && a[len-2] == 1){
			flag = "UP";
			print(flag);
		}
		else if((a[len-1]-a[len-2]) > 0)
		{
			flag = "UP";
			print(flag);
		}
		else
		{
			flag = "DOWN";
			print(flag);
		}
	}
*/
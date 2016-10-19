function cmp(str1, str2){
	if(str1.length < str2.length)
	{
		return 1;
	}
	else if(str1.length > str2.length){
		return 2;
	}
	else{
		if(str1 < str2)
			return 1;
		else if(str1 > str2)
			return 2;
		else return 3;
	}
}
function meeting(s){
 	//var a = readline().split(" ");
 	var a = s.split(" ");
 	var l1 = a[0];
 	var r1 = a[1];
 	var l2 = a[2];
 	var r2 = a[3];
 	var k = a[4];
 	if(cmp(r1,l2) == 1)
 	{
 		ans = 0;
 		//print(ans);
 		return 1;
 	}
 	else if((cmp(l2,l1) == 1|3)&&(cmp(r1,r2) ==1|3))
 	{
 		if((cmp(k,l1) == 2|3)&& (cmp(k,r1) == 1|3))
 		{
 			ans = r1-l1;
 		}
 		else{
 			ans = r1-l1+1;
 		}
 		//print(ans);
 		return 2;
 	}
 	else if((cmp(l1,l2) == 1|3)&&(cmp(r2,r1) ==1|3))
 	{
 		if((cmp(k, l2) == 2|3) && (cmp(k,r2) == 1|3)){
 			ans = r2-l2;
 			//return ans;
 		}
 		else{
 			ans = r2-l2+1;
 		}
 		//print(ans);
 		return 3;
 	}
 	else if((cmp(l2,r1)==1|3) && (cmp(l1,l2)==1|3 )){
 		if((cmp(k,l2) == 2|3)&& (cmp(k,r1) == 1|3)){
 			ans= r1-l2;
 		}
 		else{
 			ans = r1-l2+1;
 		}
 		//print(ans);
 		return 4;
 	}
 	else if(cmp(l1,l2 == 2|3)&& (cmp(l1,r2) == 1|3)){
 		if((cmp(k,l1) ==2|3) && (cmp(k,r2) == 1|3))
 		{
 			ans = r2-l1;
 		}
 		else{
 			ans = r2-l1+1;
 		} 
 		//print(ans);
 		return 5;
 	}
}
console.log(meeting("1 100000000000000 2 999999999999 4"));

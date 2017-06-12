function Sum_Solution(n){
	var ans =n;
	ans && (ans += Sum_Solution(n-1));
	return ans;
}
console.log(Sum_Solution(10000));
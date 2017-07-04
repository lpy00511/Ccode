// function NumberOf1(n)
// {
//     // write code here
//     var ans = 0;
//     while(n){
//     	if(n & 1){
//     		ans ++;
//     	}
//         n=n>>1;
//     }
//     return ans;
// }
////这种做法不能处理负数
// function NumberOf1(n)
// {
//     // write code here
//     var ans = 0;
//     var flag = 1;
//     while(flag){
//     	if(n & flag){
//     		ans ++;
//     	}
//         flag=flag<<1;
//     }
//     return ans;
// }
// console.log(NumberOf1(7));

//这种做法是通过把标志数不断的左移，与n做比较
function NumberOf1(n)
{
    // write code here
    var ans = 0;
    while(n){
    	ans ++;
        n = (n-1)&n;
    }
    return ans;
}
console.log(NumberOf1(7));

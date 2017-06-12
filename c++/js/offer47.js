function Add(num1, num2)
{
    // write code here
    var ans = (num1 ^num2);
    return ans.toString(2);
}
console.log(Add(8,7));
//本题目的大致意思是不用+，-，*，/四则运算实现两个数的加法
//（1）最容易想到的方法是利用js方法toString(2)将两个数转化成二进制，然后再按位与，
//如果结果为0， 说明两位同时为1，则进位，但是这样做很麻烦，而且换成别的语言就会不适用。
//(2)搞清加法的本质

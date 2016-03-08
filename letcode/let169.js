/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    var numSize = nums.length;
    var max_v = 0, min_v = 0x7fffffff;
    for(var i = 1; i <= numSize; i ++)
    {
    	if(nums[i] < min_v)
    		min_v = nums[i];
    	if(nums[i] > max_v)
    		max_v = nums[i];

        '\n'
    }
    var a = new Array(max_v);
    for(var i = 1; i <= numSize; i ++)
    {
    	a[nums[i]]++;
    }
    for(var i = min_v; i <= max_v; i ++)
    {
    	if(a[i] >= (numSize/2+1))
    		return a[i];
    }
};
console.log(majorityElement("12333"));
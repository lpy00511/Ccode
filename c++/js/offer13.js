function reOrderArray(array)
{
    var ary = [],ary1=[];
    var k1 = 0, k2=0;
    var len = array.length;
    for(var i=0;i<len;i++){
    	if(!(array[i] & 1)){
    		ary[k1++] = array[i];
    	}
    	else{
    		ary1[k2++] = array[i];
    	}
    }
    return ary1.concat(ary);
}
console.log(reOrderArray([2,9,6,1,3,5,7]));
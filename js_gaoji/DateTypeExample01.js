var test = function(){
	var start = new Date();
	var y2k = new Date(Date.UTC(2004,4,25));
	var someDate = new Date(Date.parse("May 25,2004"));
	var allFives = new Date(2005,4,5,17,55,55);
	//return someDate;
	//return allFives; 
	var arr1 = [1,2,3,4,5]; 
	arr1.reverse();
	var stop = new Date();
	var result = stop-start;
	return start.toString();
}
console.log(test());
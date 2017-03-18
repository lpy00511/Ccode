function createComparisonFunction(propertyName) {
	// body...
	return function(object1,object2){
		var value1 = object1[propertyName];
		var value2 = object2[propertyName];
		if(value1 < value2){
			return -1;
		}
		else if(value1 > value2){
			return 1;
		}
		else{
			return 0;
		}
	};
}
var data=[{name:"Zachary",age:28},{name:"Nicholas",age:29}];
console.log(typeof data);

data.sort(createComparisonFunction("name"));
console.log(data[1]);
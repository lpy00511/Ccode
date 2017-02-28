(function(){
	var coords = (function(){
	var str="0 0";
	var i, results;
	results = [];
	for(i = 1; i <= 3; i++)
	{
		results.push(str.split(' ').map(Number));
	}
	return results;
	})();
	result =[];
	for(i = 0, len = coords.length; i< len; i++){

	}
}();
console.log(coords("0 0"));
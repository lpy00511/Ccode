var arr = [ 5,7, 3, 3, 5,5,5 ];
function minNumberInarr(arr){
	var left = 0
	var right=arr.length-1;
	var mid=left;
	if(arr.length == 0)
		return 0;
	while(arr[left] >= arr[right]){
		if(right - left == 1){
			mid = right;
			break;
		}
		mid = Math.floor((left+right)/2);//floor(x+0.5) 即加0.5后向下兼容
		//console.log(mid);
		if(arr[mid] >= arr[left]){
			left = mid;
		}
		else if(arr[mid] < arr[left]){
			right = mid;
		}
		else if(arr[mid] == arr[left] && arr[mid] == arr[right]){
			return inOrder(arr);
		}
	}
	return arr[mid];
}
function inOrder(arr){
	var min = arr[0];
	for(var i = 0; i < arr.length; i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}
console.log(minNumberInarr(arr));
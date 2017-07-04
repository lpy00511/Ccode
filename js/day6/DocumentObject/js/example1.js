var ulList = document.getElementsByTagName('ul')[0];//ul元素
//add new item to end of list
var newItemLast = document.createElement('li');
var newTextLast = document.createTextNode('cream');
newItemLast.appendChild(newTextLast);
ulList.appendChild(newItemLast);
//add new item to start of list
var newItemFirst = document.createElement('li');
var newTextFirst = document.createTextNode('kale');
newItemFirst.appendChild(newTextFirst);
ulList.insertBefore(newItemFirst,ulList.firstChild);

var listItems = document.getElementsByTagName('li');
var i;
// add a class of cool to all list items;
for(i = 0; i < listItems.length; i++){
	listItems[i].className = 'cool';
}
// add number of items in the list to the heading
var heading = document.getElementsByTagName('h2')[0];
var headingText = heading.firstChild.nodeValue;
var totalItems = listItems.length;
var newHeading = headingText+'<span>'+totalItems+'</span>';
heading.innerHTML = newHeading;

var isSupported = document.implementation.hasFeature("FocusEvent","3.0");
console.log(isSupported);

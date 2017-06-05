function addEventHandler(element,type,handler){
  if(element.addEventListener){
    element.addEventListener(type,handler,false);
  }else if(element.attachEvent){
    element.attachEvent("on"+type,handler);
  }else {
    element["on"+type] = handler;
  }
}
var nodeArr = [11,7,15,5,9,13,20,3,8,10,12,14,25];
var node=[];
function draw(){
	var tree = document.getElementById("chart-wrap");
	var node_top = document.createElement("div");
	node_top.className="circle";
	tree.appendChild(node_top);
	var left_line = document.createElement("div");
	left_line.className ="left-line";
	tree.appendChild(left_line);
	var right_line = document.createElement("div");
	right_line.className="right-line";
	tree.appendChild(right_line);
	var index_left = window.getComputedStyle(node_top, "").left.indexOf('px');
	var index_top = window.getComputedStyle(node_top,"").top.indexOf('px');
	
	var node1 = document.createElement("div");
	node1.className="circle";
	tree.appendChild(node1);
	node1.style.left= Number(window.getComputedStyle(node_top, "").left.substring(0, index_left))-150+'px';
	node1.style.top = Number(window.getComputedStyle(node_top, "").left.substring(0, index_top))+100+'px';
	var node2 = document.createElement("div");
	node2.className="circle";
	tree.appendChild(node2);
	console.log(index_top);
	node2.style.left= Number(window.getComputedStyle(node_top, "").left.substring(0, index_left))+150+'px';
	node2.style.top = Number(window.getComputedStyle(node_top, "").top.substring(0, index_top))+100+'px';

}
 window.onload = function(){
 	draw();
 }









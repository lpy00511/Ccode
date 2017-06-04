function addEventHandler(element,type,handler){
  if(element.addEventListener){
    element.addEventListener(type,handler,false);
  }else if(element.attachEvent){
    element.attachEvent("on"+type,handler);
  }else {
    element["on"+type] = handler;
  }
}
function draw(){
	var tree = document.getElementById("chart-warp");
	var node-top = document.createElement("div");
	node_top.setAttribute("class", "circle");
	tree.appendChild("node_top");
	var line-top-left = document.createElement("div");
}
 window.onload = function(){
 	draw();
 }
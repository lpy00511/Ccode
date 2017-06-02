function addEventHandler(element,type,handler){
  if(element.addEventListener){
    element.addEventListener(type,handler,false);
  }else if(element.attachEvent){
    element.attachEvent("on"+type,handler);
  }else {
    element["on"+type] = handler;
  }
}
function getInputNode(){
	var btn = document.getElementsByName("insert");
	addEventHandler(btn,'click',function(){
		var nodeArr = document.getElementById("input-node").value;
		console.log(nodeArr);
	});
}
function init(){
	getInputNode();
}
init();
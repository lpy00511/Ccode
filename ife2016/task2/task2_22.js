function addEventHandler(element,type,handler){
  if(element.addEventListener){
    element.addEventListener(type,handler,false);
  }else if(element.attachEvent){
    element.attachEvent("on"+type,handler);
  }else {
    element["on"+type] = handler;
  }
}
var nodeArr=[];//将输入的节点转化成数组
function getInputNode(){
<<<<<<< HEAD
	var btn = document.getElementsByName("insert");
	addEventHandler(btn,'click',function(){
		var nodeArr = document.getElementById("input-node").value;
		console.log(nodeArr);
	});
=======
	var btn = document.getElementById("submit1");
	addEventHandler(btn,"click",Handler);
>>>>>>> fca95f2329826911586ec39d17ad7b7ff84a4b50
}
var Handler= function(){
  var text = document.getElementById("input-node").value;
  nodeArr = text.split(","); 
  console.log(nodeArr);
  draw();
};
//为数组的每个元素画一个树的节点
function convertImageToCanvas(){
  var canvas = document.getElementById("Btree");
   if(!canvas.getContext) return false;
  var ctx = canvas.getContext('2d');
  var img = new Image();
  img.onload = function(){
    ctx.drawImage(img,0,0);
  }
  img.src="image/bg.png";
}
function draw(){
  var canvas = document.getElementById("Btree");
  if(!canvas.getContext) return false;
  var ctx = canvas.getContext('2d');
  ctx.beginPath();
  ctx.arc(500,100,20,0,Math.PI*2,true);
  ctx.stroke();
  var value= nodeArr[0];
  ctx.fillText(value,498,102);
  ctx.moveTo();
}
///画网格
window.onload=function(){
  getInputNode();
  convertImageToCanvas();
}
//树的结构
//11
//7 15
//5 9、 13 20 
//3、 8 10、 12 14、 18 25
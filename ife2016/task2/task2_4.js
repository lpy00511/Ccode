/**
 * aqiData，存储用户输入的空气指数数据
 * 示例格式：
 * aqiData = {
 *    "北京": 90,
 *    "上海": 40
 * };
 */
 // 定义一些正则表达式，用于城市还有空气质量指数的匹配
 var regCity = /^[\u4e00-\u9fa5a-zA-Z\/\(\)]+$/;
 var regData = /[0-9]/;
 //去除两边空格
 function trim(str){
 	return str.replace(/(^\s*)|(\s*$)/g,'');
 }
var aqiData = {};
/**
 * 从用户输入中获取数据，向aqiData中增加一条数据
 * 然后渲染aqi-list列表，增加新增的数据
 */
function addAqiData() {
	var city_name = document.getElementById("aqi-city-input").value;
	var value = document.getElementById("aqi-value-input").value;
	if(!regCity.test(trim(city_name))){
		alert("城市的名称必须为中英文字符");
	}
	else if(!regData.test(trim(value))){
		alert("空气质量必须为整数");
	}
	else {
		aqiData[city_name]= value;
	}
}
/**
 * 渲染aqi-table表格
 */
 function renderAqiList() {
 	var table = document.getElementById("aqi-table");
 	var Html = "<tr><td>城市</td><td>空气质量</td><td>操作</td></tr>";
 	var contentHtml = "<tr><td>{city_name}</td><td>{value}</td><td><button>删除</button></td></tr>";
	for(j in aqiData){
	 	Html+=contentHtml.replace("{city_name}",j).replace("{value}",aqiData[j]);
	}
	table.innerHTML = Html;
}
/**
 * 点击add-btn时的处理逻辑
 * 获取用户输入，更新数据，并进行页面呈现的更新
 */
function addBtnHandle() {
  addAqiData();
  renderAqiList();
}
/**
 * 点击各个删除按钮的时候的处理逻辑
 * 获取哪个城市数据被删，删除数据，更新表格显示
 */
function delBtnHandle(e) {
  // do sth.
  var city = e.target.parentNode.parentNode.firstChild.innerHTML;
  delete aqiData[city];
  renderAqiList();
}
function init() {
	
  // 在这下面给add-btn绑定一个点击事件，点击时触发addBtnHandle函数
    var btn = document.querySelector("#add-btn");
	btn.addEventListener("click",addBtnHandle); 
  // 想办法给aqi-table中的所有删除按钮绑定事件，触发delBtnHandle函数
  	var button = document.getElementById("aqi-table");
  	button.addEventListener("click",delBtnHandle);
}
window.onload = function(){
	init();
}




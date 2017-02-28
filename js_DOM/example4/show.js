function addLoadEvent(func){
	var oldonload = window.onload;
	if(typeof window.onload != "function"){
		window.onload = func;
	}else {
		window.onload = function(){
			oldonload();
			func();
		}
	}
}
function showPic(whichpic) {
	if(!document.getElementById('placeholder')) return false;
	var source = whichpic.getAttribute("href");
	var placeholder = document.getElementById("placeholder");
	placeholder.setAttribute("src", source);
	if(document.getElementById('description')){
		var text = whichpic.getAttribute("title")?whichpic.getAttribute("title"):"";
		var description = document.getElementById("description");
		description.firstChild.nodeValue = text;
	}
	return true;
}
addLoadEvent(prepareGallery);

function prepareGallery() {
	if (!document.getElementsByTagName) return false;
	if(!document.getElementById) return false;
	if(!document.getElementById("imagegallery")) return false;
	var gallery = document.getElementById("imagegallery");
	var links = gallery.getElementsByTagName('a');
	for(var i = 0; i < links.length; i++)
	{
		links[i].onclick = function(){
		//	showPic(this);//修改成下面这种写法是为了更好的支持平稳退化，当showPic执行成功后返回false;
		//  return false;
			return !showPic(this);  
		}
		//links[i].onkeypress = links[i].onclick; //键盘访问，但是最好不用，onclick对键盘访问的支持已经相当完美
	}
} 
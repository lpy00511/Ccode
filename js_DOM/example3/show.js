window.onload = prepareLinks;
function prepareLinks(){
	if(!document.getElementsByTagName) return false;
	var links = document.getElementsByTagName("a");
	for(var i = 0; i < links.length; i++)
	{
		if(links[i].getAttribute("class") == "popup"){
			links[i].onclick = function(){
				popUp(this.getAttribute("href"));
				return false;
			}
		}
	}
}
function popUp(winURL){
	window.open(winURL, "popup", "width=320px, height=480px");
}

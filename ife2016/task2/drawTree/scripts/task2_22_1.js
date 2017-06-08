function addEventHandler(element, type, handler) {
    if (element.addEventListener) {
        element.addEventListener(type, handler, false);
    } else if (element.attachEvent) {
        element.attachEvent("on" + type, handler);
    } else {
        element["on" + type] = handler;
    }
}

var nodeArr = [11, 7, 15, 5, 9, 13, 20, 3, 8, 10, 12, 14, 25];



require(['BinarySearchTree'], function() {

    var tree = new BinarySearchTree();
    function Node(key) {
        this.key = key;
        this.offsetL = 0;
        this.offsetT = 0;
        this.floor = 0;
        this.drawleft = false;
        this.drawright = false;
    }
    var objArr = [];
    for(var i = 0; i < nodeArr.length; i++) {
        objArr[i] = new Node(nodeArr[i]);
        tree.insert(objArr[i]);
    }
    var tree1 = document.getElementById("chart-wrap");
    var maxfloor = objArr[0].floor;
    console.log(maxfloor);

    function draw(node) {
        var node_top = document.createElement("div");
        node_top.className = "circle";
        var left_line = document.createElement("div");
        var right_line = document.createElement("div");
        if (!node.parent && node.floor==1) {
            node.offsetL = 475;
            node.offsetT = 50;
        } else {
            if (node.floor == 2) {
                if (!node.parent.drawleft && node.key < node.parent.key) {
                    node.offsetL = node.parent.offsetL - 250;
                    node.offsetT = node.parent.offsetT + 100;
                    node.parent.drawleft = true;
                    left_line.className = "left-line";
                } else if (!node.parent.drawright && node.key > node.parent.key) {
                    node.offsetL = node.parent.offsetL + 250;
                    node.offsetT = node.parent.offsetT + 100;
                    node.parent.drawright = true;
                    right_line.className = "right-line";
                }
            } else {
                if (!node.parent.drawleft && node.key < node.parent.key) {
                    node.offsetL = node.parent.offsetL - 100;
                    node.offsetT = node.parent.offsetT + 100;
                    node.parent.drawleft = true;
                    left_line.className = "left-little-line";

                } else if (!node.parent.drawright && node.key > node.parent.key) {
                    node.offsetL = node.parent.offsetL + 100;
                    node.offsetT = node.parent.offsetT + 100;
                    node.parent.drawright = true;
                    right_line.className = "right-little-line";
                }
            }
        }
        node_top.style.left = node.offsetL + 'px';
        if(left_line.className == "left-line"){
            left_line.style.left = 25 + 'px';
            left_line.style.top = -51+ 'px';
        }else{
            left_line.style.left = 25 + 'px';
            left_line.style.top = -51+ 'px';
        }
        node_top.style.top = node.offsetT + 'px';
        if(right_line.className == "right-line"){
            right_line.style.left = -225+'px';
            right_line.style.top = -51+ 'px';
        }else{
            right_line.style.left = -75 + 'px';
            right_line.style.top = -51+ 'px';
        }
        
        tree1.appendChild(node_top);
        var innerspan = document.createElement("span");
        innerspan.className = "text";
        innerspan.innerHTML = node.key;
        node_top.appendChild(innerspan);
        node_top.appendChild(left_line);
        node_top.appendChild(right_line);
        node.strcut = node_top;
    }
    //想把draw作为callback 函数，这样遍历的时候将树画出来
    tree.drawTree(draw);
    //树的遍历（1）中序遍历：也是中根遍历
    // tree.inOrderTraverse(printNode);
    // 树的遍历 （2）先序遍历
    // tree.preOrderTraverse(printNode);
    // 输的遍历（3）后序遍历
   tree.postOrderTraverse(draw);
    var preBtn = document.getElementById("preorder");
    var inBtn = document.getElementsByName("inorder");
    var postBtn = document.getElementsByName("postorder");
    var divList = [];
    var timer = null;
    function printNode(node){
        divList.push(node);
    }
    function reset(){
        divList = [];
        clearInterval(timer);
        
    }
    addEventHandler(preBtn,"click",function(){
            reset();
            tree.preOrderTraverse(printNode);
            changeColor();
            //console.log(divList);
    });
    addEventHandler(inBtn,"click",function(){
            reset();
            tree.inOrderTraverse(printNode);
            changeColor();
    });
    addEventHandler(postBtn,"click",function(){
            reset();
            tree.postOrderTraverse(printNode);
            changeColor();
    });
    function changeColor(node){
            var j = 0;
            //console.log(divList.length);
            for(var i =0 ; i < divList.length; i++)
            divList[i].strcut.style.backgroundColor = '#fff';
            console.log(divList);
            // for(j = 1; j < divList.length; j++){
            //     timer = setInterval(function(argument){
            //         divList[j-1].strcut.style.backgroundColor='#fff';
            //         divList[j].struct.style.backgroundColor='blue';
            //         //console.log(divList[i]);
                    
            //         //console.log(divList[divList.length-1]);
            //     },500);
            // }
            clearTimeout(timer);
            divList[divList.length-1].struct.style.backgroundColor='#fff';   
            //console.log(divList);
    } 
});
   







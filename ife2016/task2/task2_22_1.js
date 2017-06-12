function addEventHandler(element, type, handler) {
    if (element.addEventListener) {
        element.addEventListener(type, handler, false);
    } else if (element.attachEvent) {
        element.attachEvent("on" + type, handler);
    } else {
        element["on" + type] = handler;
    }
}

function draw(node,newNode,flag) {
    var tree = document.getElementById("chart-wrap");

    var node_top = document.createElement("div");
    node_top.className = "circle";
    tree.appendChild(node_top);
    //顶层的两条线
    var left_line = document.createElement("div");
    left_line.className = "left-line";
    tree.appendChild(left_line);

    var right_line = document.createElement("div");
    right_line.className = "right-line";
    tree.appendChild(right_line);
    //第2层的两个节点
    var node1 = document.createElement("div");
    node1.className = "circle";
    tree.appendChild(node1);
    node1.style.left = Number(window.getComputedStyle(node_top, "").left.substring(0, 3)) - 150 + 'px';
    node1.style.top = Number(window.getComputedStyle(node_top, "").top.substring(0, 2)) + 100 + 'px';
    var node2 = document.createElement("div");
    node2.className = "circle";
    tree.appendChild(node2);
    node2.style.left = Number(window.getComputedStyle(node_top, "").left.substring(0, 3)) + 150 + 'px';
    node2.style.top = Number(window.getComputedStyle(node_top, "").top.substring(0, 2)) + 100 + 'px';
    //第2层的几条线
}


$(document).ready(function() { 
	$("#submit_onclick").click(function(){
		var username = $("#username").val();
		var password = $("#password").val();
		$.ajax({
			type:"GET",
			url:"http://hpllxy2.com/ajax-login",
			data:{username:username,
				  password:password},
		    success:function(data){
		    	alert(data.message);
		    }
		});
	});
	
}); 

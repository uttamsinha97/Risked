var editor = ace.edit("editor");
var lang;

var clickCount = 1; // variable to check the 1st click of the button, so that the default code can be saved.
var editorDefCode;// to store the default saved code of the user

var defaultC = '#include <stdio.h>\n\nint main() {\n\t//code\n\treturn 0;\n}';
var defaultCPP = '#include <iostream>\nusing namespace std;\n\nint main() {\n\t//code\n\treturn 0;\n}';
var defaultJava = 'import java.util.*;\nimport java.lang.*;\nimport java.io.*;\n\nclass GFG {\n\tpublic static void main (String[] args) {\n\t\t//code\n\t}\n}';
var defaultPython = '#code';

var isLsAvailable = true;
var themes = {"Theme Light":"ace/theme/chrome","Dark":"ace/theme/vibrant_ink","Monokai":"ace/theme/monokai","GeeksforGeeks":"ace/theme/gfg"};

function getQueryVariable(variable) {
  var query = window.location.search.substring(1);
  var vars = query.split("&");
  for (var i=0;i<vars.length;i++) {
    var pair = vars[i].split("=");
    if (pair[0] == variable) {
      return pair[1];
    }
  }
}

function lsTest(){
    var test = 'test';
    try {
      localStorage.setItem(test, test);
      localStorage.removeItem(test);
      isLsAvailable = true;
    } catch(e) {
        if (e.name === 'QuotaExceededError') {
                localStorage.clear();
                isLsAvailable = true;
        }
        else { isLsAvailable =  false; }
    }
}

$(document).ready(function(){

	ace.require("ace/ext/language_tools");
 /*     editor.setOptions({
                enableBasicAutocompletion: true,
                enableSnippets: true,
                enableLiveAutocompletion: true
        });
        //end
*/
        editor.$blockScrolling = Infinity;
        //disables vertical line in ace editor
        editor.setOption("showPrintMargin", false);

	//Test for LocalStorage
	lsTest();

        var previousTheme = localStorage.getItem('theme');
        if(previousTheme == "null")
                previousTheme = "Theme Light";
        editor.setTheme(themes[previousTheme]);

        $('.themes option:contains('+previousTheme+')').prop('selected', true);  //Select the already selected option

	$(".lang").click( function() {
		$(".lang").css( "background-color", "#46B96B" );
		$(this).css( "background-color", "green" );
		lang = $(this).attr('id');
		savedLang = $(this).attr('value');
	});

	$("#resetEditor").click( function() {
                editor.getSession().setValue('');
                $('#'+lang).click();
        });

	$('#c').on('click',function() {
		
		editor.getSession().setMode("ace/mode/c_cpp");
		var text = editor.getSession().getValue();
		if(clickCount++ == 1)
		{
		
			editorDefCode = text;
		}
			
		
		if( text === '' || text == defaultJava || text == defaultCPP || text == defaultC || text == defaultPython || text == editorDefCode ) {
			
			if(def_lang == "C(gcc 4.8.4)" || def_lang == "c")
			{
				editor.getSession().setValue(editorDefCode);
			}
	
			else{
			editor.getSession().setValue(defaultC);}
		}
		
	});

	$('#cpp').on('click',function() {
		editor.getSession().setMode("ace/mode/c_cpp");
		var text=editor.getSession().getValue();
		if(clickCount++ == 1)
		{
			editorDefCode = text;
		}
		if( text === '' || text == defaultJava || text == defaultCPP || text == defaultC || text == defaultPython || text == editorDefCode ) {
		
			if(def_lang == "C++(gcc 4.8.4)" || def_lang == "cpp")
			{
				 editor.getSession().setValue(editorDefCode);
			}

			else {
				editor.getSession().setValue(defaultCPP);
	          }		}
	});

	$('#java').on('click',function(){
	
		editor.getSession().setMode("ace/mode/java");
		var text = editor.getSession().getValue();
		//window.alert(text);
		if(clickCount++ == 1)
		{
			editorDefCode = text;
		}
	
		if( text === '' || text == defaultJava || text == defaultCPP || text == defaultC || text == defaultPython || text == editorDefCode ) {
			if(def_lang == "Java(Javac 1.7)" || def_lang == "java" )
			 { 
				editor.getSession().setValue(editorDefCode);
			 }
			
	
	         	else {
				editor.getSession().setValue(defaultJava);
			     }
		}
		
	});

	$('#python3').on('click',function(){
		editor.getSession().setMode("ace/mode/python");
		var text=editor.getSession().getValue();
		if(clickCount++ == 1)
		{
		 	editorDefCode = text;
		}
		if( text === '' || text == defaultJava || text == defaultCPP || text == defaultC || text == defaultPython || text == editorDefCode ){
			
			if(def_lang == "Python 3" || def_lang == "python")
			{
			  editor.getSession().setValue(editorDefCode);
			}
			else
			{
			  editor.getSession().setValue(defaultPython);
			}
		}
	});

	
	if( def_lang == "Java(Javac 1.7)" || def_lang == "java" || displayLanguage == "java")  { 
	$('#java').click(); }

	else if( def_lang == "C(gcc 4.8.4)" || def_lang == "c" || displayLanguage == "c"){ 
        $('#c').click(); }
 
	else if( def_lang == "C++(gcc 4.8.4)" || def_lang == "cpp" || displayLanguage == "cpp" || displayLanguage == "c++") { 
        $('#cpp').click();
	}
	
	else if( def_lang == "Python 3" || def_lang == "python" || def_lang== "python3" || displayLanguage == "python") {
        $('#python3').click(); }
	
	else
	$('#c').click(); // if default code is not set

	if( editor == null ) {
		return;
	}

	editor.focus();

	$(window).unload( function() {
	    if( isLsAvailable == true ){	
		//var pid = getQueryVariable("pid");
                var dataObject = {};
                var oldData = JSON.parse( localStorage.getItem( 'data' ) );
                var tempLang = lang;
                if( oldData !== null ){
                        for (var key in oldData) {
                                var code = oldData[key].code;
                                lang = oldData[key].lang;
                                dataObject[key] = { code , lang };
                        }
                }
                var code = editor.session.getValue();
                lang = tempLang;
                dataObject[pid]={code,lang};
                if(!(code === '' || code == defaultJava || code == defaultCPP || code == defaultC || code == defaultPython ))
                        localStorage.setItem( 'data', JSON.stringify(dataObject) );

                localStorage.setItem( 'theme', previousTheme );
	    } else {
		console.log("LocalStorage not available");
	    }
	});

	var norOps = {
		minLines: 25,
		maxLines: null,
		fontSize: "12pt"
	};


	editor.setOptions( norOps );


	function toggleFullScreen() {
		var elem = document.getElementById("editor");
		if (elem.requestFullscreen) {
		  elem.requestFullscreen();
		} else if (elem.msRequestFullscreen) {
		  elem.msRequestFullscreen();
		} else if (elem.mozRequestFullScreen) {
		  elem.mozRequestFullScreen();
		} else if (elem.webkitRequestFullscreen) {
		  elem.webkitRequestFullscreen();
		}

	}

 	$( "#full" ).click( function() {
                toggleFullScreen();
        });
	
	$(".themeLight").parent().change(function(oEvent){
		var selectedValue = $(".themeLight").parent().val();
		previousTheme = selectedValue;
		switch(selectedValue){
		case "Theme Light":
		editor.setTheme("ace/theme/chrome");
		break;
		case "Dark":
		editor.setTheme("ace/theme/vibrant_ink");
		break;
		case "Monokai":
		editor.setTheme("ace/theme/monokai");
		break;
		case "GeeksforGeeks":
		editor.setTheme("ace/theme/gfg");
		break;
		}
	});

	var text = editor.session.getValue();
	var data = JSON.parse(localStorage.getItem( 'data' ));

        var storedCode = false;
        if( data !=null && data[pid] != null ){
                storedCode = data[pid].code;

        }

        if( storedCode ) {
                 if( text === '' || text == defaultJava || text == defaultCPP || text == defaultC || text == defaultPython || isDefaultCode == '1'  ) {
                        editor.session.setValue( storedCode );
                        language = data[pid].lang;
                        $('#'+language).click();
                }
        }

});

//TLE 11, RunTime Error 12 , Compiler Error 13
	var erroneousLine;

	$(document).ready(function () {

			function unhighlightError(){
				var i
				for(i=0; i < 1000 ;i++){
				  editor.getSession().removeMarker(i);
	  			}

	}

	function highlightError(lineNumber) {
	  
	  var Range = ace.require("ace/range").Range
	  erroneousLine = editor.session.addMarker(new Range(lineNumber, 0, lineNumber, 144), "errorHighlight", "fullLine");
	}

	function highlightEditorErrors(cmpErrorText) {

			var indices = [];
						var pattern = "error";
						var strLenght=cmpErrorText.length;
						var j;	
						for(var i=0; i<strLenght-5;i++) {	
							for( j=0;j<5;j++){
								if(cmpErrorText[i+j] != pattern[j])
									break;
							}

							if(j==5){
								var colon=0,k=i-3;
								while(k >= 0){
									if(cmpErrorText[k] == ':'){
										k=k-1;
										break;
									}
										
									k=k-1;
								}

								var len=0;
								while(k >= 0){
									if(cmpErrorText[k] < '0' || cmpErrorText[k] > '9'){
										break;
									}

									len=len+1;
									k=k-1;
								}
								var num = 0;
								for(var x=k+1; x<(k+1+len) ;x++){
									num=num*10 + cmpErrorText.charCodeAt(x) -48;
								}
								indices.push(num);	
							}
								
						}
						
						for(var j=0 ; j<indices.length ; j++){
							highlightError(indices[j] - 1);
						}
		}
		
		$('#save').on('click',function(){ 
		$.ajax({
	            type:"GET",
       	            url:"/ajax/savesolution.php",
        	    data:{pid:pid ,userid:userid,code:editor.getSession().getValue(),lang:savedLang},
                    success:function(data){
			alert(data);
		    }
		      });
   		});
		

		$("#run").click(function() {
			$(this).attr( "disabled", "disabled" );
			$( ".out pre" ).text( 'Evaluating...' );
			var isCorrect=0;
			$.ajax({
				type: "POST",
				url: '/ajax/solutionChecking.php',
				data: { lang: lang, code: editor.getSession().getValue(), pid:  pid },
				success: function( data ) {
					unhighlightError();
					console.log( data.output );
					console.log( data );
					$(".out pre").text(' ');
					 $( ".out pre" ).append( data);
					var pattern = /Correct Answer/;
					var result = pattern.test(data);
					if(!result)
					{
					   $( ".out pre" ).append('<input class="btn btn-primary Help" value="Need Help ?" style="width:14%"></input>');
					}

					$('.Help').click(function() 
					{
                                           this.disabled=true;
                			   $(".out pre").append('<br><ul><li>Generate URL of your code using <a href="http://ide.geeksforgeeks.org">ide.geeksforgeeks.org</a> and share in comments.</li>'+"<h4>OR</h4><li>View Accepted  <a href='/problem_submissions.php?pid="+pid+"'>Solutions.</a></li>");
        				});
				
				},
				error: function(jqXHR, exception, errorThrown) {	
				   //   $( ".out pre" ).text( 'Error: Code Length Exceeded\nPlease reduce code length and Try again' );
					$( ".out pre" ).text( 'Error / Run TimeError.\n Try again' );
					$( ".err" ).show().delay(5000).slideUp(200, function() {
						$(this).hide();
					});
				},
				complete: function() {
					$("#run").removeAttr( "disabled" );
				}
			});
			return false;
		});

			
		$("#contest_submit").click(function() {
			$(this).attr( "disabled", "disabled" );
			$( ".out pre" ).text( 'Evaluating...' );
			var isCorrect=0;
			$.ajax({
				type: "POST",
				url: '/ajax/contest_submit.php',
				data: { lang: lang, code: editor.getSession().getValue(), input:  pid },
				dataType: "json",
				success: function( data ) {
					unhighlightError();
					console.log( data );
					$(".out pre").text(' ');
					if( data.rntError != "" && data.rntError != null ) {
						isCorrect=12;
						$( ".out pre" ).text( 'Run Time Error:\n'+data.rntError );
					}
					else if( data.cmpError != "" && data.cmpError != null  ) {
						isCorrect=13;
						$( ".out pre" ).text( 'Compilation Error:\n'+data.cmpError );
						highlightEditorErrors(data.cmpError);
						
					}
					else if( data.output != "" && data.output != null ) {
						isCorrect=1;
					}
					else {
						isCorrect=11;
					}
						$.ajax({
							type: "POST",
							url: "/ajax/contest_solutionChecking.php",
							data: { userOutput: data.output, input: pid, code: editor.getSession().getValue(), isCorrect: isCorrect, lang: lang , time: data.time},
							success: function(data) {
								var opLen=data.length;
								var i=0;
								for(i=0 ; i<opLen ;i++){
									if(data[i] == '~'){
										$( ".out pre" ).append( '\n' );
									}else{
										$( ".out pre" ).append( data[i] );
									}
								}
								//$( ".out pre" ).append( data);
								if(data=='Correct')
									$( ".out pre" ).append('\n'+'<img style="position: relative; top: 2px; left: 5px; height: 27px; margin-right:10px;" src="' + window.urlCdn + '/images/right.png" border="0" title="Correct Answer" alt="Correct Answer">');
								else if(data=='Time Limit Exceeded')
									$( ".out pre" ).append('\n'+'<img style="position: relative; top: 2px; left: 5px; height: 27px; margin-right:10px;" src="' + window.urlCdn + '/images/tle.png" border="0" title="Time Limit Exceeded" alt="Time Limit Exceeded">');
								else if (data=='Compiler Error')
									$( ".out pre" ).append('\n'+'<img style="position: relative; top: 2px; left: 5px; height: 27px; margin-right:10px;" src="' + window.urlCdn + '/images/cmp.gif" border="0" title="Compilation Error" alt="Compilation Error">');
								else
									$( ".out pre" ).append('\n'+'<img style="position: relative; top: 2px; left: 5px; height: 27px; margin-right:10px;" src="' + window.urlCdn + '/images/wrong.png" border="0" title="Wrong Answer" alt="Wrong Answer">');

							},
							error: function(xhr, ajaxOptions, thrownError) {}
						});
				
				},
				error: function(jqXHR, exception, errorThrown) {	
				   //   $( ".out pre" ).text( 'Error: Code Length Exceeded\nPlease reduce code length and Try again' );
					$( ".out pre" ).text( 'Error / Run TimeError.\n Try again' );
					$( ".err" ).show().delay(5000).slideUp(200, function() {
						$(this).hide();
					});
				},
				complete: function() {
					$("#contest_submit").removeAttr( "disabled" );
				}
			});
			return false;
		});

		$("#contest_testRun").click(function() {
			$(this).attr( "disabled", "disabled" );
			var input=document.getElementById("testarea").elements[0].value;
			
			$( ".out pre" ).text( 'Evaluating....' );

			$.ajax({
				type: "POST",
				url: '/ajax/contest_testRun.php',
				data: { lang: lang, code: editor.getSession().getValue(), input:  input  },
				dataType: "json",
				success: function( data ) {
					unhighlightError();
					if( data.rntError != "" && data.rntError != null ) {
					
						$( ".out pre" ).text( 'Run Time Error\n'+data.rntError );
					}
					else if( data.cmpError != "" && data.cmpError != null  ) {
						$( ".out pre" ).text( 'Compilation Error... \n'+data.cmpError );
						
						/* Highliting editor where compilation error */
					
						highlightEditorErrors(data.cmpError);

						//var cmpErrorText = data.cmpError;
				
						$( ".out pre" ).append('\n'+'<img style="position: relative; top: 2px; left: 5px; height: 27px; margin-right:10px;" src="' + window.urlCdn + '/images/cmp.gif" border="0" title="Compilation Error" alt="Compilation Error">');
					}
					else if( data.output != "" && data.output != null ) {
						$( ".out pre" ).text( data.output );
					} else {
						$( ".out pre" ).text( 'Time Limit Exceeded (ide)' );
						$( ".out pre" ).append('\n'+'<img style="position: relative; top: 2px; left: 5px; height: 27px; margin-right:10px;" src="' + window.urlCdn + '/images/tle.png" border="0" title="Time Limit Exceeded" alt="Time Limit Exceeded">');
					}
				},
				error: function(jqXHR, exception, errorThrown) {
						//$( ".out pre" ).text( 'Error: Code Length Exceeded\nPlease reduce code length and Try again' );
						$( ".out pre" ).text( 'Error / Run TimeError.\n Try again' );
						$( ".err" ).show().delay(5000).slideUp(200, function() {
						$(this).hide();
					});
				},
				complete: function() {
					$("#contest_testRun").removeAttr( "disabled" );
				}
			});
			return false;
		});

		$("#test").click(function() {
			$('#expectedArea').hide();
			$('#testarea').show();
		});
		
		$("#testRun").click(function() {
			$(this).attr( "disabled", "disabled" );
			var input=document.getElementById("testarea").elements[0].value;
			
			$( ".out pre" ).text( 'Evaluating....' );

			$.ajax({
				type: "POST",
				url: '/ajax/testRun.php',
				data: { lang: lang, code: editor.getSession().getValue(), input:  input  },
				dataType: "json",
				success: function( data ) {
					unhighlightError();
					if( data.rntError != "" && data.rntError != null ) {
					
						$( ".out pre" ).text( 'Run Time Error\n'+data.rntError );
					}
					else if( data.cmpError != "" && data.cmpError != null  ) {
						$( ".out pre" ).text( 'Compilation Error... \n'+data.cmpError );
						
						/* Highliting editor where compilation error */
					
						highlightEditorErrors(data.cmpError);

						//var cmpErrorText = data.cmpError;
				
						$( ".out pre" ).append('\n'+'<img style="position: relative; top: 2px; left: 5px; height: 27px; margin-right:10px;" src="' + window.urlCdn + '/images/cmp.gif" border="0" title="Compilation Error" alt="Compilation Error">');
					}
					else if( data.output != "" && data.output != null ) {
						$( ".out pre" ).text( data.output );
					} else {
						$( ".out pre" ).text( 'Time Limit Exceeded (ide)' );
						$( ".out pre" ).append('\n'+'<img style="position: relative; top: 2px; left: 5px; height: 27px; margin-right:10px;" src="' + window.urlCdn + '/images/tle.png" border="0" title="Time Limit Exceeded" alt="Time Limit Exceeded">');
					}
				},
				error: function(jqXHR, exception, errorThrown) {
						//$( ".out pre" ).text( 'Error: Code Length Exceeded\nPlease reduce code length and Try again' );
						$( ".out pre" ).text( 'Error / Run TimeError.\n Try again' );
						$( ".err" ).show().delay(5000).slideUp(200, function() {
						$(this).hide();
					});
				},
				complete: function() {
					$("#testRun").removeAttr( "disabled" );
				}
			});
			return false;
		});
		$("#expectedOutcome").click(function() {
			$('#testarea').hide();
			$('#expectedArea').show();
		});
		$("#expectedRun").click(function() {
			$(this).attr( "disabled", "disabled" );
			var input=document.getElementById("expectedArea").elements[0].value;
			$( ".out pre" ).text( 'Evaluating.....' );

			$.ajax({
				type: "POST",
				url: '/ajax/expectedOutcome.php',
				data: { input:  input, pid: pid  },
				dataType: "json",
				success: function( data ) {

					if( data.rntError != "" && data.rntError != null ) {
						$( ".out pre" ).text( 'Run Time Error\n'+data.rntError );
					}
					else if( data.cmpError != "" && data.cmpError != null  ) {
						$( ".out pre" ).text( 'Compilation Error \n'+data.cmpError );
					}
					else if( data.output != "" && data.output != null ) {
						$( ".out pre" ).text( data.output );
					} else {
						$( ".out pre" ).text( 'Time Limit Exceeded (ide) / Wrong Inputs' );
					}
				},
				error: function(jqXHR, exception, errorThrown) {
					$( ".err" ).show().delay(5000).slideUp(200, function() {
						$(this).hide();
					});
				},
				complete: function() {
					$("#expectedRun").removeAttr( "disabled" );
				}
			});
			return false;
		});
	});


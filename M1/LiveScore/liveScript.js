function loadDoc() { // Collect data from the XML file
    var xmlhttp = new XMLHttpRequest();
    xmlhttp.onreadystatechange = function() {
        if (this.readyState == 4 && this.status == 200) {
            myFunction(this);
        }
    };
    xmlhttp.open("GET", "./Score.xml"); 
    xmlhttp.send();
}

function myFunction(xml) {
    const xmlDoc = xml.responseXML;
    const y = xmlDoc.getElementsByTagName("game");
    let scores="<h2>NFL</h2>";
    for (let i = 0; i <y.length; i++) { 
        let time = y[i].getElementsByTagName("time")[0].childNodes[0].nodeValue;
        //Team1 stats
        let team1 = y[i].getElementsByTagName("team1")[0].childNodes[0].nodeValue;
        let rslt11 = y[i].getElementsByTagName("rslt11")[0].childNodes[0].nodeValue;
        let rslt12 = y[i].getElementsByTagName("rslt21")[0].childNodes[0].nodeValue;
        let rslt13 = y[i].getElementsByTagName("rslt31")[0].childNodes[0].nodeValue;
        let rslt14 = y[i].getElementsByTagName("rslt41")[0].childNodes[0].nodeValue;
        let rslt1 = parseInt(rslt11)+parseInt(rslt12)+parseInt(rslt13)+parseInt(rslt14);
        //Team2 stats
        let team2 = y[i].getElementsByTagName("team2")[0].childNodes[0].nodeValue;
        let rslt21 = y[i].getElementsByTagName("rslt12")[0].childNodes[0].nodeValue;
        let rslt22 = y[i].getElementsByTagName("rslt22")[0].childNodes[0].nodeValue;
        let rslt23 = y[i].getElementsByTagName("rslt32")[0].childNodes[0].nodeValue;
        let rslt24 = y[i].getElementsByTagName("rslt42")[0].childNodes[0].nodeValue;
        let rslt2 = parseInt(rslt21)+parseInt(rslt22)+parseInt(rslt23)+parseInt(rslt24);
        
        // Determine Winner/Loser if the match ended
        let color1;
        let color2;
        if(time === "Terminé" && rslt1 > rslt2) {
            color1 = "green";
            color2 = "red";
        }
        else if(time === "Terminé" && rslt1 < rslt2) {
            color1 = "red";
            color2 = "green";
        }
        
        // Insert matches score
        scores += "<div class='match'>" + 
            "<p class='mTime bold'>" + time + "</p>" +
            "<div class='team1'>" + 
                "<p class='tName bold " + color1 + "'>" + team1 + "</p>" +
                "<div class='mScore'>" + 
                    "<p>"+rslt11+"</p><p>"+rslt12+"</p><p>"+rslt13+"</p><p>"+rslt14+"</p><p class=" + color1 + "><b>"+rslt1+"</b></p>" + 
                "</div>" +
            "</div>" +
            "<div class='team2'>" +
                "<p class='tName bold " + color2 + "'>" + team2 + "</p>" +
                "<div class='mScore'>" +
                    "<p>"+rslt21+"</p><p>"+rslt22+"</p><p>"+rslt23+"</p><p>"+rslt24+"</p><p class=" + color2 + "><b>"+rslt2+"</b></p>" +
                "</div>" +
            "</div>" +
        "</div>";
    }
    document.getElementById("liveScore").innerHTML = scores;

    // Insert actualities
    const x = xmlDoc.getElementsByTagName("actu");
    let actu = "<h2>Actualités</h2>";
    for (i = 0; i < x.length; i++) {
        let inf = x[i].getElementsByTagName("info")[0].childNodes[0].nodeValue;
        actu += "<p>" + inf + "</p>";
    }
    document.getElementById("actu").innerHTML = actu;
}

// loadDoc(); // This desactivates refreshing for testing

setInterval(loadDoc, 1000); // Refresh every 1sec
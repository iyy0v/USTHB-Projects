// Elements
const quiz = document.getElementById("quiz");

// Declarations
const allQuestions = [
    [
        "En quelle année la première passe complétée a t-elle eu lieu ?",
        "1906",
        ["1869","1654","1906","1921"]
    ],
    [
        "En quelle année la NFL se met-elle en place ?",
        "1920",
        ["1919","1920","1921","1922"]
    ],
    [
        "En quelle année est créée la fédération de football Américain ?",
        "1998",
        ["1938","1958","1978","1998"]
    ],
    [
        "Combien de points vaut le touchdown ?",
        "6",
        ["4","5","6","7"]
    ],
    [
        "Combien de points vaut le safety ?",
        "2",
        ["1","2","3","4"]
    ],
    [
        "Combien il y a-t-il de joueurs sur le terrain ?",
        "11",
        ["11","13","15","17"]
    ],
    [
        "Comment s´appelle la finale du championnat ?",
        "Super bowl",
        ["Finale du championnat","Super bowl","Magic bowl","Champions bowl"]
    ],
    [
        "Comment s´appelle la ligue de football Américain européenne ?",
        "NFL Europa",
        ["NFL Europe","NFL Europa","NFLE","NFLEU"]
    ],
    [
        "Les zones d’en-but de chaque côté du terrain font ___ yards chacune.",
        "10 yards",
        ["50 yards","10 yards","200 yards","30 yards"]
    ],
    [
        "Combien d’arbitres sur le terrain  ?",
        "7",
        ["1","3","4","7"]
    ],
    [
        "De quelle ville viennent les champions de France 2008 ?",
        "La Courneuve",
        ["Elancourt","La Courneuve","Nice","Marseille"]

    ],
    [
        "Qu’est-ce que le 'sack' ?",
        "Un type de plaquage",
        ["Un sac","Un type de plaquage","Un equipement du sport","Une boisson energetique"]
    ],
    [
        "Qu’est-ce que 'spearing' ?",
        "Un tacle non conforme ",
        ["Un tacle non conforme ","Une tactique d'attaque","Une mort sur le terrain","Une serie de buts"]
    ],
    [
        "Que signifie la montée d’un drapeau rouge dans un jeu NFL  ?",
        "Un coach remet en question la décision d’un arbitre",
        ["Un joueur est éjecté du jeu","Un coach remet en question la décision d’un arbitre","Une blessure","Fin du match"]
    ]
];
let questions;
let answer;
let userAnswers;
let score;
let i;

// function to randomize the questions
function shuffle(array) {
    let currentIndex = array.length,  randomIndex;
  
    while (currentIndex != 0) {
      randomIndex = Math.floor(Math.random() * currentIndex);
      currentIndex--;
  
      [array[currentIndex], array[randomIndex]] = [array[randomIndex], array[currentIndex]];
    }
    return array;
}

function startQuiz() {  // Start the quiz
    questions = shuffle(allQuestions).slice(0,10); // slice second argument = how many questions to take
    console.log(questions);
    userAnswers = [];
    score = 0;
    i = 0;
    // Delete old content
    quiz.children.length ? quiz.removeChild(quiz.children[0]) : "";
    // Generate new elements
    let container = document.createElement("div");
    
    container.innerHTML = '<p class="grey bold">Bienvenue dans la rubrique <span class="blue bold">Quiz</span>.</p>';
    container.innerHTML += '<p class="grey bold center">Vous serez évalué selon quelques questions sur le <span class="blue bold">football américain</span>.</p>';
    let startBtn = document.createElement("button");
    startBtn.setAttribute("type","button");
    startBtn.innerText = "Lancer";
    startBtn.className = "btn blueBtn whiteHover pointer";
    startBtn.addEventListener("click",renderQuiz);
    container.appendChild(startBtn);

    // Insert new content
    quiz.appendChild(container);
}

function renderQuiz() {   // Display question
    answer = "";
    // Delete old content
    quiz.children.length ? quiz.removeChild(quiz.children[0]) : "";
    
    // Generate new content
    let container = document.createElement("div");
    let legend = document.createElement("legend");
    legend.innerText = "Question " + (i+1);
    legend.className = "qstTitle red";
    container.appendChild(legend);
    let question = document.createElement("p");
    question.className = "qst grey";
    question.innerText = questions[i][0];
    container.appendChild(question);
    const answers = [];
    for(let j in questions[i][2]) {
        answers[j] = document.createElement("input");
        answers[j].className = "btn whiteBtn blueHover pointer";
        answers[j].setAttribute("type","button");
        answers[j].setAttribute("value",String.fromCharCode('A'.charCodeAt() + parseInt(j)) + ". " + questions[i][2][j]);
        answers[j].addEventListener("click",checkAnswer);
        container.appendChild(answers[j]);
    }
    // insert new content
    quiz.appendChild(container);
}

function checkAnswer() { // Check recent answer
    answer = this.value.split(". ")[1];
    if(answer === questions[i][1]) score++;
    userAnswers[i] = [
        questions[i][0],
        questions[i][1],
        answer
    ];
    i++;
    if(i<10) renderQuiz();  // Display next question 
    else showResult();      // Display result
}

function showResult() { // Show the result
    // Delete content
    quiz.children.length ? quiz.removeChild(quiz.children[0]) : "";

    // Insert new elements
    let container = document.createElement("div");
    
    let h2 = document.createElement("h2");
    h2.innerText = "Votre score :";
    h2.className = "blue";
    container.appendChild(h2);
    let pScore = document.createElement("p");
    pScore.innerText =  score + " / " + questions.length;
    pScore.className = "btn blueBtn";
    container.appendChild(pScore);
    let hr = document.createElement("hr");
    container.appendChild(hr);
    let res = document.createElement("h2");
    res.innerText = "Vos reponses :";
    res.className = "m20 blue";
    container.appendChild(res);
    let stats = document.createElement("div");
    stats.setAttribute("id","stats");
    let tempDiv;
    let tempP;
    let temp;
    // Show questions/answers
    for(let j=0; j<userAnswers.length; j++) {
        tempDiv = document.createElement("div");
        tempDiv.className = "stat";
        
        tempP = document.createElement("p");
        tempP.className = "m10";
        temp = document.createElement("span");
        temp.className = "bold";
        temp.innerText = "Question " + (j + 1);
        tempP.appendChild(temp);
        temp = document.createTextNode(" : " + userAnswers[j][0])
        tempP.appendChild(temp);
        tempDiv.appendChild(tempP);
        
        tempP = document.createElement("p");
        temp = document.createTextNode("Votre réponse : ");
        tempP.appendChild(temp);
        temp = document.createElement("span");
        temp.innerText = userAnswers[j][2];
        if(userAnswers[j][2] === userAnswers[j][1]) {
            temp.className = "green";
            tempP.appendChild(temp);
        }
        else {
            temp.className = "red";
            tempP.appendChild(temp);
            tempDiv.appendChild(tempP);

            tempP = document.createElement("p");
            temp = document.createTextNode("Réponse correcte : ");
            tempP.appendChild(temp);
            temp = document.createElement("span");
            temp.innerText = userAnswers[j][1];
            temp.className = "green";
            tempP.appendChild(temp); 
        }
        tempDiv.appendChild(tempP);
        stats.appendChild(tempDiv); 
        
        if(j !== userAnswers.length - 1) {
            temp = document.createElement("div");
            temp.className = "bullet";
            stats.appendChild(temp);
        }
    }
    container.appendChild(stats);
    
    let restartBtn = document.createElement("button");
    restartBtn.setAttribute("type","button");
    restartBtn.innerText = "Retour";
    restartBtn.className = "btn blueBtn whiteHover pointer";
    restartBtn.addEventListener("click",startQuiz);
    container.appendChild(restartBtn);

    // Insert new content
    quiz.appendChild(container);
}

// Execution
startQuiz();

console.log("Quiz script executed correctly.");

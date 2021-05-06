//gli span sono in line, le div sono dei blocchi che
//permettono di scrivere
// su più righe


function Persona(nome, cognome) {
    // È un array associativo
    this.nome = nome;
    this.cognome = cognome;
    this.completo = function() {
        return this.nome + " " + this.cognome;
    }
}
var persone=[new Persona("mario", "rossi")];

function aggiungiPersona(){
    var txtNome=document.getElementById("txtNome");
    var txtCognome=document.getElementById("txtCognome");
    if (txtNome.value=="") {
        alert("Il nome non può essere vuoto!");
        return;
    }
    if (txtCognome.value=="") {
        alert("Il cognome non può essere vuoto!");
        return;
    }
    persone.push(new Persona(txtNome.value,txtCognome.value));
    disegnaElenco();
    /*for (var i=0; i<persone.length; i++){
        console.log(i + " - " + persone[i].nome.value + " " + persone[i].cognome.value);

    }
    */
}

function rimuoviPersona(i){
   for(var k=i; k<persone.length-1; k++){
       persone[k] = persone[k+1];
   }
   persone.length--;
   disegnaElenco();
}



function mostraDettagli(i){
    var divDettagli = document.getElementById("dettagli");
    
}

function disegnaElenco(){
    var ulPersone = document.getElementById("persone");
    ulPersone.innerText="";
    for (var i=0; i<persone.length; i++){
        ulPersone.innerHTML +=
            "<li>" + persone[i].completo() + "(" +
            '<input type="button" value="Dettagli">' +
            '<input type="button" value="Elimina" onClick="rimuoviPersona('+i+')">' +
            ")</li>"
    }
}


/*
1.Implementare una funzione che disegna all'interno del
div #elenco TUTTE le persone contenute nell'array persone
2.Gestire l'evento del click su "Aggiungi persona" il
quale aggiunge alla'array persone un oggeto persona
 */
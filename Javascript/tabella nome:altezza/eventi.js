// Gestione eventi

function Persona(nome, altezza){
	this.nome = nome;
	this.altezza = altezza;
}

// Creo array
persone = [];

function aggiungiRiga(){

	var txtNome = document.getElementById("txtNome");
	var txtAltezza = document.getElementById("txtAltezza");

	var nome = txtNome.value;

	// Controllo se vuoto
	if(nome == ""){
		alert("Nome vuoto!");
		return;
	}

	var altezza = parseFloat(txtAltezza.value);

	// Controllo se positivo
	if(altezza<0){
		alert("Altezza negativa!");
		return;
	}

	// Inserisco elementi dentro l'array
	persone.push(new Persona(nome,altezza));
	// Eseguo visualizza
	visualizzaPersone();

}

function visualizzaPersone(){
	var tblPersone = document.getElementById("tblPersone");

	// Creo intestazione tabella
	tblPersone.innerHTML = 
		"<tr><th>Nome</th><th>Altezza</th></tr>";

	// Per ogni elemento nell'array inserisco una riga
	for(var k = 0; k<persone.length; k++){

		tblPersone.innerHTML += // concateno
		"<tr><td>"+ persone[k].nome + "</td><td>" + persone[k].altezza + "</td></tr>";;

	}

}

// Rimuovere le persone sotto 1,50 di altezza
function rimuovi(){

	var j = 0;

	// Per ogni elemento controllo la condizione
	// Se è idoneo, copio elemento in J

	for(var i = 0; i<persone.length; i++){
		if(persone[i].altezza > 1.5) {
			persone[j++] = persone[i];
		}
	}
	// Aggiorno array con valori nuovi messi in J
	persone.length = j;

	// Visualizzo
	visualizzaPersone();
}

// gestire ordine in base ai valori
function ordina(){

	for (var i = 0; i<persone.length; i++){
		var minimoFinOra = i; 

		for(var j=i+1; j<persone.length; j++){

			if(persone[j].altezza<persone[minimoFinOra].altezza){

				minimoFinOra = j;
			}
		}
		// Salvo il valore minimo
		var tmp = persone[i];
		persone[i] = persone[minimoFinOra];
		persone[minimoFinOra] = tmp;
	}
	//Visualizzo
	visualizzaPersone();
}

function mostra180(){
	// Dichiaro risultato da inserire in span
	var risultato = "Persone con altezza maggiore di 1.8m: ";
	var spanRisultato = document.getElementById("risultato");

	// Itero elementi
	for(var i = 0; i<persone.length; i++){

		if(persone[i].altezza > 1.8){
			// Se + 1.80 concateno in risultato
			risultato = risultato + persone[i].nome + " (" 
			+ persone[i].altezza + ")" + " ";
		}

	}
	// Stampa la lista nello span
	spanRisultato.innerHTML = risultato;


}



// File JS per la gestione degli eventi:

var totale = 0;

function gestisciAggiungi() {

	var txtNumero = document.getElementById("txtNumero");
	var risultato = document.getElementById("risultato");

	if(txtNumero.value == ""){
		return;
	}

	var attuale = parseFloat(txtNumero.value);
	txtNumero.value = "";

	totale = totale + attuale;
	risultato.innerHTML = totale;

}

function reset(){
	var txtNumero = document.getElementById("txtNumero");
	var risultato = document.getElementById("risultato");
	reset = 0;
	risultato.innerHTML = reset;

}

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

function cambiaTesto() {

	paragrafi = document.getElementsByClassName("mioparagrafo");
	// paragrafi è una lista di oggetti grafici
	// per accedere ai singoli elementi devo usare un for.

	for(var k = 0; k < paragrafi.length; k++){
		paragrafi[k].innerHTML = "Paragrafo aggiunto";
	}		
}

function mostraCombo() {

	var cmbRuolo = document.getElementById("cmbRuolo");
	alert(cmbRuolo.value);
}


var nome_input

function gestisciAggiungi() {

	var txtNome = document.getElementById("txtNome");
	var ruolo = document.getElementById("cmbRuolo");
	var assenza = document.getElementById("rdbAssenteSi");
	var presenza = document.getElementById("rdbAssenteNo");

	if(txtNome.value == ""){
		return;
	}
	
	var nome_input = txtNome.value;

	txtNome.value = "";
	return nome_input;

}

function aggiungiElemento() {
	
	paragrafi = document.getElementsByClassName("paragrafoAggiunto");

	for(var k = 0; k < paragrafi.length; k++){
		paragrafi[k].innerHTML = '<td>Nome </td><td>ruolo</td><td>assenza</td><td><input type="text" id="txtPunteggio"></td>';

	}		
}

function mostraCombo() {

	var cmbRuolo = document.getElementById("cmbRuolo");
	alert(cmbRuolo.value);
}
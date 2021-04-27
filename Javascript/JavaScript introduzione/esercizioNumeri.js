
// Prendere in input un numero N e calcolare la somma 
// di questi N numeri.

var n;
var attuale;
var somma = 0;

do {
	n = prompt("Inserisci la quantità di numeri: ");
	n= parseInt(n); // conversione in INT

} while (n < 0);


for(var i = 0; i < n; i++) {

	attuale = parseFloat(prompt("Inserisci un numero... "));
	somma = somma + attuale;
}

alert("La somma vale " + somma);
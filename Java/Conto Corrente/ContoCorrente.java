public class ContoCorrente {

	private float saldo;

	ContoCorrente(float saldo) throws Exception{
		if(saldo < 0){  // Gestione eccezione 
			throw new Exception("Saldo negativo!");
		}
		this.saldo = saldo;
	}

	public void deposita(float input){  // Incremento del saldo
		saldo = saldo + input;
	}

	public void stampa(){  // Stampa del saldo
		System.out.println("Saldo attuale: " + saldo);
	}

}


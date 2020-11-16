public class ContoCorrente {

	private float saldo;

	ContoCorrente(float saldo) throws Exception{
		if(saldo < 0){
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

    public static void main(String[] args) throws Exception{

        ContoCorrente cc;
        cc = new ContoCorrente(saldo: 100); // Inizializza saldo a 100
        cc.stampa(); // Stampa
        cc.deposita(100); // Deposita 100
        cc.stampa();
    }

}


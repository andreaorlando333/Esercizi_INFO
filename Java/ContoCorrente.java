public class ContoCorrente {

	private float saldo;

	ContoCorrente(float saldo){
		this.saldo = saldo;
	}

	public void deposita(float input){ 
		saldo = saldo + input;
	}

	public void stampa(){
		System.out.println("Saldo attuale: " + saldo);
	}

    public static void main(String[] args){

        ContoCorrente cc;
        cc = new ContoCorrente(saldo: 100); // Inizializza saldo a 100
        cc.stampa(); // Stampa
        cc.deposita(100); // Deposita 100
        cc.stampa();
    }

}


public class Massimo {

	private int numMax;
	private boolean almenoUno;

	Massimo(int numMax){
		this.numMax = numMax;
		this.almenoUno = true;
	}
	Massimo() { this.almenoUno = false; }
	public int getNumMax() throws Exception {

		if(!almenoUno) {
			throw new Exception("Non hai inserito numeri.");
		}
		return numMax;
	}

	public void nuovoNum(int num) {

		if(almenoUno){
			if(num>numMax){
				this.numMax = num;
			}
		}
		else{
			this.almenoUno = true;
			this.numMax = num;
		}
	}
}
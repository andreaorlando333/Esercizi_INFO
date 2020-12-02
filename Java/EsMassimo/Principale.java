public class Principale {
	
	private CLInput cli;


	public static void main(string[]args) {

		Massimo m;
		m = new Massimo();
		try{
			m.nuovoNum(4);
			m.nuovoNum(42);
			System.out.println(m.getNumMax());
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
	}

}
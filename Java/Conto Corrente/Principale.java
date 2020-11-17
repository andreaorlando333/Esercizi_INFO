import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Principale {

	    public static void main(String[] args){

        ContoCorrente cc;
        try {

        	cc = new ContoCorrente(saldo: -100);

        	 cc.stampa(); // Stampa
        	 cc.deposita(100); // Deposita 100
        	 cc.stampa();

        } catch (Exception e){

        	System.out.println("Il saldo deve essere positivo.")
        }
        
       
    }

}

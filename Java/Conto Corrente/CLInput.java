import java.io.InputStreamReader;
import java.io.IOException;
import java.io.BufferedReader;

public class CLIinput {

	private BufferedReader br;

	CLIinput(){

	InputStreamReader isr = new InputStreamReader(System.in);
        this.br = new BufferedReader(isr);
        
	}

	public String readString(String prompt){
		String ris = null;
		while(ris == null) {

			try{
				return br.readLine();

			} catch (IOException e){
				e.printStackTrace();
			}

		}
		
	return ris;
	}
}

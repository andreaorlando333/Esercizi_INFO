import java.io.InputStreamReader;
import java.io.BufferedReader;

public class CLIinput {

	private BufferedReader br;

	CLIinput(){

		InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        
	}

	public String readString(String prompt){
		System.out.print(prompt);
		while() {

			try{
				return br.readLine();

			} catch (IOException e){
				e.printStackTrace();
			}

		}
	}
}
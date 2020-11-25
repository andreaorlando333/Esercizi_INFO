public class Principale {

    private Temperatura t;
    private CLInput cli;


    public Principale() {

        cli = new CLInput();
    }

    public void leggi() {

        float gradiC;

        do {
            gradiC = cli.readChar("inserire la temperatura in Gradi C");

            this.t = new Temperatura(gradiC);


        } while (t == null);
    }

    public float svolgi() {
        float ris  ;
        float  gradiC = t.getGradiC();
        ris = 32 +(9*(gradiC/5));



        return ris;
    }

    public static void main(String[] args) throws Exception {
        float gradif;
        Principale p;
        p = new Principale();
        p.svolgi();
        gradif = p.svolgi();

        System.out.println("temperatura in Fahrenheit" + gradif);




    }
}


public class FiguraTest {
    public static void main(String args[]){
        FiguraGeometrica figura = new FiguraGeometrica(3);
        int numLati = figura.getNumeroLati(); // get

        System.out.println("Numero lati: " +numLati); //
        figura.setNumeroLati(4); // set 4
        numLati = figura.getNumeroLati();
        System.out.println("Nuovo numero lati: "+ numLati);
        System.out.println(figura);

        // senza utilizzare la variabile intermedia numLati
        System.out.println("Nuovo numero lati: " +figura.getNumeroLati());

        // assegna e stampa un numero di lati incrementali fino ad 8
        for(int i = figura.getNumeroLati(); i<9; i++){
            figura.setNumeroLati(i);
            System.out.println(figura.getNumeroLati());
            
            // System.out.println(figura);
        }
    }
}

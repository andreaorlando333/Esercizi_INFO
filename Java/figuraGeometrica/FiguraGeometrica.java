
public class FiguraGeometrica {
    private int numeroLati;

    public FiguraGeometrica(int numeroLati){
        this.numeroLati = numeroLati;
    }

    public int getNumeroLati(){
        return this.numeroLati;
    }

    public void setNumeroLati(int n){
        this.numeroLati = n;
    }

    @Override   //annotation
    public String toString(){
        return "Figura geometrica {numeroLati: "+this.numeroLati+"}";
    }

}

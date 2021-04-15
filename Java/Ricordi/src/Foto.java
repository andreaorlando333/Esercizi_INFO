public class Foto implements Ricordo{
    private String descrizione;
    private final static int TEMPO=30;
    Foto(String descrizione){
        this.descrizione=descrizione;
    }

    @Override
    public int tempo() {
        return TEMPO;
    }

    public String getDescrizione(){
        return descrizione;
    }
}

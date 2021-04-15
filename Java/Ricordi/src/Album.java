public class Album {
    private int max;
    private int quanti;
    private Ricordo []ricordi;
    Album(int max){
        this.max=max;
        this.quanti=0;
        this.ricordi = new Ricordo[max];
    }
    public void aggiungiRicordo(int pos,Ricordo r) throws Exception {
        if (r==null){
            throw new Exception("ricordo nullo");
        }
        if (pos<0){
            throw new EccezionePosNonValida();
        }
        if (pos<quanti){
            for (int i=pos;i<quanti; i++){
                ricordi[i+1]=ricordi[i];
            }
        }
        ricordi[pos]=r;
        quanti++;
    }

    public int attenzioneMedia(){
        int media = 0;
        for (int i=0;i<quanti;i++){
            media=media+ricordi[i].tempo();
        }
        return media;
    }

    public String descriviRicordi(){
        String s="";
        for (int i=0; i<quanti; i++){
            s=s+"Ricordo"+(i+1);
            if(ricordi[i] instanceof Foto){
                s=s+((Foto) ricordi[i]).getDescrizione()+"\n";
            }
            else if (ricordi[i] instanceof Video){
                s=s+ricordi[i].tempo()+"\n";
            }
            else {
                s=s+"Ricordo generico\n";
            }
        }
        return s;
    }
}

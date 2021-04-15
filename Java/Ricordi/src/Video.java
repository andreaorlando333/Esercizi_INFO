public class Video implements Ricordo{
    private int durata;
    Video(int durata){
        this.durata=durata;
    }

    @Override
    public int tempo(){
        return durata;
    }
}

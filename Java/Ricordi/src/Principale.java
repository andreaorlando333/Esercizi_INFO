public class Principale {
    private Album album;
    private Ricordo foto;
    private Ricordo video;
    private Ricordo generico;
    Principale(){
        this.album = new Album(3);
        this.foto = new Foto("Verifica di informatica");
        this.video = new Video(200);
        this.generico = new Ricordo() {
            @Override
            public int tempo() {
                return 100;
            }
        };
    }

    public void svolgi() throws Exception {
        album.aggiungiRicordo(0,foto);
        album.aggiungiRicordo(1,video);
        album.aggiungiRicordo(2,generico);
        String s =this.album.descriviRicordi();
        System.out.println(s);
    }

    public static void main(String[] args) throws Exception {
        Principale p = new Principale();
        p.svolgi();
    }
}

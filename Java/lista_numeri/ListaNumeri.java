public class ListaNumeri {
    private int [] numeri;
    private int quanti = 0;

    public ListaNumeri(int dimmax) throws Exception {
        if (dimmax < 0) {
            throw new Exception("dimensione negativa");

        }
        this.numeri = new int[dimmax];
    }
    public int trova(int x) {
        int i = 0;
        int ris = -1;
        while(i < quanti && ris == -1){
            if(numeri[i] == x){
                ris = i;
            }
            i++;
        }
        return ris;
    }

    public boolean ePalindromo(){
        int i = 0;
        while(i < quanti/2){

            i++;
        }
    }
}

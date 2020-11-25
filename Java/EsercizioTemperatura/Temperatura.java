public class Temperatura {

    private float gradiC;
    private float gradiF;

    Temperatura(float gradiC){
        this.gradiC = gradiC;
    }

    public void setGradiC(float gradiC) {
        this.gradiC = gradiC;
    }

    public void setGradiF(float gradiF){

        this.gradiF = gradiF;

    }

    public float getGradiF() {
        return gradiF;
    }

    public float getGradiC() {
        return gradiC;
    }
}

import java.util.Scanner; 
public class Vectores1
{
    public static void main(String args []){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int n = sc.nextInt();
        int nro,suma;
        nro=0;
        suma=0;
        for(int i=0;i<n;i++){
            nro= sc.nextInt();
            if(nro>=a && nro<=b){
                suma= suma + nro;
            }
        }
        System.out.println(suma);
    }
}

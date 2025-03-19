import java.io.IOException;
 import java.util.Scanner;
import java.util.ArrayList;

/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 		Scanner scan = new Scanner(System.in);

		ArrayList<Integer> posQuique = new ArrayList<Integer>();

		while(scan.hasNext()){

			int n = scan.nextInt();
			int v = scan.nextInt();

			if (n == v){
				break;
			}


			int pAtual = 0;

			posQuique.add(pAtual);

			for (int h=v; h != 0; h--){
					int v2=h;
					pAtual = 0;

				for (int c = 1; c <= v2; c++){
					posQuique.add(pAtual + v2);
					pAtual = pAtual + v2;
					//System.out.println("+" + c);

					if(c == v2){
						c = 0;
						v2 -= 1;
					}
				}
				
			}
			//System.out.println(posQuique);



		if(posQuique.contains(n)){
			System.out.println("possivel");
		}else{
			System.out.println("impossivel");
		}

		posQuique.clear();

		}
 
    }
 
}

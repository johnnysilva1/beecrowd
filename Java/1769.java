import java.io.IOException;
import java.util.Scanner;
import java.lang.Character;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
            Scanner scan = new Scanner(System.in);
	String entrada;	

	while(scan.hasNext()){
	
		entrada = scan.next();
	    String p1, p2, p3, verif;

		int soma, primeiroDigito, segundoDigito;
		
		p1 = entrada.substring(0,3);
		p2 = entrada.substring(4,7);
		p3 = entrada.substring(8,11);
		verif = entrada.substring(12,14);

		//System.out.println(p1 + " " + " " +p2 +" " + p3 + " " + verif);
		soma = Character.getNumericValue(p1.charAt(0))*1;
		soma += Character.getNumericValue(p1.charAt(1))*2;
		soma += Character.getNumericValue(p1.charAt(2))*3;
	
		soma += Character.getNumericValue(p2.charAt(0))*4;
		soma += Character.getNumericValue(p2.charAt(1))*5;
		soma += Character.getNumericValue(p2.charAt(2))*6;
	
		soma += Character.getNumericValue(p3.charAt(0))*7;
		soma += Character.getNumericValue(p3.charAt(1))*8;
		soma += Character.getNumericValue(p3.charAt(2))*9;	
	
		primeiroDigito = soma % 11;

		if(primeiroDigito == 10)
			primeiroDigito = 0;
	
		soma = Character.getNumericValue(p1.charAt(0))*9;
		soma += Character.getNumericValue(p1.charAt(1))*8;
		soma += Character.getNumericValue(p1.charAt(2))*7;
	
		soma += Character.getNumericValue(p2.charAt(0))*6;
		soma += Character.getNumericValue(p2.charAt(1))*5;
		soma += Character.getNumericValue(p2.charAt(2))*4;
	
		soma += Character.getNumericValue(p3.charAt(0))*3;
		soma += Character.getNumericValue(p3.charAt(1))*2;
		soma += Character.getNumericValue(p3.charAt(2))*1;	
			
		segundoDigito = soma % 11;
		
		if(segundoDigito == 10)
			segundoDigito = 0;
			

		if(Character.getNumericValue(verif.charAt(0)) == primeiroDigito && Character.getNumericValue(verif.charAt(1)) == segundoDigito){
		System.out.println("CPF valido");
		}else{
		System.out.println("CPF invalido");
		}

	}
    }
 
}

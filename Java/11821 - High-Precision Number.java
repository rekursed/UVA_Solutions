/**
 * @(#)Main.java
 *
 * 11821 - High-Precision Number
 * @author Rakibz
 * @version 1.00 2011/12/11
 */
import java.math.BigDecimal;
import java.util.Scanner;
public class Main {
        
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
   	{
   		Scanner inp = new Scanner (System.in);
   		int k = inp.nextInt();
   		BigDecimal zero = BigDecimal.ZERO;
   		while(k-->0 && inp.hasNext())
   		{
   			BigDecimal sum = BigDecimal.ZERO;
   			do
   			{
   				BigDecimal d = inp.nextBigDecimal();
   				if(d.equals(zero) ) break;
   				//System.out.println(d);
   				sum = sum.add( d );
   				  				
   			}   			
   			while(true);
   			char ans[] = sum.toString().toCharArray();
   			int n= ans.length - 1;
   			while( n>=0 && ans [n] == '0') n--;
   			
   			while( n >=0 && ans [n] == '.' ) n--;
   			for( int i = 0 ; i <=n ; i++)
   				System.out.print(ans[i]);
   			System.out.println();
   		}
    }
    
}

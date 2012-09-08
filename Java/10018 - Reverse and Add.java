/**
 * @(#)Main.java
 *
 *
 * @author Rakibz El Coder
 * @version 1.00 2011/12/11
 */
import java.math.BigInteger;
import java.util.Scanner;
public class Main {
        
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
   	{
   		Scanner inp = new Scanner (System.in);
   		while(inp.hasNext())
   		{
   			int net = inp.nextInt();	
	   		while( net-- >0)
	   		{
	   			BigInteger n = inp.nextBigInteger();
	   			BigInteger m;
	   			int count=0;
	   			do
	   			{
	   				m= new BigInteger( new StringBuffer(n. toString()).reverse().toString());
	   				if( m.equals( n ))
	   					break;
	   				count++;
	   				n= m.add(n);
	   				
	   			} while ( true );
	   			System.out.println(count+" "+n);
	   		}
   		}       	
    }    
}

/**
 * @(#)Main.java
 *
 * 10922 - 2 the 9s
 * @author Rakibz
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
   			BigInteger n = inp.nextBigInteger();
   			BigInteger d=n;
   			BigInteger nine = new BigInteger("9");
   			int degree=0;
   			while(n.mod(nine) == BigInteger.ZERO)
   			{
   				System.out.println("->>"+n);
   				if(n.toString().length()==1)
   				{
   					if( n.mod(nine) == BigInteger.ZERO && !n.equals(BigInteger.ZERO))
   					{
   						degree++;
   					}
   					break;
   				}
   				degree++;
   				n=sum(n);
   				
   			}
   			if(degree>1) degree--;
   			if(degree == 0)
   			
   				System.out.println(d+" is not a multiple of 9.");
   					
   			else
   			
   				System.out.println(d+" is a multiple of 9 and has 9-degree "+degree+".");
	   		
	   			
   		}       	
    }
    public static BigInteger sum ( BigInteger x )
    {
    	String a = x.toString();
    	int s=0;
    	for( int i=0 ; i<a.length() ; i++)
    	{
    		s+= (a.charAt(i)-'0');
    	}
    	BigInteger y = BigInteger.valueOf(s);
    	
    	return y;
    }
    
}

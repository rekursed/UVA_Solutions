/**
 * @(#)Main.java
 *
 * 
 * @author RAKIBz of STUBBORNs
 *	Code Of ManHutton Distence 
 * @version 1.00 2012/2/28
 */
import java.util.Scanner;
import java.util.Collections;
import java.math.BigInteger;
import java.util.Vector;
import java.io.IOException;

public class Main 
{	
    public static void main(String[] args) throws IOException
    {
    	Scanner inp = new Scanner(System.in);
    
    		int kase = Integer.parseInt(inp.nextLine());
    		while(kase--!=0)
    		{
    			String[] big = inp.nextLine().split(" ");
    			BigInteger a= new BigInteger(big[0]);    			
    			BigInteger b= new BigInteger(big[2]);
    			
    			BigInteger gcd= a.gcd(b);
    			
    			a=a.divide(gcd);
    			b=b.divide(gcd);
    			System.out.println(a+" / "+b);
    			    			
    		}
    
    }
}


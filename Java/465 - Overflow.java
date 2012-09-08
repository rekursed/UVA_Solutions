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
//import java.io.IOException;

public class Main 
{	
    public static void main(String[] args)
    {
    	Scanner inp = new Scanner(System.in);
    	int i,j,k;
    	long a=(1<<31)-1;
    	BigInteger lim = BigInteger.valueOf(a);
    	while(inp.hasNext())
    	{
    		String str =inp.nextLine();
    		String[] all = str.split(" "); 
    		BigInteger A = new BigInteger(all[0]);
    		char c = all[1].charAt(0);
    		BigInteger B = new BigInteger(all[2]);
    		
    		System.out.println(str);
    		BigInteger sum;
    		if(c=='+')
    			sum= A.add(B);
    		else
    			sum = A.multiply(B);
    		if(lim.compareTo(A)<0)
    		{
    			System.out.println("first number too big");
    		}
    		if(lim.compareTo(B)<0)
    		{
    			System.out.println("second number too big");
    		}
    		if(lim.compareTo(sum)<0)
    		{
    			System.out.println("result too big");
    		}
    		
    	}    	
    	
    }
    

}

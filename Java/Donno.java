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
    	//long a=(1<<31)-1;
    	boolean nw=false;
    	while(inp.hasNext())
    	{
    		boolean ord=true,hu=false,bu,le;
    		if(nw==true)
    			System.out.println();
    		nw=true;
    		BigInteger n = inp.nextBigInteger();
	    	if(n.mod(BigInteger.valueOf(4))== BigInteger.ZERO && (n.mod(BigInteger.valueOf(100))!= BigInteger.ZERO || n.mod(BigInteger.valueOf(400))== BigInteger.ZERO) )
	        {
	            ord=false;
	            System.out.println("This is leap year.");
	            if(n.mod(BigInteger.valueOf(55))==BigInteger.ZERO)
	                hu=true;
	        }
	        if(n.mod(BigInteger.valueOf(15))== BigInteger.ZERO)
	        {
	            ord=false;
	            System.out.println("This is huluculu festival year.");
	        }
	        if(hu)
	        {
	            System.out.println("This is bulukulu festival year.");
	        }
	        if(ord)
	        {
	            System.out.println("This is an ordinary year.");
	        }
	    		
	    }    	
    	
    }
    

}

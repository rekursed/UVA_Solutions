/**
 * @(#)Main.java
 *
 * 
 * @author RAKIBz of STUBBORNs
 *	Code Of Exponentiation 
 * @version 1.00 2012/2/28
 */
import java.util.Scanner;
import java.util.Collections;
import java.math.BigInteger;
import java.math.BigDecimal;
import java.util.Vector;
import java.lang.String;
import java.math.MathContext;
import java.io.*;

public class Main 
{	
    public static void main(String[] args)
    {
    	Scanner inp = new Scanner(new BufferedReader(new InputStreamReader (System.in)));
    	PrintWriter pr = new PrintWriter(new BufferedWriter( new OutputStreamWriter(System.out)));
    	int i,j,k;
    	String res;
    	//long a=(1<<31)-1;
    	boolean nw=false;
    	while(inp.hasNext())
    	{
    		BigDecimal ans=BigDecimal.ONE, R= inp.nextBigDecimal();
   	
    		int n= inp.nextInt();
    		R = R.pow(n);
    		R = R.stripTrailingZeros();
    		res = R.toPlainString();
    		for(i=0;; i++)
    		{
    			if(res.charAt(i)!='0')
    				break;
    		}
    		res = res.substring(i);
    		System.out.println(res);
    		
	    		
	    }    	
    	
    }
    

}

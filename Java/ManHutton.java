/**
 * @(#)Main.java
 *
 * 
 * @author RAKIBz of STUBBORNs
 *	Code Of ManHutton Distence 
 * @version 1.00 2012/2/28
 */
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;
import java.util.Collections;
import java.util.PriorityQueue;
import java.util.Queue;
import java.util.Vector;
import java.lang.Comparable;

public class Main 
{
	public static int MX= 2<<30;
    public static void main(String[] args) 
    {
    	Integer n,s,d;
    	Integer [] [] grid                                                                 ;
    	Scanner inp = new Scanner(System.in);
    	while( inp.hasNext())
    	{
    		Integer x,y,i,j, w=inp.nextInt();
    		Integer h = inp.nextInt();
    		if(w==0 && h==0) break;
    		grid = new Integer[h+1][w+1];
    		for(i=0;i<=h;i++)
    			for(j=0;j<=w;j++)
    				grid[i][j] = 0;
    		n=inp.nextInt();
    		for(i=0;i<n;i++)
    		{
    			x=inp.nextInt();
    			y=inp.nextInt();
    			grid[x][y]=-1;
    		}
    		grid[0][0] =1;
    		for(i=0;i<=h;i++)
    		{
    			if(grid[i][0]==-1) break;
    			grid[i][0]=1;
    		}    		
    		for(j=0;j<=w;j++)
    		{
    			if(grid[0][j]==-1) break;
    			grid[0][j]=1;
    		}		
    		for(i=1;i<=h;i++)
    		{
    			for(j=1;j<=w;j++)
    			{
    				if(grid[i][j]!=-1)
    				{
    					grid[i][j]=(grid[i-1][j]==-1 ? 0 : grid[i-1] [j] ) + (grid[i][j-1] == -1 ? 0: grid [i][j-1]);
    				}
    			}
    		}
    		Integer res = grid[h][w];
    		if(res==0)
    			System.out.println("There is no path.");
    		else if(res ==1)
    			System.out.println("There is one path from Little Red Riding Hood's house to her grandmother's house."); 
    		else
    			System.out.println("There is "+res.toString()+" path from Little Red Riding Hood's house to her grandmother's house.");    		    		
    		
    	} 
    }
    /*
    Integer WayToHome(Integer grid[][],Integer w,Integer h)
    {
    	Integer i,j;
    	grid[0][0]=1;
    	return grid[h][w];
    }
    */
}  
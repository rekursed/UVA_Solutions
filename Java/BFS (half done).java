/**
 * @(#)Main.java
 *
 * 
 * @author RAKIBz of STUBBORNs
 *	Code Of DIJKSTRA 
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
    	Vector<Integer>[] mat;
    	Scanner inp = new Scanner(System.in);
    	while( inp.hasNext())
    	{
    		Integer n=inp.nextInt();
    		mat = new Vector<Integer>[n+1];
    		while(n--!=0)
    		{
    			int u=inp.nextInt();
    			while()    			
    		}
    		
    		
    		    		
    		
    	} 
    }
    
    class BFS
    {
    	Integer[] dis;
    	Vector<Integer>[] matrix;
    	Integer[] parent;
    	Integer n,u,v;
    	public BFS()
    	{
    	}
	    public void FindPath(Integer src , Integer des)
		{
		    for(int i=0;i<300;i++)
		    {
		        dis[i]=MX;
		        parent[i]=-1;
		    }
		    dis[src]=0;
		    parent[src]=-1;
		    Queue<Integer> Q;
		    Q.add(src);
		    while(!Q.isEmpty())
		    {
		        u=Q.poll();
		        if(u==des) return ;
		        Integer [] adj = matrix[u].toArray();
		        for(int j=0;j<matrix[u].size();j++)
		        {
		            if(dis[adj[j]]==MX)
		            {		              
		                dis[adj[j]]=dis[u]+1;
		                parent[adj[j ]]=u;
		                Q.add(v);
		            }
		        }
		    }
		}
    }
    

}  
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
import java.util.Vector;
import java.util.Collections;
public class Main {
        
    /**
     * Creates a new instance of <code>Main</code>.
     */
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
    	Scanner inp = new Scanner(System.in);
    	int v,kase = 1;
    	while( (v= inp.nextInt()) != 0)
    	{
    		Dijkstra d = new Dijkstra (v);
    		for(int a=0; a<v;a++)
    		{
    			int edg = inp.nextInt();
    			for(int i=0; i<edg;i++)
	    		{
	    			int b = inp.nextInt()-1;
	    			int w = inp.nextInt();
	    			d.addEdge(a,b,w);
	    		}
    		}
    		Integer [] a = d.ShortestPath(inp.nextInt()-1, inp.nextInt()-1);
	        String ans="";
	        for(int i=2 ;i<=(1+a[1]); i++)
	        {
	        	ans += " "+ (a[i]+1);
	        }
	        System.out.println("Case "+ (kase++) +": Path ="+ans+"; "+a[0]+" second delay");
    	} 
    }
}  
    class Dijkstra
    {
    	Integer[] dis;
    	Integer[] par;
    	ArrayList<Integer>[] adj;
    	Integer w[][];
    	boolean[] visited;
    	final int v;
    	final int MX = 2 << 23;
    	@SuppressWarnings("unchecked")
    	public Dijkstra( int v_)
    	{
    		this.v=v_;
    		par = new Integer[v];
    		dis = new Integer[v];
    		adj = new ArrayList[v];
    		w = new Integer[v][v];
    		visited = new boolean [v];
    		
    		for( int i =0; i<v;i++)
    		{
    			adj[i]= new  ArrayList<Integer>();
    		}
    		
    	}
    	
    	public void addEdge(int a, int b, int wi)
    	{
    		adj[a].add(b);
    		w[a][b] = wi;
    	}
    	public void initSrc(int s)
    	{
    		Arrays.fill(dis,MX);
    		Arrays.fill(par,-1);
    		dis[s]=0;
    	}
    	
    	public Integer[] ShortestPath(int from ,int to )
    	{
    		initSrc(from);
    		for(int i=0;i<v;i++)
    		{
    			int min=minimum();
    			visited[min] = true;
    			relax(min);
    		}
    		return getPath(from , to);
    	}
    	
    	private void relax(int a)
    	{
    		for(Integer b : adj[a])
    		{
    			if(dis[b] > dis[a]+ w[a][b])
    			{
    				dis[b]=dis[a]+ w[a][b];
    				par[b] =a;
    			}
    		}
    	}
    	private int minimum()
    	{
    		int min = -1;
    		for(int i=0;i<v;i++)
    			if(!visited[i] && (min==-1 || dis[min]> dis[i]))
    				min=i;
    		return  min;
    	}
    	
    	private Integer[] getPath(int a, int b)
    	{
    		Vector<Integer> p = new Vector<Integer>();
    		
    		for(int cur =b ; cur!=a; cur =par[cur])
    			p.add(cur);
    		p.add(a);
    		int size = p.size();
    		p.add(size);
    		p.add(dis[b]);
    		
    		Collections.reverse(p);
    		Integer[] path = new Integer[ p.size()];
    		p.toArray(path);
    		return path;
    	}
    }


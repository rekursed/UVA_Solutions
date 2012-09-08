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
import java.lang.reflect.Array;
import java.lang.Comparable;

public class Main 
{      
    public static void main(String[] args) {
    	Scanner inp = new Scanner(System.in);
    	final int MX = (2<<23);
    	int v=-1,kase = 1,T=inp.nextInt();
    	while( T-- != 0)
    	{    		
    		int n=inp.nextInt(), e =inp.nextInt(), s=inp.nextInt(), f =inp.nextInt();
    		Dijkstra d = new Dijkstra (n);
    		for(int i=0; i< e;i++)
	    	{
	    		int a = inp.nextInt();
	    		int b = inp.nextInt();
	    		int w =inp.nextInt();
	    		d.addEdge(a,b,w);
	    		d.addEdge(b,a,w);
	    	}
    		Integer [] a = d.ShortestPath(s,f);
	        String ans = (a[0]!=MX? a[0].toString(): "unreachable"); 
	        System.out.println("Case "+ (kase++) +": "+ans);
    	} 
    }
}  
class Dijkstra
    {
    	Integer[] dis;
    	ArrayList<Integer>[] adj;
    	Integer w[][];
    	boolean[] visited;
    	final int v;
    	final int MX = 2 << 23;
    	PriorityQueue <Node> Q = new PriorityQueue <Node>();
    	@SuppressWarnings("unchecked")
    	public Dijkstra( int v_)
    	{
    		this.v=v_;
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
    		dis[s]=0;
    		Q.add(new Node(s,0));
    	}
    	
    	public Integer[] ShortestPath(int a ,int b )
    	{
    		initSrc(a);
    		while(!Q.isEmpty())
    		{
    			Node min= Q.poll();
    			relax(min);
    		}
    		return new Integer[] { dis[b] };
    	}
    	
    	private void relax(Node n)
    	{
    		int a = n.x;
    		for(Integer b : adj[a])
    		{
    			if(!visited[b] && dis[b] > dis[a]+ w[a][b])
    			{
    				dis[b]=dis[a]+ w[a][b];
    				Q.add(new Node (b,dis[b]));
    			}
    		}
    	}
    	
}
class Node implements Comparable<Node> {
	int x;
	int d;
	public Node(int x_,int d_)
	{
		this.x=x_;
		this.d=d_;
	}
	@Override
	public int compareTo(Node o)
   	{
    	return (this.d - o.d);
	}
}
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		for(int i=0;i<t;i++)
		{
		    int n=sc.nextInt();
		    int flag=1;
		    if(n==0||n==1)
		    System.out.println("no");
		    else
		    {
		        for(int j=2;j<=n/2;j++)
    		    {
    		        if(n%j==0)
    		        {
    		            flag=0;
    		            break;
    		        }
    		        
    		    }
    		    if(flag==1)
    		    {
    		        System.out.println("yes");
    		    }
    		    else{
    		        System.out.println("no");
    		    }
		    }
		    
		    
		}
	}
}

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
		Scanner in=new Scanner(System.in);
		int t=in.nextInt();
		int n[]=new int[t];
		int a[]=new int[t];
		int b[]=new int[t];
		String s[]=new String[t];
		for(int i=0;i<t;i++)
		{
		    n[i]=in.nextInt();
		    a[i]=in.nextInt();
		    b[i]=in.nextInt();
		    s[i]=in.next();
		    int b1=0,a1=0;
		    for(int k=0;k<n[i];k++)
		    {
		        if(s[i].charAt(k)!='0')
		        a1++;//3
		        else
		        b1++;
		    }
		    System.out.println(a[i]*b1+b[i]*a1);
		}
		
	}
}

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
		Scanner s=new Scanner(System.in);
		int t=s.nextInt();
		while(t-->0){
		    int a=s.nextInt();
		    int b=s.nextInt();
		    int count=0;
		    while(a!=b){
		        if(a<b){
		            a+=2;
		            count++;
		        }
		        else{
		            a-=1;
		            count++;
		        }
		    }
		    System.out.println(count);
		}
	}
}

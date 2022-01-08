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
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		while(t-->0){
		    int count = 0;
		    int a = scan.nextInt();
		    if(a==7) count++;
		    int b = scan.nextInt();
		    if(b==7) count++;
		    int c = scan.nextInt();
		    if(c==7) count++;
		    if(count!=0){
		        System.out.println("YES");
		    }
		    else{
		        System.out.println("NO");
		    }
		}
	}
}

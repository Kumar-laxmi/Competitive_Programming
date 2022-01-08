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
		Scanner in = new Scanner(System.in);
		
		double withdraw = in.nextDouble();
		double balance = in.nextDouble();
		
		double final_bal = (balance-withdraw-0.50);
		
		if(withdraw % 5 == 0 && final_bal>=0) {
			System.out.printf("%.02f",final_bal);
		}
		else {
			System.out.printf("%.02f",balance);
		}
	}
}

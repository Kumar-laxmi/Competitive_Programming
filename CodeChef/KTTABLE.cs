using System;
using System.Linq;

public class Test
{
	public static void Main()
	{
		
		int T = Convert.ToInt32(Console.ReadLine());
		
		for(int i = 0; i < T; i++){
		    
		    int slots = Convert.ToInt32(Console.ReadLine());
		    
		    string input = Console.ReadLine(); 
            int[] timeSlotsAlloted = input.Split().Select(n => Convert.ToInt32(n)).ToArray();
		    
		    input = Console.ReadLine(); 
            int[] timeRequired = input.Split().Select(n => Convert.ToInt32(n)).ToArray();
		    
		    int time = 0;
		    
		    int count = 0;
		    
		    for(int j = 0; j < slots; j++){
		        
		        if((timeSlotsAlloted[j] - time) >= timeRequired[j]){
		            count++;
		        }
		        
		        time = timeSlotsAlloted[j];
		    }
		    
		    Console.WriteLine(count);
		}
		
	}
}

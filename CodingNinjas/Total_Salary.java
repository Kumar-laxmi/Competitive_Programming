// Simple Java Solution
public class Solution {
public static int totalSalary(int basic, char grade) {
 //Write your code here
       double hra = 0.20*basic;
        double da = 0.50*basic;
        double pf = 0.11*basic;
       double allowance=0;
        if(grade=='A'){
            allowance=1700;
        }
       else if(grade=='B'){
            allowance=1500;
       }
       else{
            allowance=1300;
       }
       int tot= (int)Math.round((basic+hra+da+allowance)-pf);
       return tot;
}
}


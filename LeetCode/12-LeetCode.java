// 12. Integer to Roman
// Difficulty: Medium

class Solution {
    public String intToRoman(int num) {
        String str="";
        String temp="";
        while(num>0)
        {
             if(num>=1000)
            {
                temp="M";
                num-=1000;
            }
            else if(num>=900)
            {
                temp="CM";
                num-=900;
            }
            else if(num>=500)
            {
                temp="D";
                num-=500;
            }
            else if(num>=400)
            {
                temp="CD";
                num-=400;
            }
            else if(num>=100)
            {
                temp="C";
                num-=100;
            }
            else if(num>=90)
            {
                temp="XC";
                num-=90;
            }
            else if(num>=50)
            {
                temp="L";
                num-=50;
            }
            else if(num>=40)
            {
                temp="XL";
                num-=40;
            }
            else if(num>=10)
            {
                temp="X";
                num-=10;
            }
            else if(num>=9)
            {
                temp="IX";
                num-=9;
            }
            else if(num>=5)
            {
                temp="V";
                num-=5;
            }
            else if(num>=4)
            {
                temp="IV";
                num-=4;
            }
            else if(num>=1)
            {
                temp="I";
                num-=1;
            }
            
            str = str + temp;
        }
        
        return str;
    }
}

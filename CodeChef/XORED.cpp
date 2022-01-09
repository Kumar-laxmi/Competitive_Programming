#include <bits/stdc++.h>
using namespace std;

int findXOR(int n)
{
    int mod = n % 4;
    // If n is a multiple of 4
    if (mod == 0)
        return n;

    // If n % 4 gives remainder 1
    else if (mod == 1)
        return 1;

    // If n % 4 gives remainder 2
    else if (mod == 2)
        return n + 1;

    // If n % 4 gives remainder 3
    else if (mod == 3)
        return 0;
}
int main()
{
 int TESTCASE=1;
 cin>>TESTCASE;

 while (TESTCASE--)
 {
     int n,x;
     cin>>n>>x;

     if(x== 5*pow(10,5))
     {
        int xxx = findXOR(n-2);
        for (int i = 1; i < n-1; i++)
        {
            cout << i << ' ';
        }

        int ans1= pow(2,17);
        for (int i = 0; i < 17; i++)
        {
            int k = xxx>>i;
            if(k&1) ans1+=pow(2,i);
        }
        cout << ans1 << ' ' << 500000-pow(2,17) << endl;

         continue;
     }
     
     if(x>100000)
     {
         if(n%4==0)
         {
             for (int i = 1; i < n; i++)
             {
                 cout << i << ' ';
             }

             cout << x << endl;
         }
         else if(n%4==1)
         {
             for (int i = 0; i < n-1; i++)
             {
                 cout << i << ' ';
             }
             cout << x << endl;
         }
         else if (n%4==2)
         {
             for (int i = 1; i < n; i++)
             {
                 cout << i << ' ';
             }

             if(x%2==0) cout << x+1 << endl;
             else cout << x-1 << endl;
         }
         else
         {
             for (int i = 0; i < n-1; i++)
             {
                 cout << i << ' ';
             }
                 if(x%2==0) cout << x+1 << endl;
             else cout << x-1 << endl;
         }
     }
     else
     {
         if (n%4==0)
         {
             if(x==1)
             {
               for (int i = 3; i <= n-1; i++)
               {
                   cout << i << ' ';
               }
               cout << "262143 131072 131069\n";
               continue;
             }

            int xx = pow(10,5)+3+1;
             for (int i = 0; i < n-2; i++, xx++)
             {
                cout << xx << ' ';
             }
             cout << "0 ";
             if(x%2==0) cout << x+1 << endl;
             else cout << x-1 << endl;
         }

         else if (n%4==1)
         {
             int xx = pow(10,5)+3+1;
             for (int i = 0; i < n-1; i++, xx++)
             {
                 cout << xx << ' ';
             }
             cout << x << endl;
         }

        else if (n%4==2)
        {
            int xx = pow(10,5)+3+1;
             for (int i = 0; i < n-2; i++, xx++)
             {
                 cout << xx << ' ';
             }
             cout << x << " 0" << endl;
        }
        else
        {
            int xx = pow(10,5)+3+1;
             for (int i = 0; i < n-1; i++, xx++)
             {
                 cout << xx << ' ';
             }
             if(x%2==0) cout << x+1 << endl;
             else cout << x-1 << endl;
        }
     }

 }

return 0;

}

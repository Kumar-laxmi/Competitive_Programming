#include<iostream>
using namespace std;

int main()
{
    int T,X,Y;
    string s;
    cin>>T;
    while (T--)
    {
        cin>>X>>Y;
        cin>>s;
        int n = s.length();
        int sum,count;
        if(s[0] == '0')
        sum = 0;
        else
        sum = 1;
        count = sum;
        int res = 0;
        for (int i = 1; i < n; i++)
        {
            if(s[i] == '1' && s[i] == s[i-1])
            sum++;
            else if(s[i] == '1' && s[i] != s[i-1])
            sum = 1;
            else
            {
                res = max(res,sum);
                sum = 0;
            }
            if(s[i] == '1')
            count++;
        }
        res = max(res,sum);
        cout<<(count*X + res *Y)<<endl;
    }
    
    return 0;
}

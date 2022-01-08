{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,a,b,k;
	    cin>>x>>y>>a>>b>>k;
	    int p = x + a*k;
	    int d = y + b*k;
	    if(p<d)
	    {
	        cout<<"PETROL \n";
	    }
	    else if(p>d)
	    {
	        cout<<"DIESEL \n";
	    }
	    else
	    {
	        cout<<"SAME PRICE \n";
	    }
	}
	return 0;
}

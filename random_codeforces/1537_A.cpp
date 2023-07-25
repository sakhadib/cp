//Sakhawat Adib
//mar 23, 2023   ||   IUT   ||    Bangladesh
 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; 
        cin >> n; 
        int a[n]; 

    	for(int i = 0 ; i < n ; i++) //input the array
    	{
            cin >> a[i];
        }
    	
    	int sum = 0;  
    	for(int i = 0 ; i < n ; i++) 
    	{
            sum += a[i];
        }
    	
    	if(sum == n) 
    	{
            cout << 0 << endl; 
        }
    	
    	else if(sum <= 0 || sum < n) 
    	{
            cout << 1 << endl;
        }
    	
    	else 
    	{
            cout << sum - n << endl;
        }
	}
	
	return 0;
        
}
 

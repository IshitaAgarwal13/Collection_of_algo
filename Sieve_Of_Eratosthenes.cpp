#include<bits/stdc++.h>
using namespace std;

#define fastIO              ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int                 long long

//----------------------Sieve Of Eratosthenes-------------------------------------//

/*
The sieve of Eratosthenes is one of the most efficient ways to find all primes 
smaller than n when n is smaller than 10 million(1e6).

Time Complexity: O(n*log(log(n)))
Space Complexity: O(n)

*/

const int N = 1000005;
vector<bool>prime(N,true);

void sieve()
{    
    prime[0] = prime[1] = false;

    for(int i = 2; i*i <= N; i++)
    {
        if(prime[i])
        {
            for(int j = i*i; j <= N; j +=i)
                prime[j]=false;
        }
    }
}
    
void solve()
{    
    
    int a, b;
    cin >> a >> b;

    // printing prime numbers between a and b
    for(int i = a; i <= b; i++)
    {
        if(prime[i])
            cout << i << " ";
    }
    cout << endl;    
}    

int32_t main()
{

    fastIO
    cout<<setprecision(15)<<fixed;

    sieve();    // calling sieve function to precalculate the primes upto N

    int t = 1;
    // cin>>t;

    for(int i = 1; i <= t; i++)
    {
        // cout<<"Case #"<<i<<" : "<<endl;
        solve();
    }
    
    return 0;
}

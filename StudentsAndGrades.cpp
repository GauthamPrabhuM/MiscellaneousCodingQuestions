    #include <iostream>
    #include <bits/stdc++.h>
    #include<stdio.h> 
    #include<string.h>
    

     #define ll long long
    using namespace std;
    // int flag=0;
     ll isPrime(ll n)
     {
         ll flag=1;
       for(ll i=2; i<n; i++)
        {if(n%i==0)
          flag=0;}

        return flag;


     }
     float newPrecision(float n, float i)
{
    return floor(pow(10,i)*n)/pow(10,i);
}
char upper(char s)
{
  return (s+'a'-'A');
}
void inputarray(ll A[], ll n)
{


  for(ll i=0; i<n; i++)
    cin>>A[i];
}

void printarray(ll A[], ll n)
{
  for(ll i=0; i<n; i++)
    cout<<A[i]<<" ";
}

bool check(string s1, string s2)
{

 ll j=0;
 for(ll i=0; i<s2.size(); i++)
 {
   if(s1[j]==s2[i])
    j++;
  if(j==s1.size())
    return true;

} 
return false;
}


/*Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome
*/bool lapindromeornot(string s)
{
    int count1[26] = {0};
    int count2[26] = {0};
  
    int n = s.length();
    if (n == 1)
        return true;

    for (int i=0,j=n-1; i<j; i++,j--)
    {
        count1[s[i]-'a']++;
          count2[s[j]-'a']++;
    }
  
   
    for (int i = 0; i<26; i++)
        if (count1[i] != count2[i])
            return false;
  
    return true;
}

ll factorial(ll n)
{

   if(n==0||n==1)
    return 1;
  else
    return n*factorial(n-1);



   

}
ll revnum(ll t)
{

  ll rev=0;
  while(t)
  {

    rev=rev*10+t%10;
    t=t/10;
  }
  return rev;
}

ll longestConsecutiveSequence(ll A[], ll n)
{
    ll ans = 0;
    sort(A, A+n);
    ll i = 0;
    while(i < n)
    {
        ll curr = 1;
        while(i < n && A[i+1] == A[i] + 1)
        {
             curr+=1;
             i+=1;             
        }
        
        if ( curr == 1 )
           i+=1;
        
        ans = max(ans, curr);
    }
    
    return ans;
}
string check(string s)
{
if(s.size()%2!=0){
    return s;
}
string s1=check(s.substr(0,s.size()/2));
string s2=check(s.substr(s.size()/2,s.size()/2));
if(s1<s2)
    return s1+s2;
else
    return s2+s1;

}

     
    void solve() 
    {
    
        int n, m;
        cin >> n >> m;
        map<int,bool> m1;
        for (int i = 0; i < n; i++) 
        {
            int x;
            cin >> x;
            m1[x] = 1;
        }
        for (int i = 0; i < m; i++) 
        {
            int x;
            cin >> x;
            if (m1.count(x)) 
                cout << "YES\n";
            
            else 
            {
                cout << "NO\n";
                m1[x] = 1;
            }
        }
      }

    

  
     


   

  



    




   
  





    
    

    


       





    
 int main()
    {
        ios::sync_with_stdio(0);
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        cout<<fixed;
        cout<<setprecision(10);
     freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
        ll t=1;
    cin>>t;
        for(int i=1;i<=t;i++)
                    
           solve();
      
        return 0;
    }

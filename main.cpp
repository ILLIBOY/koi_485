#include <cstdio>  
  
long long int n, lim=1;  
  
void input();  
void solve(int i);  
  
int main()  
{  
    input();  
    solve(1);  
}  
  
void input()  
{  
    scanf("%lld", &n);  
}  
  
void solve(int i)  
{  
    printf("*");  
    if(i==n)  
    {  
        return;  
    }  
    else if(lim==i)  
    {  
        lim++;  
        i=1;  
        printf("\n");  
        solve(i);  
    }  
    else  
    {  
        i++;  
        solve(i);  
    }  
} 
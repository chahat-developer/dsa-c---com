#include<iostream>
using namespace std;

int main(){
    // pow(a,b)
    
    int a, b , ans;

    cin >> a >> b;

     ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans*a;
    }
    
    cout<<" answer is " << ans <<endl;
    
    int c, d , andi;

    cin >> c >> d;

     andi = 1;

    for (int i = 1; i <=d; i++)
    {
        andi = andi*c;
    }
    
    cout<<" answer is " << andi <<endl;

    return 0;
}
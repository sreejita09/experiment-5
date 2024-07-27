/*sreejita bhardwaj */
/*23070123130*/
/*EnTC: B2*/
/*experiment 5*/

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    cout<<"enter the value of c: ";
    cin>>c;

    if (a>b && a>c)
    {
        cout<<"a is the greatest";
    }
    if (b>a && b>c)
    {
        cout<<"b is the greatest";
    }
    else 
    {
        cout<<"c is the greatest";
    }

    return 0;
}
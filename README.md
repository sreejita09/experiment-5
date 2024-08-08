# Experiment 5 

# Aim
gTo study and implement C++ decision making statements 

# software used
VS code 

# Theory
We learnt how to find the greatest number through if else statements, and even through nested if. We learnt how to use switch cases. 

if else is a conditional statement used when there are conditions, for example if a number is greater than the other or if the user chooses one thing over another. 

Nested if else is a part of those conditional statements however theyre one inside another to reduce the length of the code. It can be a bit complicated to understand though. 

The switch expression is evaluated once and the value of the expression is compared with the values of each case. if there is a match, the associated block of code is executed


# Code 

break statement:

~~~
#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"choose (1,2,3,4)\n1. cake \n2. muffin \n3. milkshake \n4. pancakes \n";
    cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<"cake";
        break;
        case 2:
        cout<<"muffin";
        break;
        case 3:
        cout<<"milkshake";
        break;
        case 4:
        cout<<"pancakes";
        break;
    }

    return 0;
}

~~~
output: 
![image](https://github.com/user-attachments/assets/add99f0d-a37c-4f11-ac72-be0997028b74)



greatest number with nested if:

~~~
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    cout<<"enter c: ";
    cin>>c;

    if(a>b)
    {
        if (a>c)
        {
            cout<<"a is the greatest";
        }
        else
        {
            cout<<"c is the greatest";
        }
    }
    else
    {
        if (b>a && b>c)
        {
            cout<<"b is the greatest";
        }
        
        else
        {
            cout<<"c is the greatest";
        }
    }

    return 0;
}
~~~
![image](https://github.com/user-attachments/assets/83ea1dca-202f-4f17-aef7-fec92cc45bf1)


greatest number: 

~~~
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

~~~

output: 
![image](https://github.com/user-attachments/assets/0d49d988-3ccb-4772-b13a-f5e271e5f364)

calculator switch 

~~~
#include<iostream>
using namespace std;

int main()
{
    char oper;
    cout<<"enter an operator(+,-,*,/): \n";
    cin >> oper; 

    float a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;

    switch(oper)
    {
        case '+':
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
        break;

        case '-':
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
        break;

        case '*':
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
        break;

        case '/':
        cout<<a<<"/"<<b<<"="<<a/b<<endl;
        break;
    }


    return 0;
}
~~~
output: 
![image](https://github.com/user-attachments/assets/2cd12ce2-a9e7-4aa0-81af-8bd04f6389a7)

/*sreejita bhardwaj */
/*23070123130*/
/*EnTC: B2*/
/*experiment 5*/

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
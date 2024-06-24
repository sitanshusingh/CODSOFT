#include <iostream>
using namespace std;

int main()
{
    int num;
    int x,y;
    int ans;
    float a,b;
    while (true)
    {
        cout<<"Calculator:- "<<endl;
        cout<<"1st. Addition "<<endl;
        cout<<"2st. Subtraction "<<endl;
        cout<<"3st.  Multiplication "<<endl;
        cout<<"4st. Division "<<endl;
        cout<<"Enter Zero to turn off Calculater "<<endl;
        cin>>num;
        if(num==1)
        {
            cout<<"Enter 1st number:- "<<endl;
            cin>>x;
            cout<<"Enter 2nd number:- "<<endl;
            cin>>y;
            ans = x+y;
            cout<<"Calculation is "<<ans<<endl;
        }
        else if(num==2)
        {
            cout<<"Enter 1st number:- "<<endl;
            cin>>x;
            cout<<"Enter 2nd number:- "<<endl;
            cin>>y;
            ans = x-y;
            cout<<"Calculation is "<<ans<<endl;
            
        }
        else if(num==3)
        {
            cout<<"Enter 1st number:- "<<endl;
            cin>>x;
            cout<<"Enter 2nd number:- "<<endl;
            cin>>y;
            ans = x*y;
            cout<<"Calculation is "<<ans<<endl;
            
        }
        else if(num==4)
        {
            cout<<"Enter 1st number:- "<<endl;
            cin>>a;
            cout<<"Enter 2nd number:- "<<endl;
            cin>>b;
            ans = a/b;
            cout<<"Calculation is "<<ans<<endl;
            
        }
        else if(num==0)
        {
            cout<<"Calculator has been turned off"<<endl;
            break;
        }
        else{
            cout<<"Please Enter Write Number to Perfrom Calculation:-"<<endl;
        }

    }
    return 0;
    
}
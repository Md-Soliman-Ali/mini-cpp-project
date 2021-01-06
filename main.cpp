#include <iostream>
using namespace std;

void Lower(string& x)
{
    for(int i=0;i<x.length();i++)
    {
        x[i]=tolower(x[i]);
    }
}

int main()
{
    double total=0;
    string msg;
    cout<<"                                               WELCOME TO ALPHA SUPER SHOP"<<endl;
    cout<<"\n                                      CEO: Md.Soliman Ali , Shop Id: 171-15-8572"<<endl;

    cout<<"\n1.Rice(Minicet):65 Tk Per Kg"<<endl;
    cout<<"2.Beef(Cow):480 Tk Per Kg"<<endl;
    cout<<"3.Mutton(Goat):750 Tk Per Kg"<<endl;
    cout<<"4.Chicken(Boiler):180 Tk Per Kg"<<endl;
    cout<<"5.Chicken(Regular):350 Tk Per Kg"<<endl;
    cout<<"6.Fish(Elish):750 Tk Per Piece"<<endl;
    cout<<"7.Oil(Rupchanda):98 Tk Per Liter"<<endl;
    cout<<"8.Flour(Corn-Flour):45 Tk Per Kg"<<endl;
    cout<<"9.potato:20 Tk Per Kg"<<endl;
    cout<<"10.onion:50 Tk Per Kg"<<endl;
    cout<<"11.Chili(Green):40 Tk Per Kg"<<endl;
    cout<<"12.cucumber):60 Tk Per Kg"<<endl;
    cout<<"13.tomato:50 Tk Per Kg"<<endl;
    cout<<"14.Lemon:40 Tk (four piece)"<<endl;

    do
    {
        int id,quantity,a=65,b=480,c=750,d=180,e=350,f=750,g=98,h=45,i=20,j=50,k=40,l=60,m=50,n=40;

        cout<<"\n\nProduct ID: ";

        do

        {
        cin>>id;

        if(id<=0||id>14)

           {
              cout<<"Invalid id, Please Input 1,2,3,4,5,6,7,8,9,10,11,12,13 OR 14: ";
           }
        }

        while(id<=0||id>14);

        cout<<"Quantity: ";
        do

     {
        cin>>quantity;

        if(quantity<=0)
        {
            cout<<"Invalid Quantity, Please Input 1 OR More: ";
        }
     }

     while(quantity<=0);

     if(id==1)
    {
        total+=(a*quantity);
    }

    else if(id==2)
    {
        total+=(b*quantity);
    }

    else if(id==3)
    {
        total+=(c*quantity);
    }

     else if(id==4)
    {
        total+=(d*quantity);
    }

     else if(id==5)
    {
        total+=(e*quantity);
    }

     else if(id==6)
    {
        total+=(f*quantity);
    }

     else if(id==7)
    {
        total+=(g*quantity);
    }

     else if(id==8)
    {
        total+=(h*quantity);
    }

     else if(id==9)
    {
        total+=(i*quantity);
    }

     else if(id==10)
    {
        total+=(j*quantity);
    }

     else if(id==11)
    {
        total+=(k*quantity);
    }

     else if(id==12)
    {
        total+=(l*quantity);
    }

     else if(id==13)
    {
        total+=(m*quantity);
    }

    else
    {
        total+=(n*quantity);
    }

    cout<<"Do You Want To By More?\nInput Yes OR No: ";

    do

    {
        cin>>msg;
        Lower(msg);
        if(msg!="yes"&&msg!="no")
        {
            cout<<"Invalid Input, Please Input Yes OR No: ";
        }
    }

    while(msg!="yes"&&msg!="no");

    }

    while(msg=="yes");

    if(total>=1000)

    {
        cout<<"\n"<<endl;
        cout<<"                                                 Total Amount: "<<total<<" Tk"<<endl;
        cout<<"                                             Your Discount(5%): "<<(total*0.05)<<" Tk"<<endl;
        cout<<"                                            You Have To Pay Now: "<<(total-(total*0.05))<<" Tk"<<endl;
        cout<<"                                          Thank You For Visiting Our Shop"<<endl;
    }

    else
    {
        cout<<"\nYou Have To Pay: "<<total<<endl;
    }

    return 0;
}

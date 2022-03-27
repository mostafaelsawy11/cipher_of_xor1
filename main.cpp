#include <bits/stdc++.h>

using namespace std;
string xo (string message , char x )
{
    string dec = " ";
    string k ;
    for(int i = 0 ; i < message.length();i++) // function to make xor amessage with a string
    {
        k =   (x ^ message[i]);
        dec = k + dec ;
    }return dec ;
}

int main()
{
    string message,message_dec ;
    string choice ;


    char x ;
    cout << "ahla ya user ya habiby ."<< endl;


   while(true){
        cout << "you want 1-enc or 2-decor3-end ? " << endl ;     //chose what do you want to make
    cin >> choice ;

    if (choice == "1")
    {
        cout << "enter a message : "<<endl ;
        cin.ignore();
        getline(cin , message) ;
        cout << "enter a key :";
        cin >> x ;

        cout << xo(message , x) << endl ;
        for (int i = 0 ; i < message.size(); i++)
            cout << hex <<(int)message[i];
            cout<< endl;
}

else if (choice =="2" )
{
    cout << "enter a message dec : "<<endl ;
    cin.ignore();
    getline(cin,message_dec);
    cout << "enter a key :";
    cin >> x ;
    cout <<xo(message_dec,x)<< endl;
}
else if (choice == "3")
{
    cout << "out of programm";
    break ;

}
else
cout << "it is wrong ."<< endl ;
continue;

}


    return 0;
}

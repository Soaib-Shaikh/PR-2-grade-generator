#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter your marks (0-100): ";
    cin>>marks;

    char result = (marks >=90) ? 'A' : 
        (marks >= 80) ? 'B' : 
        (marks >=70) ? 'C' : 
        (marks >=60) ? 'D' : 'F';

        cout<<"Your Grade is " <<result <<"."<<endl;

        switch(result) 
        {
            case 'A': 
                 cout<<"Excellent Work!"<<endl;
                 break;
            case 'B': 
                 cout<<"Wll done."<<endl;
                 break;
            case 'C': 
                 cout<<"Good job."<<endl;
                 break;
            case 'D': 
                 cout<<"You passed, but you do better."<<endl;
                 break;
            default:
                cout<<"Sorry, you failed!"<<endl;
        } 

        if((marks>=90) || (marks>=80) || (marks>=70) || (marks>=60))
        {
            cout<<"Congratulations! You are eligible for the next level.";
        }
        else
        {
            cout<<"Please try again next time.";
        }

        

    return 0;
}
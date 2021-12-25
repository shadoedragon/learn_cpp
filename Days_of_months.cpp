#include <iostream>
using namespace std;
int main()
{
    int month;
    cout<<"Plz put in ur month: ";
    cin>>month;
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout<<"Has 31 days ORA!\n";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout<<"Has 30 days ZA WARUDO!\n";
            break;
        case 2:
            cout<<"Has 28 or 29 days NANI!\n";
            break;
        default:
            cout<<"U are a dummy YOU WROTE A MONTH THAT'S NOT EVEN A MONTH!!!\n";
    }
    return 0;
}
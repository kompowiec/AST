#include <iostream>
#include "text.h"
using namespace std;

int main()
{
    int choice;

    menu();

    for (;;)
    {
        cin >> choice;
        switch( choice )
        {
        case 1:
        	account();
            break;
        case 2:
        	nagroda();
            break;
        case 3:
        	poczta();
            break;
        case 4:
        	admin();
            break;
        case 5:
        	abonament();
            break;
        case 6:
            	telefon();
            break;
        case 7:
            	telefon();
            break;
        case 8:
        	uslugi();
            break;
        case 9:
            pogotowie();
            break;
        default:
            number();
        } //switch
    } //for
}

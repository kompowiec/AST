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
1;konto();
            break;
        case 2:
        	nagroda();
1;nagroda1();
2;nagroda2();
3;nagroda3();
4;nagroda4();
5;nagroda5();
6;nagroda6();
            break;
        case 3:
        	poczta();
            break;
        case 4:
        	admin();
1;admin1();
            break;
        case 5:
        	abonament();
1;TP();
2;train();
3;nonfree();
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
            neostrada();
1;poczta();
            break;
        default:
            return 0;
        } //switch
    } //for
}

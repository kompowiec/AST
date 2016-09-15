#include <iostream>
#include "text.h"
using namespace std;

int main()
{
    int choice;
    int choice2;
    menu();

    for (;;)
    {
cin >> choice;
switch( choice )
{
case 1:
account();
	2;konto();
        switch(choice2)
         {
         case 1:
	 doladowanie();
         break;
         case 2:
	 konto();
         break;
         case 3:
	 doladowanie();
         break;
         }
break;
case 2:
nagroda();
	1;nagroda1();
	2;nagroda2();
	3;nagroda3();
	4;nagroda4();
        switch(choice2)
         {
         case 1:
	 odbierz();	
	 	1;gotowka();
		2;gotowka();
		3;kasa();
	break;
         }
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
case 0:
pogotowie();
	1;ASTPR();
	cin.get()
	switch(choice2)
	{
	case 1:
	ill();
		1;przeziebienie();
		2;Grypa();
		3;ptasia();
		4;swinska();
	break;
	case 2:
	case 3:
	case 4:
	nein();
	break;
	}
break;
default:
	number();
            return 0;
        } //switch
    } //for
}

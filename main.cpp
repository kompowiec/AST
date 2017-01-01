#include <iostream>
#include "text.h"

int main(int argc, char const *argv[])
{
	int choice[2];
	menu(); //in every functios is text only.
	while(true)
	{
if (!(std::cin >> choice[0]))
   {
     std:: cerr<<"To nie jest liczba!";
       exit(0);
   }
		switch(choice[0])
		{
			case 1:
				account();
				std::cin >> choice[1];
				switch(choice[1])
				{
					case 1:
						checkaccount(); //powinien po wciśnięciu jeden przechodzić bezpośrednio do case 2
						break;
					case 2:
					konto();
					std::cin >> choice[1];
							switch(choice[1])
							{
							case 1:
							doladowanie();
							break;
							case 2:
							account();
							break;
							case 3:
							doladowanie();
							break;
							}
				}
				break;
			case 2:
				nagroda();
				std::cin >> choice[1];
						switch(choice[1]) 
						{
						case 1:
						nagroda1();
						break;
						case 2:
						nagroda2();
						break;
						case 3:
						nagroda3();
						break;
						case 4:
						nagroda4();
							switch(choice[2])
							{
							case 1:
							odbierz();	
							break;
							case 2:
							gotowka();
							break;
							case 3:
							gotowka();
							break;
							kasa();
							break;
							}
						break;
				case 5:
				nagroda5();
				break;
				case 6:
				nagroda6();
				break;
				}
			case 3:
				poczta();
			break;
			case 4:
				admin();
				std::cin >> choice[1];
					switch(choice[1])
					{
					case 1:
					admin1();
					break;
					}
			case 5:
				abonament();
				std::cin >> choice[1];
					switch(choice[1])
					{
					case 1:
					TP();
					break;
					case 2:
					train();
					break;
					case 3:
					nonfree();
					break;
				}
			case 6: case 7:
				telefon();
				break;
			case 8:
				uslugi();
				break;
			case 9:
				neostrada();
				std::cin >> choice[1];
					switch(choice[1])
					{
					case 1:
					poczta();
					break;
					}
			case 0:
				pogotowie();
				std::cin.get();
				ASTPR();
				std::cin >> choice[1];
				switch(choice[1])
				{
					case 1:
					ill();
					std::cin >> choice[1];
					break;
						switch(choice[1])
						{
						case 1:
						przeziebienie();
						break;
						case 2:
						Grypa();
						break;
						case 3:
						ptasia();
						break;
						case 4:
						swinska();
						break;
						}
					case 2: case 3: case 4:
					nein();
					break;
				}
				break;
		} // switch
	} // while
	return 0;
}

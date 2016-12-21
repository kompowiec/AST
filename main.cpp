#include <iostream>
#include "text.h"

int main(int argc, char const *argv[])
{
	int choice;
	int choice2;
	menu(); //in every functios is text only.
	while(true)
	{
if (!(std::cin >> choice))
   {
     std:: cerr<<"To nie jest liczba!";
       exit(0);
   }
		switch(choice)
		{
			case 1:
				account();
				std::cin >> choice2;
				switch(choice2)
				{
					case 1:
						doladowanie();
						break;
					case 2:
					konto();
					std::cin >> choice2;
							switch(choice2)
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
				std::cin >> choice2;
						switch(choice2)
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
							switch(choice2)
							{
							case 1:
							odbierz();	
							// 1
							gotowka();
							// 2
							gotowka();
							// 3
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
				std::cin >> choice2;
				break;
			case 4:
				admin();
				std::cin >> choice2;
				// 1
				admin1();
				break;
			case 5:
				abonament();
				std::cin >> choice2;
				// 1
				TP();
				// 2
				train();
				// 3
				nonfree();
				break;
			case 6: case 7:
				telefon();
				break;
			case 8:
				uslugi();
				break;
			case 9:
				neostrada();
				break;
			case 0:
				pogotowie();
				std::cin.get();
				ASTPR();
				std::cin >> choice2;
				switch(choice2)
				{
					case 1:
					ill();
					std::cin >> choice2;
					break;
						switch(choice2)
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
			default:
				number();
		} // switch
	} // while
	return 0;
}

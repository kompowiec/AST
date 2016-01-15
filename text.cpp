#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
void menu():
{
    cout << "Witamy w usłudze Automatycznego Systemu Telefonicznego. Oferujemy różne usługi:" << endl;
    cout << "Jeśli chcesz sprawdzić stan konta, 	wciśnij 1." << endl;
    cout << "Jeśli wygrałeś miśka i chcesz odebrać nagrodę, 	wciśnij 2." << endl;
    cout << "Jeśli nie masz poczty głosowej, 	wciśnij 3." << endl;
    cout << "Jeśli jesteś administratorem Nonsensopedii, 	wciśnij 4." << endl;
    cout << "Jeśli płacisz abonament radiowo-telewizyjny, 	wciśnij 5." << endl;
    cout << "Jeśli trzymasz w ręce telefon, 	wciśnij 6." << endl;
    cout << "Jeśli chcesz zagrać w grę, 	wciśnij 7." << endl;
    cout << "Jeśli zamierasz zadzwonić na 0-800, 	wciśnij 8." << endl;
    cout << "Jeżeli korzystasz z Neostrady TP, 	wciśnij 9." << endl;
    cout << "Jeśli chcesz zadzwonić na pogotowie, 	wciśnij 0." << endl;
    cout << "Jeśli chcesz urwać telefon, 	urwij telefon." << endl;
    cout << "Jeśli chcesz wrócić do głównego menu, 	wciśnij gwiazdkę (*). " << endl;
}
void account(): //1
{
cout << "Masz 3,44 zł ważne do 2015-11-2 23:59. UWAGA! Usługa Automatycznego Systemu Telefonicznego jest płatna." << endl;
cout << "Aby sprawdzić ponownie stan konta, 	wciśnij 1." << endl;
cout << "Jeśli chcesz doładować swoje konto, 	wciśnij 2." << endl;
cout << "Chcesz wrócić do głównego menu, 	wciśnij gwiazdkę (*). " << endl;    
}

void nagroda(): //2
{
cout << "Aby odebrać nagrodę, musisz wybrać wzór miśka do odebrania." << endl;
cout << "Czarny, uszy i kończyny srebrne, 20 pseudopalców, język szary, oczy brązowe, 	wciśnij 1." << endl;
cout << "Brązowy, uszy i kończyny beżowe, 20 pseudopalców, język złoty, oczy zielone, 	wciśnij 2." << endl;
cout << "Zielony, uszy i kończyny zielone, 16 pseudopalców, język zielony, oczy czarne, 	wciśnij 3." << endl;
cout << "Fioletowy, uszy i kończyny różowe, 20 pseudopalców, język błękitny, oczy białe, 	wciśnij 4." << endl;
cout << "Czerwony, uszy i kończyny zielone, 21 pseudopalców, język różowy, oczy niebieskie, 	wciśnij 5." << endl;
cout << "Błękitny, uszy i kończyny błękitne, 4 kopyta i 2 skrzydełka, język czerwony, ogon i włosy tęczowe, 	wciśnij 6." << endl;
cout << "Powrotny, do głównego menu 	wciśnij gwiazdkę (*).  " << endl;
}

	void nagroda1(): //2-1
	{
	cout << "Nagroda nie jest dostępna w ofercie: Miś czarny, uszy i kończyny srebrne, 20 pseudopalców, język szary, oczy brązowe." << endl;
	cout << "Powód: Miś czarny, uszy i kończyny srebrne, 20 pseudopalców, język szary, oczy brązowe – brak w magazynie." << endl;
	cout << "Wybierz inną nagrodę." << endl;
	}

	void nagroda2(): //2-2
	{
	cout << "Nagroda nie jest dostępna w ofercie: Miś Brązowy, uszy i kończyny beżowe, 20 pseudopalców, język złoty, oczy zielone." << endl;
	cout << "Powód: Miś Brązowy, uszy i kończyny beżowe, 20 pseudopalców, język złoty, oczy zielone – brak w magazynie." << endl;
	cout << "Wybierz inną nagrodę. " << endl;
	}

	void nagroda3(): //2-3
	{
	cout << "Nagroda nie jest dostępna w ofercie: Miś Zielony, uszy i kończyny zielone, 16 pseudopalców, język zielony, oczy czarne." << endl;
	cout << "Powód: Miś Zielony, uszy i kończyny zielone, 16 pseudopalców, język zielony, oczy czarne – niski popyt na marsjańskie miśki." << endl;
	cout << "Wybierz inną nagrodę. 	" << endl;
	}
	void nagroda4(): //2-4
	{
	cout << "Nagroda jest dostępna w ofercie: Miś fioletowy, uszy i kończyny różowe, 20 pseudopalców, język błękitny, oczy białe." << endl;
	cout << "Odbierz. " << endl; //2-4-1
	}
		void odbierz(): //2-4-1-1
		{
		cout << "Wybierz sposób płatności:" << endl;
		cout << "Gotówka" << endl;
		cout << "Karta" << endl;
		cout << "Przez telefon" << endl;
		cout << "Wróć do głównego menu." << endl;	
		}
			void gotowka(): //2-4-1-1 and 2-4-1-2
			{
			cout << "Myslałeś, że zrobimy to przez telefon. Takie rzeczy należy załatwić inną drogą. Wciśnij 1." << endl;
			}

			void kasa(): //2-3-1-1-3
			{
			cout << "Nie masz wystarczających środków na koncie." << endl;
			cout << "Aby sprawdzić stan konta, 	wciśnij 1." << endl;
			cout << "Aby doładować konto, 	wciśnij 2." << endl;
			cout << "Aby powrócić do głównego menu, 	wciśnij gwiazdkę (*). " << endl;	
			}
	void nagroda5():
	{
	cout << "Nagroda nie jest dostępna w ofercie: Miś Czerwony, uszy i kończyny zielone, 21 pseudopalców, język różowy, oczy niebieskie." << endl;
	cout << "Powód: Miś Czerwony, uszy i kończyny zielone, 21 pseudopalców, język różowy, oczy niebieskie – źle wyprodukowany misiek." << endl;
	cout << "Wybierz inną nagrodę. " << endl;
	}
	void nagroda6():
	{
	cout << "Nagroda nie jest dostępna w ofercie: Miś Błękitny, uszy i kończyny błękitne, 4 kopyta i 2 skrzydełka, język czerwony, ogon i włosy tęczowe." << endl;
	cout << "Powód: Miś Błękitny, uszy i kończyny błękitne, 4 kopyta i 2 skrzydełka, język czerwony, ogon i włosy tęczowe – przecież to nie miś, tylko kucyk. Powołaliśmy specjalną komisję, aby sprzwdzić czemu kucyk się pojawił" << endl;
	cout << "Wybierz inną nagrodę. " << endl;
	}
void poczta(): //3
{
cout << " Usługa jest chwilowo niedostępna." << endl;
cout << "Wróć do głównego menu." << endl;
cout << "Aktywuj usługę.  " << endl;
}

void admin(): //4
{
cout << "Potwierdź że jesteś administratorem Nonsensopedii:" << endl;
cout << "Jeśli znasz wszystkich współadministratorów, 	wciśnij 1." << endl;
cout << "Jeśli ich wszystkich nie znasz, 	wciśnij gwiazdkę (*). " << endl;
}

void abonament(): //5
{
   cout << "Drogi abonencie! Płacisz za abonament i za to chcieliśmy ci to nagrodzić. Wybierz swoją nagrodę:" << endl;
cout << "Darmowy wstęp do budynku Telewizji Polskiej przy ul. Woronicza, 	wciśnij 1." << endl;
cout << "Darmowy występ w Teleekspresie jako pociąg, 	wciśnij 2." << endl;
cout << "Darmowy abonament przez miesiąc, 	wciśnij 3." << endl;
cout << "Powrót do głównego menu, 	wciśnij gwiazdkę (*).  " << endl;
}
	void TP(): //5-1
	{
	cout << "Telewizja Polska nie wyraża na to zgody, ponieważ darmowy wstęp ma tylko Maciek z Klanu." << endl;	
	}

	void train(): //5-2
	{
	cout << "Telewizja Polska nie wyraża na to zgody, ponieważ zbyt wiele osób zatrudniło się jako pociąg w Teleekspresie i nie ma więcej miejsca." << endl; 	
	}

	void nonfree(): //5-3
	{
	cout << "Telewizja Polska nie wyraża na to zgody, ponieważ zarabia tylko z abonamentu, a każda strata może dopuścić do utraty kilku odcinków serialu Klan przez brak zapłat na rehabilitację Maćka z Klanu." << endl; 	
	}
void telefon(): //6 and 7
{
cout << "Zagraj w grę: Telefon." << endl;
cout << "Aby zagrać, 	wciśnij gwiazdkę (*)." << endl;
cout << "Aby wrócić do głównego menu, 	wciśnij gwiazdkę (*)." << endl;
}

void uslugi(): //8
{
cout << "O, NIE! Takich usług nie oferujemy. Zablokowaliśmy Ci dostęp do wszystkich numerów zaczynających się od 0-800 880. Wróć do głównego menu." << endl;
}

void neostrada(): //9
{
cout << "Wypróbuj nową Neostradę 100 GB/s." << endl;
cout << "Aby wypróbować, 	wciśnij 1." << endl;
cout << "Aby wrócić do głównego menu, 	wciśnij gwiazdkę (*). " << endl;
}
//9-1
//void poczta():

void pogotowie(): //0
{
cout << "ŁĄCZENIE SIĘ Z POGOTOWIEM... PROSZĘ CZEKAĆ!" << endl;
cout << "Jeśli chcesz utrzymać połączenie, 	czekaj jeszcze kilka minut." << endl;
cout << "Jeśli nie chcesz czekać, 	zadzwoń do 997." << endl;
}

	void ASTPR(): //0-1
	{
	cout << "Witamy w Automatycznym Systemie Telefonicznym Pogotowia Ratunkowego. W czym możemy pomóc?" << endl;
	cout << "Jeśli jesteś chory na przeziębienie lub grypę, 	wciśnij 1." << endl;
	cout << "Jeśli złamałeś jedną ze swoich kończyn, 	wciśnij 2." << endl;
	cout << "Jeśli masz chorobę zakaźną, 	wciśnij 3." << endl;
	cout << "Aby przełączyć na 112, 	wciśnij 4. " << endl;
	}

		void ill(): //0-1-1
		{
		cout << "Na co jesteś chory?" << endl;
		cout << "Przeziębienie, 	wciśnij 1." << endl;
		cout << "Grypa sezonowa, 	wciśnij 2." << endl;
		cout << "Ptasia grypa, 	wciśnij 3." << endl;
		cout << "Świńska grypa, 	wciśnij 4." << endl;
		}

			void przeziebienie(): //0-1-1-1
			{
			cout <<"Trwa wypisywanie recepty... GOTOWE!" << endl;
			cout <<"Recepta:" << endl;
			cout <<"Chusteczki A... Psik – 10 razy dziennie po 3 chusteczki" << endl;
			cout <<"Fervex – 4 razy dziennie po 8 saszetek" << endl;
			cout <<"Apap Na to jest za późno, więc Apap EXTRA – 2 razy dziennie po 3 tabletki" << endl;
			cout <<"Łóżko z pościelą (miejsce twojego tymczasowego pobytu) " << endl;
			cout <<"Refundacja: Do decyzji NFZ" << endl;
			cout <<"Dalej" << endl;
			}

			void Grypa(): //0-1-1-2
			{
			cout <<"Trwa wypisywanie recepty... GOTOWE" << endl;!
			cout <<"Recepta" << endl;:
			cout <<"Gripex – 2 razy dziennie po 3 tabletki" << endl;
			cout <<"Apap Na to jest za późno, więc Apap EXTRA – 3 razy dziennie po 2 tabletki" << endl;
			cout <<"Ciepły rosół (z makaronem) – razy dziennie po" << endl;
			cout <<"Łóżko z pościelą (miejsce twojego tymczasowego pobytu) " << endl;
			cout <<"Refundacja: Do decyzji NFZ" << endl;
			cout <<"Dalej 	" << endl;
			}

			void ptasia(): //0-1-1-3
			{
			cout <<"Trwa wypisywanie recepty... GOTOWE!" << endl;
			cout <<"Recepta:" << endl;
			cout <<"Tweetolum Forte – 2 razy dziennie po 6 tweetolów" << endl;
			cout <<"Klatka antytoksyczna (miejsce twojego tymczasowego pobytu)" << endl;
			cout <<"Facebookol – 13 razy dziennie po 5 fanpejdżów " << endl;
			cout <<"Refundacja: Do decyzji NFZ" << endl;
			cout <<"Dalej 	" << endl;
			}
			
			void swinska(): //0-1-1-4
			{
			cout <<"Trwa wypisywanie recepty... GOTOWE!" << endl;
			cout <<"Recepta:" << endl;
			cout <<"Chrumkosol – 3 razy dziennie po 8 chrumka" << endl;ń
			cout <<"Świnkum Extra – 6 razy dziennie po 5 oświnie" << endl;ń
			cout <<"Klatka antytoksyczna (miejsce twojego tymczasowego pobytu)" << endl;
			cout <<"Refundacja: Do decyzji NFZ" << endl;
			cout <<"Dalej" << endl;
			}

	void nein():
	{
	cout << "Myslałeś, że zrobimy to przez telefon. Takie rzeczy należy załatwić inną drogą. Jeśli chcesz wybrać inną chorobę, wciśnij 1." << endl; 
	{


void number():
{
cout << "Wpisz liczbę" << endl;
}

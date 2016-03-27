#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

	void menu()
{
    printf( "Witamy w usłudze Automatycznego Systemu Telefonicznego. Oferujemy różne usługi;" );
    printf( "Jeśli chcesz sprawdzić stan konta, 	wciśnij 1." );
    printf( "Jeśli wygrałeś miśka i chcesz odebrać nagrodę, 	wciśnij 2." );
    printf( "Jeśli nie masz poczty głosowej, 	wciśnij 3." );
    printf( "Jeśli jesteś administratorem Nonsensopedii, 	wciśnij 4." );
    printf( "Jeśli płacisz abonament radiowo-telewizyjny, 	wciśnij 5." );
    printf( "Jeśli trzymasz w ręce telefon, 	wciśnij 6." );
    printf( "Jeśli chcesz zagrać w grę, 	wciśnij 7." );
    printf( "Jeśli zamierasz zadzwonić na 0-800, 	wciśnij 8." );
    printf( "Jeżeli korzystasz z Neostrady TP, 	wciśnij 9." );
    printf( "Jeśli chcesz zadzwonić na pogotowie, 	wciśnij 0." );
    printf( "Jeśli chcesz urwać telefon, 	urwij telefon." );
    printf( "Jeśli chcesz wrócić do głównego menu, 	wciśnij gwiazdkę (*). " );
}
void account() //1
{
printf( "Masz 3,44 zł ważne do 2015-11-2 23;59. UWAGA! Usługa Automatycznego Systemu Telefonicznego jest płatna." );
printf( "Aby sprawdzić ponownie stan konta, 	wciśnij 1." );
printf( "Jeśli chcesz doładować swoje konto, 	wciśnij 2." );
printf( "Chcesz wrócić do głównego menu, 	wciśnij gwiazdkę (*). " );    
}

void nagroda() //2
{
printf( "Aby odebrać nagrodę, musisz wybrać wzór miśka do odebrania." );
printf( "Czarny, uszy i kończyny srebrne, 20 pseudopalców, język szary, oczy brązowe, 	wciśnij 1." );
printf( "Brązowy, uszy i kończyny beżowe, 20 pseudopalców, język złoty, oczy zielone, 	wciśnij 2." );
printf( "Zielony, uszy i kończyny zielone, 16 pseudopalców, język zielony, oczy czarne, 	wciśnij 3." );
printf( "Fioletowy, uszy i kończyny różowe, 20 pseudopalców, język błękitny, oczy białe, 	wciśnij 4." );
printf( "Czerwony, uszy i kończyny zielone, 21 pseudopalców, język różowy, oczy niebieskie, 	wciśnij 5." );
printf( "Błękitny, uszy i kończyny błękitne, 4 kopyta i 2 skrzydełka, język czerwony, ogon i włosy tęczowe, 	wciśnij 6." );
printf( "Powrotny, do głównego menu 	wciśnij gwiazdkę (*).  " );
}

	void nagroda1() //2-1
	{
	printf( "Nagroda nie jest dostępna w ofercie; Miś czarny, uszy i kończyny srebrne, 20 pseudopalców, język szary, oczy brązowe." );
	printf( "Powód; Miś czarny, uszy i kończyny srebrne, 20 pseudopalców, język szary, oczy brązowe – brak w magazynie." );
	printf( "Wybierz inną nagrodę." );
	}

	void nagroda2() //2-2
	{
	printf( "Nagroda nie jest dostępna w ofercie; Miś Brązowy, uszy i kończyny beżowe, 20 pseudopalców, język złoty, oczy zielone." );
	printf( "Powód; Miś Brązowy, uszy i kończyny beżowe, 20 pseudopalców, język złoty, oczy zielone – brak w magazynie." );
	printf( "Wybierz inną nagrodę. " );
	}

	void nagroda3() //2-3
	{
	printf( "Nagroda nie jest dostępna w ofercie; Miś Zielony, uszy i kończyny zielone, 16 pseudopalców, język zielony, oczy czarne." );
	printf( "Powód; Miś Zielony, uszy i kończyny zielone, 16 pseudopalców, język zielony, oczy czarne – niski popyt na marsjańskie miśki." );
	printf( "Wybierz inną nagrodę. 	" );
	}
	void nagroda4() //2-4
	{
	printf( "Nagroda jest dostępna w ofercie; Miś fioletowy, uszy i kończyny różowe, 20 pseudopalców, język błękitny, oczy białe." );
	printf( "Odbierz. " ); //2-4-1
	}
		void odbierz() //2-4-1-1
		{
		printf( "Wybierz sposób płatności;" );
		printf( "Gotówka" );
		printf( "Karta" );
		printf( "Przez telefon" );
		printf( "Wróć do głównego menu." );	
		}
			void gotowka() //2-4-1-1 and 2-4-1-2
			{
			printf( "Myslałeś, że zrobimy to przez telefon. Takie rzeczy należy załatwić inną drogą. Wciśnij 1." );
			}

			void kasa() //2-3-1-1-3
			{
			printf( "Nie masz wystarczających środków na koncie." );
			printf( "Aby sprawdzić stan konta, 	wciśnij 1." );
			printf( "Aby doładować konto, 	wciśnij 2." );
			printf( "Aby powrócić do głównego menu, 	wciśnij gwiazdkę (*). " );	
			}
	void nagroda5()
	{
	printf( "Nagroda nie jest dostępna w ofercie; Miś Czerwony, uszy i kończyny zielone, 21 pseudopalców, język różowy, oczy niebieskie." );
	printf( "Powód; Miś Czerwony, uszy i kończyny zielone, 21 pseudopalców, język różowy, oczy niebieskie – źle wyprodukowany misiek." );
	printf( "Wybierz inną nagrodę. " );
	}
	void nagroda6()
	{
	printf( "Nagroda nie jest dostępna w ofercie; Miś Błękitny, uszy i kończyny błękitne, 4 kopyta i 2 skrzydełka, język czerwony, ogon i włosy tęczowe." );
	printf( "Powód; Miś Błękitny, uszy i kończyny błękitne, 4 kopyta i 2 skrzydełka, język czerwony, ogon i włosy tęczowe – przecież to nie miś, tylko kucyk. Powołaliśmy specjalną komisję, aby sprzwdzić czemu kucyk się pojawił" );
	printf( "Wybierz inną nagrodę. " );
	}
void poczta() //3
{
printf( " Usługa jest chwilowo niedostępna." );
printf( "Wróć do głównego menu." );
printf( "Aktywuj usługę.  " );
}

void admin() //4
{
printf( "Potwierdź że jesteś administratorem Nonsensopedii;" );
printf( "Jeśli znasz wszystkich współadministratorów, 	wciśnij 1." );
printf( "Jeśli ich wszystkich nie znasz, 	wciśnij gwiazdkę (*). " );
}

void abonament() //5
{
   printf( "Drogi abonencie! Płacisz za abonament i za to chcieliśmy ci to nagrodzić. Wybierz swoją nagrodę;" );
printf( "Darmowy wstęp do budynku Telewizji Polskiej przy ul. Woronicza, 	wciśnij 1." );
printf( "Darmowy występ w Teleekspresie jako pociąg, 	wciśnij 2." );
printf( "Darmowy abonament przez miesiąc, 	wciśnij 3." );
printf( "Powrót do głównego menu, 	wciśnij gwiazdkę (*).  " );
}
	void TP() //5-1
	{
	printf( "Telewizja Polska nie wyraża na to zgody, ponieważ darmowy wstęp ma tylko Maciek z Klanu." );	
	}

	void train() //5-2
	{
	printf( "Telewizja Polska nie wyraża na to zgody, ponieważ zbyt wiele osób zatrudniło się jako pociąg w Teleekspresie i nie ma więcej miejsca." ); 	
	}

	void nonfree() //5-3
	{
	printf( "Telewizja Polska nie wyraża na to zgody, ponieważ zarabia tylko z abonamentu, a każda strata może dopuścić do utraty kilku odcinków serialu Klan przez brak zapłat na rehabilitację Maćka z Klanu." ); 	
	}
void telefon() //6 and 7
{
printf( "Zagraj w grę; Telefon." );
printf( "Aby zagrać, 	wciśnij gwiazdkę (*)." );
printf( "Aby wrócić do głównego menu, 	wciśnij gwiazdkę (*)." );
}

void uslugi() //8
{
printf( "O, NIE! Takich usług nie oferujemy. Zablokowaliśmy Ci dostęp do wszystkich numerów zaczynających się od 0-800 880. Wróć do głównego menu." );
}

void neostrada() //9
{
printf( "Wypróbuj nową Neostradę 100 GB/s." );
printf( "Aby wypróbować, 	wciśnij 1." );
printf( "Aby wrócić do głównego menu, 	wciśnij gwiazdkę (*). " );
}
//9-1
//void poczta();

void pogotowie() //0
{
printf( "ŁĄCZENIE SIĘ Z POGOTOWIEM... PROSZĘ CZEKAĆ!" );
printf( "Jeśli chcesz utrzymać połączenie, 	czekaj jeszcze kilka minut." );
printf( "Jeśli nie chcesz czekać, 	zadzwoń do 997." );
}

	void ASTPR() //0-1
	{
	printf( "Witamy w Automatycznym Systemie Telefonicznym Pogotowia Ratunkowego. W czym możemy pomóc?" );
	printf( "Jeśli jesteś chory na przeziębienie lub grypę, 	wciśnij 1." );
	printf( "Jeśli złamałeś jedną ze swoich kończyn, 	wciśnij 2." );
	printf( "Jeśli masz chorobę zakaźną, 	wciśnij 3." );
	printf( "Aby przełączyć na 112, 	wciśnij 4. " );
	}

		void ill() //0-1-1
		{
		printf( "Na co jesteś chory?" );
		printf( "Przeziębienie, 	wciśnij 1." );
		printf( "Grypa sezonowa, 	wciśnij 2." );
		printf( "Ptasia grypa, 	wciśnij 3." );
		printf( "Świńska grypa, 	wciśnij 4." );
		}

			void przeziebienie() //0-1-1-1
			{
			printf( "Trwa wypisywanie recepty... GOTOWE!" );
			printf( "Chusteczki A... Psik – 10 razy dziennie po 3 chusteczki" );
			printf( "Fervex – 4 razy dziennie po 8 saszetek" );
			printf( "Apap Na to jest za późno, więc Apap EXTRA – 2 razy dziennie po 3 tabletki" );
			printf( "Łóżko z pościelą (miejsce twojego tymczasowego pobytu) " );
			printf( "Refundacja; Do decyzji NFZ" );
			printf( "Dalej" );
			}

			void Grypa() //0-1-1-2
			{
			printf( "Trwa wypisywanie recepty... GOTOWE" );!
			printf( "Gripex – 2 razy dziennie po 3 tabletki" );
			printf( "Apap Na to jest za późno, więc Apap EXTRA – 3 razy dziennie po 2 tabletki" );
			printf( "Ciepły rosół (z makaronem) – razy dziennie po" );
			printf( "Łóżko z pościelą (miejsce twojego tymczasowego pobytu) " );
			printf( "Refundacja; Do decyzji NFZ" );
			printf( "Dalej 	" );
			}

			void ptasia() //0-1-1-3
			{
			printf( "Trwa wypisywanie recepty... GOTOWE!" );
			printf( "Tweetolum Forte – 2 razy dziennie po 6 tweetolów" );
			printf( "Klatka antytoksyczna (miejsce twojego tymczasowego pobytu)" );
			printf( "Facebookol – 13 razy dziennie po 5 fanpejdżów " );
			printf( "Refundacja; Do decyzji NFZ" );
			printf( "Dalej 	" );
			}
			
			void swinska() //0-1-1-4
			{
			printf( "Trwa wypisywanie recepty... GOTOWE!" );
			printf( "Chrumkosol – 3 razy dziennie po 8 chrumka" );
			printf( "Świnkum Extra – 6 razy dziennie po 5 oświnie" );
			printf( "Klatka antytoksyczna (miejsce twojego tymczasowego pobytu)" );
			printf( "Refundacja; Do decyzji NFZ" );
			printf( "Dalej" );
			}

	void nein()
	{
	printf( "Myslałeś, że zrobimy to przez telefon. Takie rzeczy należy załatwić inną drogą. Jeśli chcesz wybrać inną chorobę, wciśnij 1." ); 
	}

void number()
{
printf( "Wpisz liczbę" );
}

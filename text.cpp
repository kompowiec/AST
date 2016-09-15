#include <stdio.h>
using namespace std;

void ClrScr(){
  printf("\033[2J"); // clear screen
  printf("\033[0;0f"); // set cursor in left, up 
}

void menu()
{
	printf( "Witamy w usłudze Automatycznego Systemu Telefonicznego. Oferujemy różne usługi;\n" );
	printf( "Jeśli chcesz sprawdzić stan konta, 	wciśnij 1.\n" );
	printf( "Jeśli wygrałeś miśka i chcesz odebrać nagrodę, 	wciśnij 2.\n" );
	printf( "Jeśli nie masz poczty głosowej, 	wciśnij 3.\n" );
	printf( "Jeśli jesteś administratorem Nonsensopedii, 	wciśnij 4.\n" );
	printf( "Jeśli płacisz abonament radiowo-telewizyjny, 	wciśnij 5.\n" );
	printf( "Jeśli trzymasz w ręce telefon, 	wciśnij 6.\n" );
	printf( "Jeśli chcesz zagrać w grę, 	wciśnij 7.\n" );
	printf( "Jeśli zamierasz zadzwonić na 0-800, 	wciśnij 8.\n" );
	printf( "Jeżeli korzystasz z Neostrady TP, 	wciśnij 9.\n" );
	printf( "Jeśli chcesz zadzwonić na pogotowie, 	wciśnij 0.\n" );
	printf( "Jeśli chcesz urwać telefon, 	urwij telefon.\n" );
	printf( "Jeśli chcesz wrócić do głównego menu, 	wciśnij gwiazdkę (*). \n" );
}
void account() //1
{
	printf( "Masz 3,44 zł ważne do 2015-11-2 23;59. UWAGA! Usługa Automatycznego Systemu Telefonicznego jest płatna.\n" );
	printf( "Aby sprawdzić ponownie stan konta, 	wciśnij 1.\n" );
	printf( "Jeśli chcesz doładować swoje konto, 	wciśnij 2.\n" );
	printf( "Chcesz wrócić do głównego menu, 	wciśnij gwiazdkę (*). \n" );    
}
void konto() //1-2
{
	printf( "Wybierz kod kuponu:" );
	printf( "2940-12032-29236-23488-2388" );
	printf( "9357-38569-37567-47568-9376" );
	printf( "0800-880ZA-DZWOŃ-TERAZ-!!!!" );
}

void doladowanie() //1-2-1 or 1-2-3
{ //1-2-2 wraca do 1
;
	printf( "0Kod kuponu został już użyty lub jest nieprawidłowy." );
	printf( "0Aby wybrać kod kuponu jeszcze raz, 	wciśnij 1." );
	printf( "Aby wrócić do głównego menu, 	wciśnij gwiazdkę (*). " );
}

void nagroda() //2
{
	printf( "Aby odebrać nagrodę, musisz wybrać wzór miśka do odebrania.\n" );
	printf( "Czarny, uszy i kończyny srebrne, 20 pseudopalców, język szary, oczy brązowe, 	wciśnij 1.\n" );
	printf( "Brązowy, uszy i kończyny beżowe, 20 pseudopalców, język złoty, oczy zielone, 	wciśnij 2.\n" );
	printf( "Zielony, uszy i kończyny zielone, 16 pseudopalców, język zielony, oczy czarne, 	wciśnij 3.\n" );
	printf( "Fioletowy, uszy i kończyny różowe, 20 pseudopalców, język błękitny, oczy białe, 	wciśnij 4.\n" );
	printf( "Czerwony, uszy i kończyny zielone, 21 pseudopalców, język różowy, oczy niebieskie, 	wciśnij 5.\n" );
	printf( "Błękitny, uszy i kończyny błękitne, 4 kopyta i 2 skrzydełka, język czerwony, ogon i włosy tęczowe, 	wciśnij 6.\n" );
	printf( "Powrotny, do głównego menu 	wciśnij gwiazdkę (*).  \n" );
}

void nagroda1() //2-1
{
	printf( "Nagroda nie jest dostępna w ofercie; Miś czarny, uszy i kończyny srebrne, 20 pseudopalców, język szary, oczy brązowe.\n" );
	printf( "Powód; Miś czarny, uszy i kończyny srebrne, 20 pseudopalców, język szary, oczy brązowe – brak w magazynie.\n" );
	printf( "Wybierz inną nagrodę.\n" );
}

void nagroda2() //2-2
{
	printf( "Nagroda nie jest dostępna w ofercie; Miś Brązowy, uszy i kończyny beżowe, 20 pseudopalców, język złoty, oczy zielone.\n" );
	printf( "Powód; Miś Brązowy, uszy i kończyny beżowe, 20 pseudopalców, język złoty, oczy zielone – brak w magazynie.\n" );
	printf( "Wybierz inną nagrodę. \n" );
}

void nagroda3() //2-3
{
	printf( "Nagroda nie jest dostępna w ofercie; Miś Zielony, uszy i kończyny zielone, 16 pseudopalców, język zielony, oczy czarne.\n" );
	printf( "Powód; Miś Zielony, uszy i kończyny zielone, 16 pseudopalców, język zielony, oczy czarne – niski popyt na marsjańskie miśki.\n" );
	printf( "Wybierz inną nagrodę. 	\n" );
}
void nagroda4() //2-4
{
	printf( "Nagroda jest dostępna w ofercie; Miś fioletowy, uszy i kończyny różowe, 20 pseudopalców, język błękitny, oczy białe.\n" );
	printf( "Odbierz. \n" ); //2-4-1
}
void odbierz() //2-4-1-1
{
	printf( "Wybierz sposób płatności;\n" );
	printf( "Gotówka\n" );
	printf( "Karta\n" );
	printf( "Przez telefon\n" );
	printf( "Wróć do głównego menu.\n" );	
}
void gotowka() //2-4-1-1 and 2-4-1-2
{
	printf( "Myslałeś, że zrobimy to przez telefon. Takie rzeczy należy załatwić inną drogą. Wciśnij 1.\n" );
}

void kasa() //2-3-1-1-3
{
	printf( "Nie masz wystarczających środków na koncie.\n" );
	printf( "Aby sprawdzić stan konta, 	wciśnij 1.\n" );
	printf( "Aby doładować konto, 	wciśnij 2.\n" );
	printf( "Aby powrócić do głównego menu, 	wciśnij gwiazdkę (*). \n" );	
}
void nagroda5()
{
	printf( "Nagroda nie jest dostępna w ofercie; Miś Czerwony, uszy i kończyny zielone, 21 pseudopalców, język różowy, oczy niebieskie.\n" );
	printf( "Powód; Miś Czerwony, uszy i kończyny zielone, 21 pseudopalców, język różowy, oczy niebieskie – źle wyprodukowany misiek.\n" );
	printf( "Wybierz inną nagrodę. \n" );
}
void nagroda6()
{
	printf( "Nagroda nie jest dostępna w ofercie; Miś Błękitny, uszy i kończyny błękitne, 4 kopyta i 2 skrzydełka, język czerwony, ogon i włosy tęczowe.\n" );
	printf( "Powód; Miś Błękitny, uszy i kończyny błękitne, 4 kopyta i 2 skrzydełka, język czerwony, ogon i włosy tęczowe – przecież to nie miś, tylko kucyk. Powołaliśmy specjalną komisję, aby sprzwdzić czemu kucyk się pojawił\n" );
	printf( "Wybierz inną nagrodę. \n" );
}
void poczta() //3
{
	printf( " Usługa jest chwilowo niedostępna.\n" );
	printf( "Wróć do głównego menu.\n" );
	printf( "Aktywuj usługę.  \n" );
}

void admin() //4
{
	printf( "Potwierdź że jesteś administratorem Nonsensopedii;\n" );
	printf( "Jeśli znasz wszystkich współadministratorów, 	wciśnij 1.\n" );
	printf( "Jeśli ich wszystkich nie znasz, 	wciśnij gwiazdkę (*). \n" );
}

void admin1() //4-1
{
printf( "Niestety, nie możemy potwierdzić czy jesteś administratorem, czy nie. Wróć do głównego menu. \n" );
}

void abonament() //5
{
	printf( "Drogi abonencie! Płacisz za abonament i za to chcieliśmy ci to nagrodzić. Wybierz swoją nagrodę;\n" );
	printf( "Darmowy wstęp do budynku Telewizji Polskiej przy ul. Woronicza, 	wciśnij 1.\n" );
	printf( "Darmowy występ w Teleekspresie jako pociąg, 	wciśnij 2.\n" );
	printf( "Darmowy abonament przez miesiąc, 	wciśnij 3.\n" );
	printf( "Powrót do głównego menu, 	wciśnij gwiazdkę (*).  \n" );
}
void TP() //5-1
{
	printf( "Telewizja Polska nie wyraża na to zgody, ponieważ darmowy wstęp ma tylko Maciek z Klanu.\n" );	
}

void train() //5-2
{
	printf( "Telewizja Polska nie wyraża na to zgody, ponieważ zbyt wiele osób zatrudniło się jako pociąg w Teleekspresie i nie ma więcej miejsca.\n" ); 	
}

void nonfree() //5-3
{
	printf( "Telewizja Polska nie wyraża na to zgody, ponieważ zarabia tylko z abonamentu, a każda strata może dopuścić do utraty kilku odcinków serialu Klan przez brak zapłat na rehabilitację Maćka z Klanu.\n" ); 	
}
void telefon() //6 and 7
{
	printf( "Zagraj w grę; Telefon.\n" );
	printf( "Aby zagrać, 	wciśnij gwiazdkę (*).\n" );
	printf( "Aby wrócić do głównego menu, 	wciśnij gwiazdkę (*).\n" );
}

void uslugi() //8
{
	printf( "O, NIE! Takich usług nie oferujemy. Zablokowaliśmy Ci dostęp do wszystkich numerów zaczynających się od 0-800 880. Wróć do głównego menu.\n" );
}

void neostrada() //9
{
	printf( "Wypróbuj nową Neostradę 100 GB/s.\n" );
	printf( "Aby wypróbować, 	wciśnij 1.\n" );
	printf( "Aby wrócić do głównego menu, 	wciśnij gwiazdkę (*). \n" );
}
//9-1
//void poczta();

void pogotowie() //0
{
	printf( "ŁĄCZENIE SIĘ Z POGOTOWIEM... PROSZĘ CZEKAĆ!\n" );
	printf( "Jeśli chcesz utrzymać połączenie, 	czekaj jeszcze kilka minut.\n" );
	printf( "Jeśli nie chcesz czekać, 	zadzwoń do 997.\n" );
	}
	
	void ASTPR() //0-1
{
	printf( "Witamy w Automatycznym Systemie Telefonicznym Pogotowia Ratunkowego. W czym możemy pomóc?\n" );
	printf( "Jeśli jesteś chory na przeziębienie lub grypę, 	wciśnij 1.\n" );
	printf( "Jeśli złamałeś jedną ze swoich kończyn, 	wciśnij 2.\n" );
	printf( "Jeśli masz chorobę zakaźną, 	wciśnij 3.\n" );
	printf( "Aby przełączyć na 112, 	wciśnij 4. \n" );
	}

void ill() //0-1-1
{
	printf( "Na co jesteś chory?\n" );
	printf( "Przeziębienie, 	wciśnij 1.\n" );
	printf( "Grypa sezonowa, 	wciśnij 2.\n" );
	printf( "Ptasia grypa, 	wciśnij 3.\n" );
	printf( "Świńska grypa, 	wciśnij 4.\n" );
}

void przeziebienie() //0-1-1-1
{
	printf( "Trwa wypisywanie recepty... GOTOWE!\n" );
	printf( "Chusteczki A... Psik – 10 razy dziennie po 3 chusteczki\n" );
	printf( "Fervex – 4 razy dziennie po 8 saszetek\n" );
	printf( "Apap Na to jest za późno, więc Apap EXTRA – 2 razy dziennie po 3 tabletki\n" );
	printf( "Łóżko z pościelą (miejsce twojego tymczasowego pobytu) \n" );
	printf( "Refundacja; Do decyzji NFZ\n" );
	printf( "Dalej\n" );
}

void Grypa() //0-1-1-2
{
	printf( "Trwa wypisywanie recepty... GOTOWE\n" );!
	printf( "Gripex – 2 razy dziennie po 3 tabletki\n" );
	printf( "Apap Na to jest za późno, więc Apap EXTRA – 3 razy dziennie po 2 tabletki\n" );
	printf( "Ciepły rosół (z makaronem) – razy dziennie po\n" );
	printf( "Łóżko z pościelą (miejsce twojego tymczasowego pobytu) \n" );
	printf( "Refundacja; Do decyzji NFZ\n" );
	printf( "Dalej 	\n" );
}

void ptasia() //0-1-1-3
{
	printf( "Trwa wypisywanie recepty... GOTOWE!\n" );
	printf( "Tweetolum Forte – 2 razy dziennie po 6 tweetolów\n" );
	printf( "Klatka antytoksyczna (miejsce twojego tymczasowego pobytu)\n" );
	printf( "Facebookol – 13 razy dziennie po 5 fanpejdżów \n" );
	printf( "Refundacja; Do decyzji NFZ\n" );
	printf( "Dalej 	\n" );
}

void swinska() //0-1-1-4
{
	printf( "Trwa wypisywanie recepty... GOTOWE!\n" );
	printf( "Chrumkosol – 3 razy dziennie po 8 chrumka\n" );
	printf( "Świnkum Extra – 6 razy dziennie po 5 oświnie\n" );
	printf( "Klatka antytoksyczna (miejsce twojego tymczasowego pobytu)\n" );
	printf( "Refundacja; Do decyzji NFZ\n" );
	printf( "Dalej\n" );
}

void nein()
{
	printf( "Myslałeś, że zrobimy to przez telefon. Takie rzeczy należy załatwić inną drogą. Jeśli chcesz wybrać inną chorobę, wciśnij 1.\n" ); 
}

void number()
{
	printf( "Wpisz liczbę\n" );
}

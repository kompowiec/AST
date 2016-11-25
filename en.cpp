#include <stdio.h>
using namespace std;

void ClrScr(){
  printf("\033[2J"); // clear screen
  printf("\033[0;0f"); // set cursor in left, up 
}

void menu()
{
	printf( "Welcome to Automatic System Phone service. We offer a variety of services;\n" );
	 
	printf( "if you want check account,	 		click 1.\n" );
	printf( "if win bear and you want receive awards 	click 2.\n" );
	printf( "if don't have voicemail,		 	click 3.\n" );
	printf( "if you are admin Uncyclopedia, 		click 4.\n" );
	printf( "if you pay sub radio-TV license,		click 5.\n" );
	printf( "if you hold in your hand the phone,		click 6.\n" );
	printf( "if you want play the game,	 		click 7.\n" );
	printf( "if you indent to call on 0-800, 		click 8.\n" );
	printf( "if you using Neostrada TP,	 		click 9.\n" );
	printf( "if you want call on emergency , 		click 0.\n" );
	printf( "if you want break connection, 			break connect.\n" );
	printf( "if you want return to the main menu, 		click star (*). \n" );
}
void account() //1
{
	printf( "Have 3,44 PLN important to" << <<" WARNING! Automatic System Telephone service is payable.\n" );
	printf( "To recheck status of your account, 	click 1.\n" );
	printf( "if you want recharge your account, 	click 2.\n" );
	printf( "if you want return to the main menu, 	click star (*). \n" );    
}
void konto() //1-2
{
	printf( "select coupon code:" );
	printf( "2940-12032-29236-23488-2388" );
	printf( "9357-38569-37567-47568-9376" );
	printf( "0800-880ZA-CALL-NOW-!!!!" );
}

void doladowanie() //1-2-1 or 1-2-3
{ //1-2-2 wraca do 1
;
	printf( "Coupon code has already been used or is not valid.");
	printf( "to choose coupon code again, 		click 1." );
	printf( "If you return to the main menu, 	click star (*). " );
}

void nagroda() //2
{
	printf( "To receive an award, you need to select the pattern teddy bear to pick up.;" );
	printf( "black, ears and limbs grey, 20 pseudo fingers, tongue grey, brown eyes, 		click 1.\n" );
	printf( "brown, ears and limbs beige, 20 pseudo fingers, tongue golden, green eyes, 		click 2.\n" );
	printf( "green, ears and limbs green, 16 pseudo fingers, tongue green, black eyes, 		click 3.\n" );
	printf( "purple, ears and limbs pink, 20 pseudo fingers, tongue blue, white eyes, 		click 4.\n" );
	printf( "red, ears i limbs green, 21 pseudo fingers, tongue pink, blue eyes, 			click 5.\n" );
	printf( "blue, ears i limbs blue, 4 hoofs and 2 vanes, tongue red, tail and rainbow hair,	click 6.\n" );
	printf( "To return to the main menu,	 click star (*). \n" );	
}

void nagroda1() //2-1
{
	printf( "Award isn't available in offer; Bear black, ears and limbs grey, 20 pseudo fingers, tongue grey, brown eyes\n" );
	printf( "Reason; Bear black, ears and limbs grey, 20 pseudo fingers, tongue grey, brown eyes – out of stock.\n" );
	printf( "Choose another award\m");
}

void nagroda2() //2-2
{
	printf( "Award isn't available in offer: brown, ears and limbs beige, 20 pseudo fingers, tongue golden, green eyes\n" );
	printf( "Reason brown, ears and limbs beige, 20 pseudo fingers, tongue golden, green eyes –  out of stock.\n" );
	printf( "Choose another award\m");
}

void nagroda3() //2-3
{
	printf( "Award isn't available in offer: green, ears and limbs green, 16 pseudo fingers, tongue green, black eyes. \n" );
	printf( "Reason; green, ears and limbs green, 16 pseudo fingers, tongue green, black eyes – low demand of mars bears.\n" );
	printf( "Choose another award\m");
}
void nagroda4() //2-4
{
	printf( "Award is available; purple, ears and limbs pink, 20 pseudo fingers, tongue blue, white eyes. \n" );
	printf( "Receive. \n" ); //2-4-1
}
void odbierz() //2-4-1-1
{
	printf( "Choose the method of payment;\n" );
	printf( "Cash\n" );
	printf( "Card\n" );
	printf( "From telephone\n" );
	printf( "Back to menu.\n" );	
}
void gotowka() //2-4-1-1 and 2-4-1-2
{
	printf( "Did you think we do it over the phone? These things should get other way");
}

void kasa() //2-3-1-1-3
{
	printf( "You don't have enough funds in your account.\n" );
	printf( "To check status account, 	click 1.\n" );
	printf( "To Recharge account,	 	click 2.\n" );
	printf( "TO return to the main menu,	 click star (*). \n" );	
}
void nagroda5()
{
	printf( "Award: red, ears i limbs green, 21 pseudo fingers, tongue pink, blue eyes\n" );
	printf( "Reason; red, ears i limbs green, 21 pseudo fingers, tongue pink, blue eyes – badly made bear.\n" );
	printf( "Choose another award\m");
}
void nagroda6()
{
	printf( "Award isn't available in offer; blue, ears i limbs blue, 4 hoofs and 2 vanes, tongue red, tail and rainbow hair.\n" );
	printf( "Reason; blue, ears i limbs blue, 4 hoofs and 2 vanes, tongue red, tail and rainbow hair – It isn't bear, just pony. Powołaliśmy specjalną komisję, aby sprzwdzić czemu kucyk się pojawił\n" );
	printf( "Choose another award\m");
}
void poczta() //3
{
	printf( "This service is temporarily unavailable");
	printf( "To return to the main menu, 	click star (*).\n" );
	printf( "Activate.  \n" );
}

void admin() //4
{
	printf( "Confirm that you are an admin uncyclopedia\n" );
	printf( "if you know all admins, 	click 1.\n" );
	printf( "if you don't know them all, 	click star (*). \n" );
}

void admin1() //4-1
{
printf( "Sorry, we can't determine if you are an administrator or not. Return to the main menu. \n" );
}

void abonament() //5
{
	printf( "Dear subscriptions! Pay for subscriptions and want  nagrodzić. Check your award;\n" );
	printf( "Free entry to building TP on street  Woronicza, 	click 1.\n" );
	printf( "Free performance w Teleexpress as a train,	 	click 2.\n" );
	printf( "Free sub for month,			 		click 3.\n" );
	printf( "Return to main menu,				 	click star (*).  \n" );
}
void TP() //5-1
{
printf ( "TVP doesn't express permission to do so, because the free admission have Maciek with TV series Klan. \ n");
}

void train() //5-2
{
	printf( "TP  doesn't express permission to do so, because too many people are hired as a train telexpress and there is no more space\n");
}

void nonfree() //5-3
{
	printf( "doesn't express permission to do so, because only earns subscription, and each loss can prevent the loss of several episodes of the series Clan of the lack of payments for rehabilitation rustic wtih Clan\n");
}
void telefon() //6 and 7
{
	printf( "Play in the game; Telephone.\n" );
	printf( "To play,		 	click star (*).\n" );
	printf( "To return to the main menu, 	click star (*).\n" );
}

void uslugi() //8
{
	printf( "O, NO! Such services don't offer. We prevented you access to all numbers starting with 0-800 880. Return to the main menu. \n" );
}

void neostrada() //9
{
	printf( "Try new neostrada 100 GB/s.\n" );
	printf( "To try,		 	click 1.\n" );
	printf( "Aby return to the main menu, 	click star (*). \n" );
}
//9-1
//void poczta();

void pogotowie() //0
{
	printf( "CONNECT WITH EMERGENCY... PLEASE WAIT!\n" );
	printf( "if you want stay connect 	wait a few minutes.\n" );
	printf( "if don't want wait,	 	Call to 997.\n" );
	}
	
	void ASTPR() //0-1
{
	printf( "Welcome to Automatic System Telephone Emergency Medical Services. How can in help?\n" );
	printf( "if you are ill a cold or flu, 	click 1.\n" );
	printf( "if break one his limbs, 	click 2.\n" );
	printf( "if you have infectious disease click 3.\n" );
	printf( "To switch to 112,	 	click 4. \n" );
	}

void ill() //0-1-1
{
	printf( "What are you sick?\n" );
	printf( "common cold, 	click 1.\n" );
	printf( "seansonal flu, 	click 2.\n" );
	printf( "bird flu, 	click 3.\n" );
	printf( "pig flu, 	click 4.\n" );
}

void przeziebienie() //0-1-1-1
{
	printf( "It takes writing out a prescription ... READY!");
	printf( "Hanky Achoo! – 10 times a day for 3 Handkierchief\n" );
	printf( "Fervex – 4 times a day for 8 saszetek\n" );
	printf( "Apap is too later, so Apap EXTRA – 2x everyday 3 tabletki\n" );
	printf( "bed with bedding  (place your temporary stay)\n" );
	printf( "Refund; to decision  NFZ\n" );
	printf( "Next\n" );
}

void Grypa() //0-1-1-2
{
	printf( "It takes writing out a prescription ... READY!");
	printf( "Gripex – 2 times a day for  3 tablets\n" );
	printf( "Apap On it it's too late, so Apap EXTRA – 3 times a day for 2 tablets\n" );
	printf( "Hot broth with noodles\n" );
	printf( "bed with bedding (place your temporary stay \n" );
	printf( "Refund; to decision  NFZ\n" );
	printf( "Next 	\n" );
}

void ptasia() //0-1-1-3
{
	printf( "It takes writing out a prescription ... READY!");
	printf( "Tweetolum Forte –  6 tweetolów\n" );
	printf( "anti-toxic cage (place your temporary stay).\n" );
	printf( "Faceboocol – 13 times a day for 5 fan pages \n" );
	printf( "Refund; to decision  NFZ\n" );
	printf( "Next 	\n" );
}

void swinska() //0-1-1-4
{
	printf( "It takes writing out a prescription ... READY!");
	printf( "Chrumcosol – 3 times a day  for 8 tables\n" );
	printf( "pig Extra – 6 times a day  for 5 tablets\n" );
	printf( "anti-toxic cage (place your temporary stay).\n" );
	printf( "Refund; to decision NFZ\n" );
	printf( "Next\n" );
}

void nein()
{
	printf( "Did you think we do it over the phone? These things should get other way. if you want to choose another illness, click 1\n");
}

void number()
{
	printf( "Enter of the number\n" );
}


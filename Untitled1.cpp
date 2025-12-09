/*
 GROUP 3
 
 */
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdint.h>

void kohereza();
void kugura();
void kwishyura();
void serivisi_za_banki();
void Loans_and_Savings();
void konti_Yange_Ya_MoMo();
void Ibyemejwe_bitaranozwa();
void MOMOpay();
void  caller();
void insurance();
void MOMO_Terms_And_Condtions();
void Macye_Macye();
void babyly();
void help();
void exit();
void back();

	
// _________________ display menu____________________ 

void displayMenu() {
	system("cls||clear");
        printf("\t\t1)  kohereza Amafaranga\n");
        printf("\t\t2)  Kugura\n");
        printf("\t\t3)  Kwishyura\n");
        printf("\t\t4)  Serivisi za Banki\n");
        printf("\t\t5)  Inguzanyo no Kuzigama\n");
        printf("\t\t6)  Konti Yanjye ya MoMo\n");
        printf("\t\t7)  Ibyemezo Bitaranozwa\n");
        printf("\t\t8)  MomoPay\n");
        printf("\t\t9)  Sekirite ya MoMo\n");
        printf("\t\t10) Ubwishingizi\n");
        printf("\t\t11) Amategeko n'Amabwiriza\n");
        printf("\t\t12) Macye Macye\n");
        printf("\t\t13) Bably Health\n");
        printf("\t\t14) Bariza Hano\n");
        printf("\t\t15) Sohokamo\n");
}



//_____________ step back ______________ 
void buyMenu();
void back(){
	displayMenu();
	int choice;
	printf("\t\treply: ");
	scanf("\t%d",&choice);
		switch(choice)
		{
		case 1:
		   kohereza();
			break;
	
		
	     case 2:
	    	buyMenu();
			break;
		
	
		case 3:
			kwishyura();
			break;
		
		case 4:
			serivisi_za_banki();
			break;
		
		case 5:
			konti_Yange_Ya_MoMo();
		  break;
		case 6:
			konti_Yange_Ya_MoMo();
		  break;
		case 7:
			Ibyemejwe_bitaranozwa();
		   break;
		
		case 8:
			MOMOpay();
		   break;
		case 9:
			caller();
			break;
		
		case 10:
		   insurance();
			break;
	
		case 11:
		MOMO_Terms_And_Condtions();
			break;
		
		case 12:
		Macye_Macye();
			break;
		case 13:
			babyly();
			break;
		case 14:
			 help();
		  break;
		case 15:
		exit();
		   break;
		default:
		 exit(1);

			break;
	}

}
int momo__pin1();
//__________________________MOMOPAY_____________________________________
void MOMOpay()
{
	 system("clear||cls");
	printf("MoMoPay\n");
	printf("1.Kode ya MoMoPay\n");
	printf("2.Kwshyura n'impamvu'\n");
	printf("3.Iyandikishe nkumucuruzi\n");
	int op12;
		printf("hitamo:\n");
		scanf("%d",&op12);
		switch(op12)
		{
			case 1: 
			     {
			     	system("clear||cls");
				 char code_momopay1[6];
	           	 printf("Shyiramo Code ya MoMoPay:\n");
		         scanf("%s",code_momopay1);
				double amount2;
				 system("clear||cls");
				printf("Umubare wamafaranga:\n");
	          	 scanf("%lf",&amount2);
	          	  printf("Ugiye kwishyura amafaranga Rwf%lf kuri %s.Ikiguzi cya RWF 0.Emeza ushyiramo umubare w'ibanga:\n",amount2,code_momopay1);
							
				 }
				 momo__pin1();
				break;
			case 2: system("clear||cls");
	                double amount1;
	           	 char impamvu[50];
	           	  char code_momopay[6];
	           	 printf("Shyiramo Code ya MoMoPay:\n");
		         scanf("%s",code_momopay);
		        printf("Umubare wamafaranga:\n");
	          	 scanf("%lf",&amount1);
		        system("clear||cls");
		      printf("Shyiramo Impamvu:\n");
		       scanf("%49s",impamvu);
		     printf("Ugiye kwishyura amafaranga Rwf%lf kuri %s.Ikiguzi cya RWF 0.Emeza ushyiramo umubare w'ibanga\n",amount1,code_momopay);
		                   
						    momo__pin1();
		                     		break; 
		case 3:
			momo__pin1();
			break;
		}
	
	
}

//__________________________ make make ______________________ 
int momo__pin1()
{     system("clear||cls");
	char pin[5];
	printf("injizamo umubare w'ibanga:");
	scanf("%s",pin);
	if (strcmp( pin , "12345") == 0)
	{
		printf("byakunze");
	}
	else
	{
		printf("Invalid pin");
	}
	return 0;
}
// Function to display the main menu
void DisplayMenu_1() {
    printf("Murakaza Neza kuri MTN Macye Macye\n\n");
    printf("Get an affordable Smartphone with MTN Macye Macye, Select an option to contiue\n\n");
    printf("1) Kwiyandikisha\n");
    printf("2) Kureba_Smartphoni_Wemerewe\n");
    printf("3) Kwishyura\n");
    printf("4) Kureba_Asigaye\n");
}

// Function to simulate Registration
void Kwiyandikisha() {
    printf("Congratulation! You are registerd to MTN Macye Macye\n\n");
}

// Function to simulate Checking Eligibility
void Kureba_Smartphoni_Wemerewe() {
    system("clear||cls");
    printf("Select device\n");
    printf("1) ITEL A04 2GB+32GB (Up to 10,100RWF/Month for 12 Months)\n\n ");
    printf("2) Samsung galaxy A04e(Up to 19,450RWF/Month for 12 Months)\n\n");
    printf("3) Tecno Spark 10c 128GB+4GB (Up to 19,450RWF/Month for 12 Months)\n\n");
    printf("4) Samsung Galaxy A04 (64GB,4GB) (Up to 21,650RWF/Month for 12 Months)\n\n");
    printf("5) Samsung Galaxy A13(4GB RAM, 64GB) (Up to 27,600RWF/Month for 12 Months)\n\n");
    printf("6) Samsung Galaxy A14 4GB+64GB (Up to 27,600 RWF/Month for 12 Months)\n\n");
    printf("7) Samsung Galaxy A04s (128GB,4GB) (Up to 27,600RWF/Month for 12 Months)\n\n");
    printf("8) Samsung Galaxy A13(4GB RAM,128) (Up to 32,000)\n\n");
    printf("9) Galaxy A14 4GB+128GB (Up to 32,000 RWF/Month for 12 Months)\n\n");
    printf("10) Samsung Galaxy A23(4GB RAM,64GB) (Up to 32,000 RWF/Monyh for 12 Months)\n\n");
    printf("11) INFINIX Note 30(8GB+256GB)(Up to 32,000RWF/Month for 12 Months)\n\n");
    printf("12) Nokia T20 Tablet 4G (64GB,4GB) (Up to 35,200RWF/month for 12 Months)\n\n");
    printf("13) Techno Camon 20 (Up to 35,3250 RWF/Month for 12 Months)\n\n");
    
    int icyemezo;
    printf("Injizamo Icyemezo:");
    scanf("%d",&icyemezo);
    switch(icyemezo)
    {
    	case 1:
    	case 2:
    	case 3:
    	case 4:
    	case 5:
    	case 6:
    	case 7:
    	case 8:
    	case 9:
    	case 10:
    	case 11:
    	case 12:
    	case 13:
    		{
    			system("clear||cls");
    		 printf("MTN Rwandacell Message\n Error occured :25078xxxxxxx");
			 	  
		
		}
		break;
	}
}

// Function to simulate Pay Device Loan
void Kwishyura() {
	system("clear||cls");
    printf("hitamo uburyo bwo kwishyura\n");
    printf("1) kwishyura\n");
    printf("0) Back");
    int icyemezo;
    printf("Injizamo Icyemezo:");
    scanf("%d",&icyemezo);
    switch(icyemezo)
    {
    	case 1:
    			system("clear||cls");
    		 printf("Could not perform the transaction.\n please call customer care for assistance.");
    		 break;
}
}
// Function to simulate Check Balance
void Kureba_Asigaye_M()
{
   
    		system("clear||cls");
    		 printf("Could not perform the transaction.\n please call customer care for assistance.");
    		
    	
}

void Macye_Macye() {
    int icyemezo;
    	system("clear || cls");

        // Display the main menu
        DisplayMenu_1();

        // Get user input
        printf("Emeza icyemezo: ");
        scanf("%d", &icyemezo);

        // Process user choice
        switch (icyemezo) {
            case 1:
                Kwiyandikisha();
                break;
            case 2:
            	momo__pin1();
                Kureba_Smartphoni_Wemerewe();
                break;
            case 3:
                Kwishyura();
                break;
            case 4:
            	momo__pin1();
                Kureba_Asigaye_M();
                break;
            case 5:
                printf("Exiting the MTN Macye Macye Goodbye!\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
}







//__________________________KUGURA _________________________________ 
void buyAirtime();
void buyElectricity();
void buySolar();

void buyMenu() {                                           // Display BUY MENU
 
system("clear || cls");                      //clearing the existing display
    int buyChoice;

        printf("1) kugura amainite, pack zo guhamagara na interinet\n");
        printf("2) Kugura umuriro\n");
        printf("3) Pay Services\n");
        printf("4) Solar\n");
        printf("5) Kwishyura Itike y'urugendo\n");
        printf("6) Online Shopping\n");
        printf("0) Gusubira Inyuma \n");

       
        printf("Hitamo: \n");
        scanf("%d", &buyChoice);

                                                       // Process buy menu choice
        switch (buyChoice) {
            case 1:
                buyAirtime();
                break;
            case 2:
                
                buyElectricity();
                break;
            case 3:
                
                printf("Paying Services...\n");
                break;
                
            case 4:
                buySolar();
                break;
            case 5:
                printf("Buying Transport...\n");
                break;
            case 6:
                printf("Online Shopping...\n");
                break;
            case 0:
                back();
                break;
            default:
                printf("Your choice was incorrect. Please try again.\n");
        }

   
}
 void buyCall();
 void buyTubitayeho();
 void  buyInternetBundles();
 void buyPrestige();
 void tubitayeho();
 void BuySelfOthers();
 void buyCashPower();
 void enterMeterNumber();
void buyElectricity();
void buyAirtime() {
	system("clear || cls");
    int airtimeChoice;

        printf("1. MTN Airtime\n");
        printf("2. Tubitayeho\n");
        printf("3. Internet Bundles\n");
       
        printf("4. Prestige\n");
        printf("0) Gusubira Inyuma \n");

       
        printf("Hitamo: \n");
        scanf("%d", &airtimeChoice);

        
        switch (airtimeChoice) {
            case 1:
               
                buyCall();
                break;
            case 2:
                buyTubitayeho();
                break;
            case 3:
                buyInternetBundles();
                break;
           
            case 4:
                buyPrestige();
                break;
            
            case 0:
                buyMenu();              //return back to buy menu
                break;
            default:
                printf("Your choice was incorrect. Please try again.\n");
                buyAirtime();
        }

}
void buySelf() {
	system("clear || cls");
	  int amount , pin;
   
    printf("Amainite ukeneye.\n");
    scanf("%d", &amount);
    printf("Winjije : %d \n ubwishyu bwa 0RWF burakurikizwa.\n Kugura amainite, shyiramo PIN yawe ya MM\n ", amount);
    scanf("%d", &pin);
    if(pin == 12345){
   printf(" *162* 12060125604*S* Winjije  %ld RWF \n yo guhamagara, igihe bikoreweho 2023-12-24 20:12:58. ubwishyu  0 RWF burakurikizwa\n. Amafaranga musigaranye ni 2900 RWF\n.Message:--.KINY# \n" ,amount);
	}
}
void buyOthers() {
	system("clear || cls");
    	  int  pin;
    	  long int numb, amount;
    
    printf("Amainite ukeneye.\n");
    scanf("%d", &amount);
    printf("Shyiramo nomero.\n");
    scanf("%ld", &numb);
    printf("Winjije : %ld  \n +25%ld kuri Fabiola INGABIRE, ubwishyu bwa 0RWF burakurikizwa.\n Kugura amainite, shyiramo PIN yawe ya MM\n ", amount,numb);
    scanf("%d", &pin);
    if(pin == 12345){
   printf("*162* 12060125604*S* Winjije  %ld RWF\n +25%ld yo guhamagara kuri Fabiola Ingabire \n igihe bikoreweho 2023-12-24 \n 20:12:58. ubwishyu  0 RWF burakurikizwa\n.Amafaranga musigaranye ni \n 2800 RWF\n.Message:--.* Kiny# \n" ,amount, amount);
	}
}
void buyCall(){
	system("clear || cls");
	
	int choice;
	
	printf("Ikarita yo guhamagara \n");
	printf("1) Kwigurira\n");
	printf("2) Kugurira undi\n");
	printf("0) Gusubira Inyuma \n");
	scanf("%d", &choice);
	switch (choice) {
            case 1:
               
                buySelf();
                break;
            case 2:
                buyOthers();
                break;
            case 0:
                buyAirtime();
                break;
            default:
                printf("Your choice was incorrect. Please try again.\n");
}
} 

void callInternet(){
	system("clear || cls");
		int chosen, pin;
                	printf("1) 5000 FRW zitarangira /n + 200 SMS (ukwezi)\n");
	                printf("2)3000 FRW 3500min  /n + 200 SMS (ukwezi)\n");
	                printf("3)2000 FRW 1500 min /n + 100 SMS (ukwezi)\n");
                    printf("0) Gusubira Inyuma \n");
	                scanf("%d", &chosen);
	                switch (chosen) {
	                case 1:
              	      printf("enter PIN \n");
              	      scanf("%d\n",&pin);
              	      if(pin==12345){
             	       printf("*162* 12060125604 *S* winjije 5000 RWF \n yo gukura packi yawe ya Tubitayeho ikora ukwezi kose  \n 100 SMS ukwezi kose \n igihe bikoreweho: 2023-12-24 \n 20:12:58.  ubwishyu  0 RWF burakurikizwa\n. Amafaranga musigaranye ni \n 2800 RWF\n.Message:--.*Kiny# \n" );
						 }
		
                      break;
					case 2:
              	   printf("enter PIN \n");
              	      scanf("%d\n",&pin);
              	      if(pin==12345){
              	       printf("*162* 12060125604 *S* winjije 3000 RWF \n yo gukura packi yawe ya Tubitayeho iguha iminota 2300  ukwezi kose na 200mbs na \n 50 SMS ukwezi kose \n igihe bikoreweho: 2023-12-24 \n 20:12:58. ubwishyu  0 RWF burakurikizwa\n.  Amafaranga musigaranye ni \n 2800 RWF\n.Message:--.*KIny# \n" );
						 }
						 
		
                   break;
                   case 3:
              	 printf("enter PIN \n");
              	      scanf("%d\n",&pin);
              	      if(pin==12345){
              	       printf(" *162* 12060125604 *S* winjije 2000 RWF \n yo gukura packi yawe ya Tubitayeho iguha iminota 1200 ukwezi kose   \n 100SMS ukwezi kose \n igihe bikoreweho: 2023-12-24 \n 20:12:58. ubwishyu  0 RWF burakurikizwa\n.  Amafaranga musigaranye ni \n 2800 RWF\n.Message:--.*Kiny# \n" );
						 }
		
                   break;
                   case 0:
              	 tubitayeho();
                break;
				}}

void tubitayeho(){
	system("clear || cls");
	int choice, pin ;
	printf("1) Guhamagara\n");
	printf("2) inteneti\n");
    printf("0) Gusubira Inyuma \n");
	scanf("%d", &choice);
	switch (choice) {
            case 1:
            callInternet();
                break;
            case 2:
             callInternet();
                break;
            case 0:
                buyTubitayeho();
                break;
            default:
              printf("Your choice was incorrect. Please try again.\n");	
}
}
void buyTubitayeho() {
	system("clear || cls");
  	int choice;
	

	printf("1) kwigurira\n");
	printf("2) kugurira undi\n");
	printf("0) Gusubira Inyuma \n");
	scanf("%d", &choice);
	switch (choice) {
            case 1:
               
                tubitayeho();
               break;
            case 2:
                tubitayeho();
               
                break;
            case 0:
                buyAirtime();
                break;
            default:
              printf("Your choice was incorrect. Please try again.\n");
}
}
void buyAirtimeEnd(){
	system("clear || cls");
	int choice, pin;
	printf("1) 5000FRW ukwezi  2Gb/day + 100SMS\n");
	printf("2) 3000FRW ukwezi 1GB/ day +50SMS \n");
	printf("0) Gusubira Inyuma \n");
	printf("Hitamo: \n");
	scanf("%d", &choice);
	switch (choice) {
            case 1:
               
         if(pin==12345){
         	 printf("*162* 12060125604 *S* winjije 5000 RWF \n yo gukura packi yawe ya Tubitayeho ikora ukwezi kose 2Gb za buri munsi na \n 100 SMS ukwezi kose \n igihe bikoreweho: 2023-12-24 \n 20:12:58.  ubwishyu  0 RWF burakurikizwa\n. Amafaranga musigaranye ni \n 2800 RWF\n.Message:--.*Kiny# \n" );
		 }      
               break;
            case 2:
            	
           if(pin==12345){
         	 printf("*162* 12060125604 *S* winjije 3000 RWF \n yo gukura packi yawe ya Tubitayeho ikora ukwezi kose 1Gb ya buri munsi na \n 50 SMS ukwezi kose \n igihe bikoreweho: 2023-12-24 \n 20:12:58. ubwishyu  0 RWF burakurikizwa\n. Amafaranga musigaranye ni \n 5700 RWF\n.Message:--.*KIny# \n" );
		 }     
               break;
            case 0:
                BuySelfOthers();
                break;
}
}
 void BuySelfOthers(){
 	system("clear || cls");
 		int choice;
	

	printf("1) kwigurira\n");
	printf("2) kugurira undi\n");
	printf("0) Gusubira Inyuma \n");
	printf("Hitamo: \n");
	scanf("%d", &choice);
	switch (choice) {
            case 1:
               
                buyAirtimeEnd();
               break;
            case 2:
            	
                buyAirtimeEnd();
               
                break;
            case 0:
                buyAirtime();
                break;
            default:
               printf("Your choice was incorrect. Please try again.\n");
 }
 }

void buyInternetBundles() {
	int choice;
	printf("1) Tubitayeho \n");
	printf("2) MTN irekure(4G & 5G) \n");
	printf("3) Tuuza bundles (3G& 4G)\n");
    printf("0) Gusubira Inyuma \n");
	printf("Hitamo: \n");
	scanf("%d", &choice);
	switch (choice) {
            case 1:
                
                BuySelfOthers();
               break;
            case 2:
                BuySelfOthers();
               break;
            case 3:
                BuySelfOthers();
                break;
            case 0:
                buyAirtime();
                break;
            default:
                printf("Your choice was incorrect. Please try again.\n");
 }
  }

void  prestige(){
	system("clear || cls");
	int pin;
	printf("1) 5000 fRW ukwezi  500 min , 1.5GB and 200SMS \n");
	printf("2) 10000 fRW Ukwezi  1200 min , 5GB and 300SMS \n");
	printf("0) Gusubira Inyuma \n");
	printf("Shyiramo umubare w'ibanga\n");
    scanf("%ld;", &pin);
    
    if(pin == 12345){
    	
    	printf("*162* 12060125604 *S* YWinjije 5000 RWF \n yo guhamagara na interneti  \n 500 min, 1.5GB and 200SMS ku kwezi kose. Ushobora guhamagara incuti zo hanze y'igihugu', \n igihe bikorewe ni 2023-12-24 \n 20:12:58. ubwishyu  0 RWF burakurikizwa\n. Amafaranga musigaranye ni \n 5700 RWF\n.Message:--.*KIny# \n" );
	}
}

void buyPrestige() {
	system("clear || cls");
	int choice, numb;
	

	printf("1) kwigurira\n");
	printf("2) kugurira undi\n");
    printf("0) Gusubira Inyuma \n");
	printf("Hitamo: \n");
	scanf("%d", &choice);
	switch (choice) {
            case 1:
                
                prestige();
               break;
            case 2:
            	printf(" Shyiramo Nomero ya Telephone \n");
            	scanf("%ld",&numb);
                prestige();
               
                break;
            case 0:
                buyAirtime();
                break;
            default:
                printf("Your choice was incorrect. Please try again.\n");
 }
 }
                                                                          // BUY ELECTRICITY
void buyElectricity() {
	system("clear || cls");
    int electricityChoice;

        printf("\nUmuriro w'amashanyarazi:\n");
        printf("1. Cash Power\n");
        printf("0) Gusubira Inyuma \n");

        
        printf("Hitamo: \n");
        scanf("%d", &electricityChoice);

       
        switch (electricityChoice) {
            case 1:
                buyCashPower();
                break;
            case 0:
                buyMenu();
                break;
            default:
               printf("Your choice was incorrect. Please try again.\n");
        }

    
}

void buyCashPower() {
    int meterChoice;

   
       system("clear || cls");
        printf("\nCash Power Options:\n");
        printf("1) Shyiramo nomero ya cash power\n");
        printf("0) Gusubira Inyuma \n");

        
        printf("Hitamo: \n");
        scanf("%d", &meterChoice);

       
        switch (meterChoice) {
            case 1:
                enterMeterNumber();
                break;
            case 0:
                buyElectricity();
                break;
            default:
               printf("Your choice was incorrect. Please try again.\n");
        }

}

void enterMeterNumber() {
	system("clear || cls");
	long int meterNum;
     long int amount;
     int pin;
     
    
    printf("Shyiramo nomero ya cash power\n");
    scanf(" %ld", &meterNum);
    printf("\n Winjije:  %ld yanditse kuri  Jean baptiste. Shyiramo umubare w'umuriro uragura.\n" ,amount);
    scanf("%f", &amount);
    printf("\n Winjije %ld yo kugura umuriro : %ld yanditse kuri Jean baptiste Niyikiza, ubwishyu  0 RWF burakurikizwa\n.",amount,meterNum );
    printf("Shyiramo umubare w'ibanga \n");
    scanf("%ld;", &pin);
    
    if(pin == 12345){
    	
    	double textcode= 1200567;
    	system("cls||clear");
    	printf("*162* %ld Winjije %ld RWF yo kugura umuriro kuri code/n 54378-5432-2564-5654 yanditse kuri Jean Baptiste Niyikiza igihe bikoreweho 2023-12-24 20:12:58. Amafaranga musigaranye 2000 RWF. ubwishyu  0 RWF burakurikizwa\n.",amount, textcode);
	}
	}
void buyMySol(){
	system("clear || cls");
	long int choice;
	int pin;
	
	printf("shyiramo nomero ya MySol:\n");
	scanf("%d", &choice);
	printf("Ushaka kugura ifatabuguzi Mysol ku  5000FRW /n Shyiramo umubare w'ibanga\n");
	  scanf("%ld;", &pin);
    
    if(pin == 12345){
    	
	printf("*162* 12060125604 *S* Wishyuye 5000 RWF kwi ifatabuguzi rya MySol %ld yanditse kuri Jean Baptiste ufite code/n 54378-5432-2564-5654.\n igihe bikoreweho  2023-12-24 20:12:58. Amafaranga musigaranye ni 0 RWF. ubwishyu  0 RWF burakurikizwa\n",choice);
	}
	
}
void buyBbox(){
	system("clear || cls");
		long int choice;
		int pin;
	
	printf("shyiramo nomero ya Bbox:\n");
	scanf("%d", &choice);
	printf("Ushaka kugura ukwezi kose Bbox ku  3000FRW /n Shyiramo umubare w'ibanga\n");
	  scanf("%ld;", &pin);
    
    if(pin == 12345){
    	
printf("*162* 12060125604 *S* Wishyuye 5000 RWF kwi ifatabuguzi rya Mesh %ld yanditse kuri Jean Baptiste ufite code/n 54378-5432-2564-5654.\n igihe bikoreweho  2023-12-24 20:12:58. Amafaranga musigaranye ni 0 RWF. ubwishyu  0 RWF burakurikizwa\n",choice);
}
}
void buyMesh(){
	system("clear || cls");
	long int choice;
	int pin;
	
	printf("shyiramo nomero ya Mesh:\n");
	scanf("%d", &choice);
	printf("Ushaka kugura ifatabuguzi Mesh ku  4000FRW /n Shyiramo umubare w'ibanga\n");
	  scanf("%ld;", &pin);
    
    if(pin == 12345){
    	
		printf("*162* 12060125604 *S* Wishyuye 5000 RWF kwi ifatabuguzi rya Mesh %ld yanditse kuri Jean Baptiste ufite code/n 54378-5432-2564-5654.\n igihe bikoreweho  2023-12-24 20:12:58. Amafaranga musigaranye ni 0 RWF. ubwishyu  0 RWF burakurikizwa\n",choice);
}
}
void buySolar() {
	system("clear || cls");
    int solarChoice;


        printf("\nSolar Options:\n");
        printf("1. MySol\n");
        printf("2. Bbox\n");
        printf("3. Mesh\n");
        printf("0) Gusubira Inyuma \n");

        
        printf("Hitamo: \n");
        scanf("%d", &solarChoice);

       
        switch (solarChoice) {
            case 1:
                buyMySol();
                break;
            case 2:
                buyBbox();
                break;
            case 3:
                buyMesh();
                break;
            case 0:
                buyMenu();
                break;
            default:
                printf("Your choice was incorrect. Please try again.\n");
        }
}
		
	
//______________________INSURANCE ______________________________ 
void insurance() {
start:
	system("cls||clear");
	printf("1.radiant yacu\n");
	printf("2.prime insurance\n");
	printf("3.ineza\n");
	printf("4.uap\n");
	printf("5.sanlam\n");
	printf("0.Gusubira inyuma\n");

	int option1;
	printf("Enter option: ");
	scanf("%d", &option1);
	switch (option1) {
		case 1:// Radiant insurance section
			system("cls||clear");
			printf("Ikaze muri Raiant yacu \n\n\n");
			printf("1.kuzigama\n");
			printf("2.turikumwe yawe \n");
			printf("3.turikumwe y'umuryango \n");
			printf("4.Ibinyabiziga \n");
			int suboption;
			printf("Enter option: ");
			scanf("%d", &suboption);
			switch (suboption) {
				case 1:

					system("cls||clear");
					printf("Mbere ya byose ubanza kwiyandikisha\n Andika numero y'indangamuntu:\n");
					char id[20];
					scanf("%s", id);

					if (strlen(id) != 16) {
						system("cls||clear");
						printf("please enter valid id .\n");
					} else if(strlen(id) ==16) {
						system("cls||clear");
						printf("!Ikaze muri Radiant %s \n\n",id);
						printf("1.IZIGAMIRE\n");
						printf("2.Kureba ubwizigame bwawe \n");
						printf("3.Kubikuza ubwizigame bwawe\n");
						printf("4.Amategeko n'amabwiriza yo\nKUZIGAMA'\n");
						printf("kanda umubare wicyo ushaka: ");
						int youroption;
						scanf("%d",&youroption);
						switch (youroption) {
								int myoption;
							case 1:
								system("cls||clear");
								printf("Ushaka kuzigama  amafaranga angahe?\n");
								scanf("%d",&myoption);
								printf("1. Kwemeza kwishura ");
								printf("kanda*182*7*1# wemeze USHIREMO PIN \n");
								break;
							case 2:
								system("cls||clear");
								printf("Ntabwo uratanira kwizigama na \nturikumwe saving.kanda *531# \n uhitemo kuzigama\n");
								break;
							case 3:
								system("cls||clear");
								printf("Ntabwo uratanira kwizigama na \nturikumwe saving.kanda *531# \n uhitemo kuzigama\n");
								break;
							case 4:
								system("cls||clear");
								printf("Amategeko namabwiriza mu \ngukoresha ubwizigame buciriritse \nbwo kuzigama.\n");
								printf("https://radiantyacu.rw/saving-terms\n-condtions\n");
								break;
						}
				break;
				case 2:
					system("cls||clear");
					printf("Hitamo ubwishingizi Turikumwe\n wifuza\n");
					printf("1.500\n");
					printf("2.1000\n");
					printf("3.2000\n");
					printf("4.3000\n");
					printf("5.4000\n");
					printf("6.5000\n");
					int option11;
					printf("kanda umubare ushaka: ");
					scanf("%d", &option11);
					switch(option11) {
							int option11;
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
						case 6:
							{
								system("cls||clear");
							printf(" wishyuye:",option11);
							}
							break;
					}
				break;
				case 3:
					system("cls||clear");
					printf("Hitamo ubwishingizi Turikumwe\n wifuza\n");
					printf("1.2000\n");
					printf("2.4000\n");
					printf("3.6000\n");
					printf("4.8000\n");
					int option12;
					printf("kanda umubare  ushaka:\n ");
					scanf("%s", &option12);
					switch(option12) {
						int option12;
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
						case 6:
							{
								system("cls||clear");
							printf(" wishyuye:",option12);
							}
							break;
					 	}
				break;
				case 4:
					system("cls||clear");
					printf("Ibinyabiziga\n\n");
					printf("1.Kureba igihe cyubwishingizi\n");
					printf("2.Injiza nimero yikinyabiziga\n plate number\n");
					int option22;
					printf("kanda umubare  ushaka:\n ");
					scanf("%d", &option22);
					switch(option22) {
							int option12;
						case 1:
							system("cls||clear");
							printf("ubwishingizi buzarangira umwaka utaha");
							break;
						case 2:
							system("cls||clear");
							double platenumber;
							scanf("%lf",&platenumber);
							printf("ikinyabiziga: %lf cyanditse muri Radiant ",platenumber);
							break;
					}

					break;
			}
			break;}
			break;

		case 2:
switchstart8:
			system("cls||clear");//clears the window
			printf("PRIMELIFE & PRIME GEN\n\n");
			printf("1)Ubuzima no kwizigamira\n");
			printf("2)Motor(Ibinyabiziga)\n");
			printf("3)medical(Kwivuza)\n");
			printf("4)umurage w'amashuri\n");
			int suboption2;
			printf("Enter option: ");
			scanf("%d", &suboption2);
			switch (suboption2) {
				case 1:
switchstart1:
					system("cls||clear");
					printf("PRIMELIFE INSURANCE\n\n");
					printf("1)Ikimina cyacu\n");
					printf("2)Amashuri y'abana\n");
					printf("3)Kwizigamira\n");
					printf("4)Umuryango\n");
					printf("5)Ubwishingizi  bw'umukozi\n");
					printf("6)Nkunganire\n");
					int suboption21;
					printf("Enter option: ");
					scanf("%d", &suboption21);
					switch (suboption21) {
						case 1:
							system("cls||clear");
							int suboption211;
							printf("1)Kwiyandikisha\n");
							printf("2)Kwizigamira\n");
							printf("3)Kubikuza\n");
							printf("4)Kureba ayo ugejejemo\n");
							printf("0)Gusubira inyuma\n");
							printf("Hitamo Umubare:");
							scanf("%d",&suboption211);
							switch(suboption211) {
								case 1:
									char id[20];
									system("cls||clear");
									printf("Andika nomero y'indangamuntu \nyawe:");
									scanf("%s",&id);

									if (strlen(id) != 16) {
										system("cls||clear");
										printf("please enter valid id .\n");
									} else if(strlen(id) ==16) {
										system("cls||clear");
										printf("Kaze neza %s \n",id);
										int amount;
										printf("Andika amafaranga ushaka \nkuzigama\n");
										scanf("%lf",&amount);
										switch(amount) {
											case 1:
switchstart11:
												system("cls||clear");
												printf("1)Emeza\n");
												printf("o)Gusubira inyuma\n");
												int nemeje;
												printf(" kwemeza Andika 1:\n");
												scanf("%d",&nemeje);
												switch(nemeje) {
													case 1:
														system("cls||clear");
														printf("kanda*182*7*1# wemeze USHIREMO PIN \n", &amount, id);
														break;
													case 0:
														goto switchstart11;
														break;
												}
												break;
										}
										break;
									}
									break;

								case 2:
									system("cls||clear");
									printf("Ntabwo uri mu kimina ! iyandikishe \niyandikishe ushobore kwizigamira");
									printf("0)Gusubira inyuma");
									break;
								case 3:
									system("cls||clear");
									printf("Ntabwo uri mu kimina ! iyandikishe \niyandikishe ushobore kwizigamira");
									printf("0)Gusubira inyuma");
									break;
								case 4:
									system("cls||clear");
									printf("Ntabwo uri mu kimina ! iyandikishe \niyandikishe ushobore kwizigamira");
									printf("0)Gusubira inyuma");
									break;
								case 0:
									system("cls||clear");
									goto switchstart1;
									break;
							}
							break;
						case 2:
							system("cls||clear");
							printf("AMASHURI Y'ABANA\n\n");
							printf("1)Kwishyura\n");
							printf("2)Kureba ubwizigame\n");
							int suboption22;
							printf("Enter option: ");
							scanf("%d", &suboption22);
							switch (suboption22) {
								case 1:
									system("cls||clear");
									printf("AMASHURI Y'ABANA\n\n");
									printf("1)Kwishyura\n");
									printf("2)Kureba ubwizigame\n");
									int youroption31;
									printf("Enter option: ");
									scanf("%d", &youroption31);
									switch (youroption31) {
									}
									break;
								case 2:
									system("cls||clear");
									printf("AMASHURI Y'ABANA\n\n");
									printf("1)Kwishyura\n");
									printf("2)Kureba ubwizigame\n");
									int youroption13;
									printf("Enter option: ");
									scanf("%d", &youroption13);
									switch (youroption13) {
									}
									break;
							}
							break;
						case 3:
switchstart3:
							system("cls||clear");
							printf("KWIZIGAMIRA\n\n");
							printf("1)Kwishyura\n");
							printf("2)Kureba ubwizigame\n");
							printf("3)Gusesa igice\n");
							printf("o)Gusubira inyuma\n");
							int youroption13;
							printf("Enter option: ");
							scanf("%d", &youroption13);
							switch (youroption13) {
								case 1:
									system("cls||clear");
									printf("PRIMELIFE INSURANCE\n\n");
									printf("1)Ikimina cyacu\n");
									printf("2)Amashuri y'abana\n");
									printf("3)Kwizigamira\n");
									printf("4)Umuryango\n");
									printf("5)Ubwishingizi  bw'umukozi\n");
									printf("6)Nkunganire\n");
									int youroption131;
									printf("Enter option: ");
									scanf("%d", &youroption131);
									switch (youroption131) {
									}
									break;
								case 2:
switchstart5:
									system("cls||clear");
									printf("PRIMELIFE INSURANCE\n\n");
									printf("1)Ikimina cyacu\n");
									printf("2)Amashuri y'abana\n");
									printf("3)Kwizigamira\n");
									printf("4)Umuryango\n");
									printf("5)Ubwishingizi  bw'umukozi\n");
									printf("6)Nkunganire\n");
									printf("0)Gusubira inyuma");
									int youroption213;
									printf("Enter option: ");
									scanf("%d", &youroption213);
									switch (youroption213) {

									}
									break;


								case 3:
									printf("Hitamo:Ntabwo wemerewe gusesa\n igice\n");
									goto switchstart3;
									break;
							}
							break;
						case 4:
switchStart:
							system("cls||clear");
							printf("UMURYANGO\n\n");
							printf("1)Kwiyandikisha\n");
							printf("2)Kwishyura\n");
							printf("3)Kureba imisanzu\n");
							printf("0)Gusubira inyuma\n");
							int youroption214;
							printf("Enter option:");
							scanf("%d",&youroption214);
							switch(youroption214) {
								case 1:
									system("cls||clear");
									printf("Andika nomero y'ndangamuntu \n yawe:");
									char id[20];
									scanf("%s",&id);
									if (strlen(id) != 16) {
										printf("please enter valid id .\n");
									} else if(strlen(id) ==16) {
										system("cls||clear");
										printf("Kaze neza %s \n",id);
										system("cls||clear");
										printf("Hitamo frw Uzajya wishyura\n");
										printf("1.500 ku kwizi\n");
										printf("2.1000 ku kwezi\n");
										printf("3.5500 kumwaka\n");
										printf("4.11000 ku mwaka\n");
										int amount;
										printf("Andika amafaranga ushaka \nkuzigama\n");
										scanf("%lf",&amount);
										switch(amount) {
											case 1:
switchstart171:
												system("cls||clear");
												printf("1)Emeza\n");
												printf("o)Gusubira inyuma\n");
												int nemeje;
												printf(" kwemeza Andika 1:\n");
												scanf("%d",&nemeje);
												switch(nemeje) {
													case 1:
														system("cls||clear");
														printf("kanda*182*7*1# wemeze USHIREMO PIN \n", &amount, id);
														break;
													case 0:
														goto switchstart171;
														break;
												}
												break;
										}
										break;
									}
									break;
							}
							break;

							system("cls||clear");
							printf("UBWISHINGIZI BW'UMUKOZI\n\n");
							printf("1)Kwisahyura\n");
							printf("2)Kureba imisanzu\n");
							printf("0)Gusubira inyuma\n");
							int option215;
							printf("Hitamo:\n");
							scanf("%d",&option215);
							switch(option215) {
								case 1:
									goto switchstart5;
									break;
								case 2:
									goto switchstart5;
									break;
								case 0:
									goto switchstart5;
									break;
							}
							break;
switchstart6:
						case 6:
							system("cls||clear");
							printf("NKUNGANIRE\n\n");
							printf("1)Kwiyandikisha\n");
							printf("2)Kwishyura\n");
							printf("3)Kureba imisanzu\n");
							printf("0)Gusubira inyuma\n");
							int nkunganire;
							printf("Hitamo:\n");
							scanf("%d",&nkunganire);
							switch(nkunganire) {
								case 1:
									char id[20];
									system("cls||clear");
									printf("Andika nomero y'indangamuntu \nyawe:");
									scanf("%s",&id,&nkunganire);
									if (strlen(id) != 16) {
										system("cls||clear");
										printf("please enter valid id .\n");
									} else if(strlen(id) ==16) {
										printf("Kaze neza!.",id);
										printf("HITAMO FRW UZAJYA WISHYURA:\n");
										printf("1)3000 ku kwezi\n");
										printf("2)33000 ku mwaka\n");
										int option14;
										printf("Hitamo:\n");
										scanf("%d",&option14);
										switch(option14) {
											case 1:
												system("cls||clear");
												printf("1)Kugura unyuze kuri agent\n");
												printf("2)Kugura nta agent\n");
												printf("0)Gusubira inyuma\n");
												int option41;
												printf("Hitamo:\n");
												scanf("%d",&option41);
												switch(option41) {
													case 1:
														system("cls||clear");
														printf("Andika code yumu Agant\n");
														break;
													case 2:
														system("cls||clear");
														printf("Kugura nta agent\n\n");
														printf("1)Emeza");
														printf("o)Gusubira inyuma");
														int kwemeza;
														scanf("%d",&kwemeza);
														system("cls||clear");
														printf("kanda*182*7*1# wemeze USHIREMO PIN \n", kwemeza, id);
														break;
												}
												break;
										}

									case 2:
										goto switchstart6;
										break;
									case 3:
										goto switchstart6;
										break;
									case 0:
										goto switchstart6;
										break;
									}
									break;

							}
							break;
					}
					break;
				case 2:
					system("cls||clear");//clears the window
					printf("MOTOR(IBINYABIZIGA)\n)");
					printf("1)Ikinyarwanda\n");
					printf("2)English\n");
					printf("o)back");
					int youroption2;
					printf("Enter option: ");
					scanf("%d", &youroption2);
					switch (youroption2) {
						case 1:
							system("cls||clear");//clears the window
							printf("Ibinyabiziga\n)");
							printf("1)Igihe ubwishingizi buzarangirira\n");
							printf("2)Kugura ubwishimgizi\n");
							printf("3)PRIME-IKOFI\n");
							printf("o)back");
							int youroption2;
							printf("Enter option: ");
							scanf("%d", &youroption2);
							switch (youroption2) {

								case 1:
									system("cls||clear");//clears the window
									printf("Andika plake(ntamwanya usizemo) \n");
									break;
								case 2:
									system("cls||clear");//clears the window
									printf("Andika plake(ntamwanya usizemo)\n ");
									break;
								case 3:
									system("cls||clear");//clears the window
									printf("Andika plake password yawe \n ");
									goto switchstart8;
									break;
								case 4:
									system("cls||clear");//clears the window
									goto switchstart8;
									break;
							}

							break;
						case 2:
							system("cls||clear");//clears the window
							printf("Motors\n)");
							printf("1)insurance validity \n");//Enter date of expiry
							printf("2)Buy insurance\n");
							printf("3)PRIME-IKOFI\n");
							printf("o)back");
							int youroption22;
							printf("Enter option: ");
							scanf("%d", &youroption22);
							switch (youroption22) {
								case 2:
									system("cls||clear");//clears the window
									printf("enter platenumber(without space)\n ");
									break;
								case 3:
									system("cls||clear");//clears the window
									printf("enter platenumber(without space)\n ");
									break;
								case 4:
									system("cls||clear");//clears the window
									printf("Password please \n ");
									goto switchstart8;
									break;
								case 0:
									system("cls||clear");//clears the window
									goto switchstart8;
									break;
							}

							break;
					}
					break;
				case 3:
					system("cls||clear");//clears the window
					printf("Medical(kwivuza)\n");
					printf("1)Ikinyarwanda\n");
					printf("2)English\n");
					printf("o)back");
					int youroption3;
					printf("Enter option: ");
					scanf("%d", &youroption3);
					switch (youroption3) {
						case 1:
							system("cls||clear");//clears the window
							printf("Kwivuza");
							printf("1)Amavuriro na pharmacy dukorana \n");
							printf("2)Ibiciro byubwishingizi bwo \n kwivuza");
							printf("o)back");
							int youroption123;
							printf("Enter option: ");
							scanf("%d", &youroption123);
							switch (youroption123) {
								case 1:
									system("cls||clear");//clears the window
									printf("1)Amavuriro\n");
									printf("2)farumasi \n");
									printf("0)Gusubira inyuma\n");
									int youroption1234;
									printf("Enter option: ");
									scanf("%d", &youroption1234);
									switch (youroption1234) {

										case 1:
											system("cls||clear");//clears the window
											printf(" Hitamo intara\n");
											printf("1)Umujyi wa kigali \n");
											printf("2)Amajyarugu\n");
											printf("3)Amajyepfo\n");
											printf("4)iburasirazuba\n");
											printf("5)Iburengerazuba\n");
											printf("6)Hanze yuyrwanda\n");
											break;
										case 2:
											system("cls||clear");//clears the window
											printf(" Hitamo intara\n");
											printf("1)Umujyi wa kigali \n");
											printf("2)Amajyarugu\n");
											printf("3)Amajyepfo\n");
											printf("4)iburasirazuba\n");
											printf("5)Iburengerazuba\n");
											printf("6)Hanze yuyrwanda\n");
											break;
									}
									break;
								case 2:
									system("cls||clear");//clears the window
									printf("Ibiciro byubwishingizi\n \n ");
									int youroption1231;
									printf("Enter option: ");
									scanf("%d", &youroption1231);
									switch (youroption1231) {
										case 1:
											system("cls||clear");//clears the window
											printf("Andika umwaka wavutsemo\n \n ");
											int youroption1232;
											printf("Enter option: ");
											scanf("%d", &youroption1232);
											switch (youroption1232) {
												case 1:
													system("cls||clear");//clears the window
													printf("Ufite umugore?\n \n ");
													printf("1)yego\n ");
													printf("2)oya \n ");
													int youroption1231;
													printf("Enter option: ");
													scanf("%d", &youroption1231);
													switch (youroption1231) {
														case 1:
															system("cls||clear");//clears the window
															printf("YEGO\n \n ");
															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;

						case 2:
								system("cls||clear");//clears the window
							printf("Medicals");
							printf("1)Our service providers\n");
							printf("2)Price and medical insurances \n");
							printf("o)back");
							int youroption1223;
							printf("Enter option: ");
							scanf("%d", &youroption1223);
							switch (youroption1223) {
								case 1:
									system("cls||clear");//clears the window
									printf("Our service providers\n");
									printf("1)Hospitals\n");
									printf("2)Pharmacies \n");
									printf("0)Back\n");
									int youroption1234;
									printf("Enter option: ");
									scanf("%d", &youroption1234);
									switch (youroption1234) {
										case 1:
											system("cls||clear");//clears the window
											printf("Choose the province\n");
											printf("1)kigali city \n");
											printf("2)Nothern province\n");
											printf("3)Southern province\n");
											printf("4)Estern province\n");
											printf("5)Western province\n");
											printf("6)Outside of Rwanda\n");
											break;
										case 2:
											system("cls||clear");//clears the window
											printf("Choose the province\n");
											printf("1)kigali city \n");
											printf("2)Nothern province\n");
											printf("3)Southern province\n");
											printf("4)Estern province\n");
											printf("5)Western province\n");
											printf("6)Outside of Rwanda\n");
											break;
									}
									break;
								case 2:
									system("cls||clear");//clears the window
									printf("Pricing\n \n ");
									int youroption1231;
									printf("Enter option: ");
									scanf("%d", &youroption1231);
									switch (youroption1231) {
										case 1:
											system("cls||clear");//clears the window
											printf("Enter your birth year\n \n ");
											int youroption1232;
											printf("Enter option: ");
											scanf("%d", &youroption1232);
											switch (youroption1232) {
												case 1:
													system("cls||clear");//clears the window
													printf("Ufite umugore?\n \n ");
													printf("1)yego\n ");
													printf("2)oya \n ");
													int youroption1231;
													printf("Enter option: ");
													scanf("%d", &youroption1231);
													switch (youroption1231) {
														case 1:
															system("cls||clear");//clears the window
															printf("YEGO\n \n ");


															break;
													}
													break;
											}
											break;
									}
									break;
							}
							break;
					}
					break;

				case 4:
switchstart4:
					system("cls||clear");
					printf("UMURAGE W'AMASHURI\n\n");
					printf("1)Kwiyandikisha\n");
					printf("2)Kwizigamira\n");
					printf("3)Kubikuzaho\n");
					printf("4)Kureba ayo ugejejemo\n");
					printf("5)Gutanga umusigire\n");
					printf("0)Gusubira inyuma\n");
					int option41;
					printf("Hitamo:\n");
					scanf("%d",&option41);
					switch(option41) {
						case 0:
							goto switchstart4;
							break;

					}
					break;

			}
			break;

		case 3:
			system("cls||clear");//clears the window
			char password[10];//password verification
			printf("shyiramo umubare wibangan wemeze gufungura compte ya ineza:\n");
			scanf("%s",&password);
			if (strlen(password)!=5) {
				printf("Shyiramo umubare wibanga nyawo");
			} else if(strlen(password)==5)

			{
				printf("Mukiliya mwiza izigamire %s ",password);
				system("cls||clear");//clears the window
				printf("1)Kuzigama\n");
				printf("2)Kubikuza\n");
				printf("3)Ohereza\n");
				printf("4)Asigaye\n");
				printf("5)Guhagarika compte\n");
				int youroption2;
				printf("Enter option: ");
				scanf("%d", &youroption2);
				switch (youroption2) {
					case 1:
						system("cls||clear");//clears the window
						printf("Andika ayo ushaka kwizigama:\n");
						int youroption2;
						printf("Enter option: ");
						scanf("%d", &youroption2);
						switch (youroption2) {
							case 1:
								system("cls||clear");//clears the window
								printf("Shyiramo pin yawe:");
								break;
						}

						break;
					case 2:
						system("cls||clear");//clears the window
						printf("Andika ayo ushaka kwizigama:\n");
						int youroption22;
						printf("Enter option: ");
						scanf("%d", &youroption22);
						switch (youroption22) {
							case 1:
								system("cls||clear");//clears the window
								printf("Shyiramo pin yawe:");
								break;
						}
						break;
					case 3:
						system("cls||clear");//clears the window
						printf("Andika ayo ushaka kwizigama:\n");
						int youroption23;
						printf("Enter option: ");
						scanf("%d", &youroption23);
						switch (youroption23) {
							case 1:
								system("cls||clear");//clears the window
								printf("Shyiramo pin yawe:");
								break;
						}

						break;
					case 4:
						system("cls||clear");//clears the window
						printf("Andika ayo ushaka kwizigama:\n");
						int youroption24;
						printf("Enter option: ");
						scanf("%d", &youroption24);
						switch (youroption24) {
							case 1:
								system("cls||clear");//clears the window
								printf("Shyiramo pin yawe:");
								break;
						}

						break;
					case 5:
						system("cls||clear");//clears the window
						printf("Andika ayo ushaka kwizigama:\n");
						int youroption25;
						printf("Enter option: ");
						scanf("%d", &youroption25);
						switch (youroption25) {
							case 1:
								system("cls||clear");//clears the window
								printf("Shyiramo pin yawe:");
								break;
						}

						break;
				}
			}
			break;
		case 4:
			system("cls||clear"); //clears the window
			printf("Not Available");
			break;
		case 5:
			system("cls||clear");
			printf("Murakaza neza/Bienvenue/Welcome\n tio sanlam AG PLC online\n");
			printf("1)Kinyarwanda\n");
			printf("2)English\n");
			printf("3)French\n");
			system("4)exit\n");
			int option5;
			printf("Hitamo:\n");
			scanf("%d",&option5);
			switch(option5) {
				case 1:
					system("cls||clear");//clears the window
					printf("1)Ibinyabiziga\n)");
					printf("2)Ingendo\n");
					printf("3)Gusubira inyuma\n");
					printf("4)Gusohoka\n");

					int option51;
					printf("Hitamo:\n");
					scanf("%d",&option51);
					switch(option51) {
						case 1:
start1:
							system("cls||clear");//clears the window
							printf("1)Kongera/kugura ubwishingizi\n)");
							printf("2)igihe buzarangirira\n");
							printf("3)Gusubira inyuma\n");
							printf("4)Gusoka");

							int option511;
							printf("Hitamo:\n");
							scanf("%d",&option511);
							switch(option511) {
								case 1:
									printf("Andika plaque yikinyabiziga\n");
									break;
							}

							break;
						case 2:
							system("cls||clear");//clears the window
							printf("1)Murukoze guhitamo sanlam");
							break;
						case 3:
							system("cls||clear");//clears the window
							goto start1;
							break;
						case 4:
							system("cls||clear");//clears the window
							printf("1)Murukoze guhitamo sanlam");
							break;

					}
					break;
				case 2:
					system("cls||clear");//clears the window
					printf("1)Vehicles\n");
					printf("2)travel\n");
					printf("3)back\n");
					printf("4)exit");
					int option52;
					printf("choose:\n");
					scanf("%d",&option52);
					switch(option52) {
						case 1:
quickstart1:
							system("cls||clear");//clears the window
							printf("1)buy/renew\n)");
							printf("2)check expiry dade\n");
							printf("3)Back\n");
							printf("4)Exit");

							int option51;
							printf("chosoe:\n");
							scanf("%d",&option51);
							switch(option51) {

							}
							break;
						case 2:
							system("cls||clear");//clears the window
							printf("1)thank you for choosing sanlam");
							break;
						case 3:
							system("cls||clear");//clears the window
							goto quickstart1;
							break;
						case 4:
							system("cls||clear");//clears the window
							printf("1)thank you for choosing sanlam");
							break;

					}
					break;
				case 3:
					system("cls||clear");//clears the window
					printf("1)Vehicules\n)");
					printf("2)voyage\n");
					printf("3)Retour\n");
					printf("4)Quite");
					int option53;
					printf("choix:\n");
					scanf("%d",&option53);
					switch(option53) {
						case 1:
quickstart2:
							system("cls||clear");//clears the window
							printf("1)Acheter/renouveler\n)");
							printf("2)Consultter date d'expiration\n");
							printf("3)Retour\n");
							printf("4)Quiter\n");

							int option51;
							printf("chiox:\n");
							scanf("%d",&option51);
						//	switch(option51) {
						//	}

							break;
						case 2:
							system("cls||clear");//clears the window
							printf("1)Merci pour choisir sanlam");
							break;
						case 3:
							system("cls||clear");//clears the window
							goto quickstart2;
							break;
						case 4:
							system("cls||clear");//clears the window
							printf("1)Merci pour choisir sanlam");
							break;;

					}
					break;
				case 4:
					system("cls||clear");//clears the window
					printf("sohoka\n)");
					printf("1)Murukoze guhitamo sanlam");
					break;
			}
			break;
		case 0:
			goto start;
			break;
	}
}

//_______________ SERIVISI ZA BANKI___________________________________________________________________________________________________________________________________ 
void serivisi_za_banki(){
	    int choice, pin, account, amount;

    system("cls||clear");

    printf("1)ATM\n");
    printf("2)Send MoMo to Bank\n");
    printf("3)Get Money From Money Account\n");
    printf("4)Check Account Balance\n");
    printf("5)Delink Bank Account\n");
    printf("0)back\n");
    printf("Make a choice:");
    scanf("%d", &choice);
    system("cls||clear");

    switch (choice) {
        case 1:
            printf("TO Generate ATM Passcode, Enter MM PIN:");
            scanf("%d", &pin);
            if (pin == 12345) {
                printf("You'll receive a message shortly with a passcode you can use for ATM withdrawal");
                return ;  // Exit the program
            } else {
                printf("Incorrect PIN, Try again");
            }
            break;

        case 2:
            system("cls||clear");
            printf("Kohereza amafaranga kuribank\n");
            printf("1)KCB\n");
            printf("2)IM Bank\n");
            printf("3)Bank of Kigali\n");
            printf("4)GT Bank\n");
            printf("5)Zigama\n");
            printf("6)Equity\n");
            printf("7)VisionFund Rwanda\n");
            printf("8)BPR Bank\n");
            printf("9)Unguka\n");
            printf("10)CogeBank\n");
            printf("11)Other Banks\n");
            printf("12)exit\n");
            printf("Make a choice:");
            scanf("%d", &choice);

            if (choice == 12) {
                exit(0);  
            } else if (choice >= 1 && choice <= 11) {
                printf("Enter your PIN:\n");
                scanf("%d", &pin);

                if (pin == 12345) {
                    system("cls||clear");
                    printf("Enter your account:\n");
                    scanf("%d", &account);
                    printf("Enter amount:\n");
                    scanf("%d", &amount);
                    printf("Wohereje amafaranga kuri bank tegereza ubutumwa\n");
                    return ;  // Exit the program
                } else {
                    printf("Incorrect PIN, Try again\n");
                }
            }
            system("cls");
            break;

        case 3:
            system("cls||clear");
            printf("kuvana amafaranga kuri bank\n");
             printf("1)KCB\n");
            printf("2)IM Bank\n");
            printf("3)Bank of Kigali\n");
            printf("4)GT Bank\n");
            printf("5)Zigama\n");
            printf("6)Equity\n");
            printf("7)VisionFund Rwanda\n");
            printf("8)BPR Bank\n");
            printf("9)Unguka\n");
            printf("10)CogeBank\n");
            printf("11)Other Banks\n");
            printf("12)exit\n");
            printf("Make a choice:");
            scanf("%d", &choice);

            if (choice == 12) {
                exit(0);  // Exit the program
            } else if (choice >= 1 && choice <= 11) {
                printf("Enter your PIN:\n");
                scanf("%d", &pin);

                if (pin == 12345) {
                    system("cls||clear");
                      	system("cls||clear");
                        printf("Enter your account:\n");
                        scanf("%d", &account);
                        printf("Enter amount:\n");
                        scanf("%d", &amount);
                        printf("ubikuje amafaranga kuribank yawe mutegereze ubutumwabugufi\n",account,amount);
    
                    return ;  // Exit the program
                } else {
                    printf("Incorrect PIN, Try again\n");
                }
            }
            
            break;

        case 4:
            system("cls||clear");
            printf("kureba amafaranga usigaranye \n");
                printf("kuvana amafaranga kuri bank\n");
             printf("1)KCB\n");
            printf("2)IM Bank\n");
            printf("3)Bank of Kigali\n");
            printf("4)GT Bank\n");
            printf("5)Zigama\n");
            printf("6)Equity\n");
            printf("7)VisionFund Rwanda\n");
            printf("8)BPR Bank\n");
            printf("9)Unguka\n");
            printf("10)CogeBank\n");
            printf("11)Other Banks\n");
            printf("12)exit\n");
            printf("Make a choice:");
            scanf("%d", &choice);

            if (choice == 12) {
                exit(0);  
            } else if (choice >= 1 && choice <= 11) {
                printf("Enter your PIN:\n");
                scanf("%d", &pin);

                if (pin == 12345) {
                    system("cls||clear");
                      	system("cls||clear");
                        printf("Enter your account:\n");
                        scanf("%d", &account);
                        printf("Enter amount:\n");
                        scanf("%d", &amount);
                        printf("kureba  amafaranga asigaye kuribank yawe mutegereze ubutumwabugufi\n",account,amount);
                        printf("your balance is 1RWF. Thank you for using mobile money\n");
    
                    return ;  // Exit the program
                } else {
                    printf("Incorrect PIN, Try again\n");
            break;

        case 5:
            system("cls||clear");
            printf("DELINK THE BANK\n");
            system("cls||clear");

            printf("1)KCB\n");
            printf("2)IM Bank\n");
            printf("3)Bank of Kigali\n");
            printf("4)GT Bank\n");
            printf("5)Zigama\n");
            printf("6)Equity\n");
            printf("7)VisionFund Rwanda\n");
            printf("8)BPR Bank\n");
            printf("9)Unguka\n");
            printf("10)CogeBank\n");
            printf("11)Other Banks\n");
            printf("12)exit\n");
            printf("Make a choice:");
            scanf("%d", &choice);

            if (choice == 12) {
                exit(0);  // Exit the program
            } else if (choice >= 1 && choice <= 11) {
                printf("Enter your PIN:\n");
                scanf("%d", &pin);

                if (pin == 12345) {
                    system("cls||clear");
                    
                    printf("Your phone is delinked from your bank account\n");
                    return ;  // Exit the program
                } else {
                    printf("Incorrect PIN, you cannot delink the account\n");
                }
            }
            break;
        
        case 0:
        	back();
        	break;
        default:
            // Handle invalid choice
            break;
    }

    }

}
	
	return ;	
}






//___________ IZIKORESHYWA MU KOHEREZA __________
// Function to clear the input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ValidPhoneNumber(int phoneNumber) {
    if (phoneNumber >= 780000000 && phoneNumber <= 799999999) {
        return 1; // Valid phone number
    } 
	else {
        printf("transaction has failed. number provided is incorrect.please check the number and try again.\n");
        return 0; // Invalid phone number
    }
}






// __________ ISIKORESHYWA MU KWISHYURA ________________
	// Check momo pin
	int momoPin()
    {
	    char momoCode[10];

    // Prompt user to enter a code in the dial pad
    printf("Shyiramo umubare w'ibanga: ");
    scanf("%9s", momoCode);

    // Check if the entered code is *182#
    if (strcmp( momoCode, "12345") == 0){
    		printf("Kishyura byagenze neza!!!\n");
	}
		 	else
    	{
    		printf("Umubare w' ibanga si uwa nyiri konti'\n");
		}
		return 0;
	}




// ________________________KOHEREZA ____________________

void kohereza(){
	system("clear || cls");
	int kohereza, numero, amount, ayoUfite = 10000, pin = 12345, asigaye, ikiguzi, dest;
   	printf("1)uri muri MoMo\n");
	printf("2)ohereza kuri eKash\n");
	printf("3)ohereza mu mahanga\n");
	printf("4)tesha agaciro umubare gihamya\n");
	printf("5)erekana umubare gihamya\n");
	printf("6)erekana imibare gihamya ifite agaciro\n");
	printf("7)kohereza mu mahanga\n");
	printf("8)igiciro cy'ivunjisha\n");
	printf("0)sohhokamo\n");
	printf("reply:");
	scanf("%d",&kohereza);
	system("clear||cls");
	switch(kohereza)
	{
		case 1:
			do {
				
        printf("nimero ya mobile (Format 07xxxxxxxx): ");
        if(scanf("%d", &numero) == 1){
        	if (ValidPhoneNumber(numero)) {
                            break;
        	}
		}else{
			printf("Washyizemo numoro itariyo!\n");
			printf("ONGERA!\n");
			clearInputBuffer();
		}

    	
	
    } while (1);
			
			printf("emeza umubare w'amafaranga ajya kuri 0%d:\n",numero);
			scanf("%d",&amount);
			if (amount > ayoUfite) {
             printf("nta mafaranga ahagije mufiteho.\n");
             break;
              }
			if(amount<=1000)
			{
			printf("washyizeho Microntroller: %dRWF .ikiguzi cya RWF 20 kirakurikizwa.\n",amount);
			printf("kwemeza kohereza amafaranga kubakoresha mobile shyiramo PIN:\n");
			scanf("%d",&pin);
			if(pin==12345)
			   {
			asigaye=ayoUfite-amount;
			ikiguzi=asigaye-20;
			printf("wohereje %dRwf kuri 0%d\n",amount,numero);
			printf("usigaranye aya mafaranga %d\n",ikiguzi);
			printf("\n");
			   }
			else{
				printf("washyizeho PIN itariyo");
			}
			}
			else if(amount>1000)
			{
			printf("washyizeho Microntroller: %dRWF .ikiguzi cya  RWF 100 kirakurikizwa.\n",amount);
			printf("kwemeza kohereza amafaranga kubakoresha mobile shyiramo PIN:\n");
			scanf("%d",&pin);
			if(pin==12345)
			   {
				asigaye=ayoUfite-amount;
				ikiguzi=asigaye-100;
				printf("wohereje %dRwf kuri %d\n",amount,numero);
				printf("usigaranye aya mafaranga %d\n",ikiguzi);
			    
			   }
			else{
				printf("washyizeho PIN itariyo");
			}
			}
			break;
			
		case 2:	
		printf("shyiramo nimero y'uwakira cyangwa eKash ID:\n");
		scanf("%d",&dest);  
		printf("numero ntiri murieKash\n");	
		break;
		case 3:
		printf("ohereza mu mahanga:\n");
		printf("1.kenya\n2.uganda\n3.zambia\n4.tanzania\n5.DR CONGO\n6.cameroon\n7.cote d'Ivoire\n8.Gambia\n9.Ghana\n10.Guinea Bissau\n11.guinea Connakry\n");
		printf("reply:\n");
	
		break;
		case 4:
		printf("tesha agaciro umubare gihamya\n");
		printf("shyiramo umubare gihamya ushaka gutesha agacrio:\n");
		scanf("%d", &dest);
		printf("umubare gihamya %d wateshejwe agaciro\n", dest);
		break;
		case 5:
		printf("shyiramo umubare gihamya.\n");
		scanf("%d", &dest);
		printf("shyiramo pin yawe\n");
		scanf("%d", &pin);
		if(pin==12345){
		printf("umubare gihamya wawe ni %d\n", dest);
		}
		
		break;
		case 6:
		printf("erekana imibare gihamya igifite agaciro\n\n");
		printf("shyiramo pin yawe\n");
		scanf("%d",&pin);
		if(pin==12345){
			printf("no vouchers found\n");
		}
		break;
		case 7:
		printf("kohereza mu mahanga\n");
		printf("1)east africa\n2)southern africa\n3)west africa\n4)central africa\n 0)gusubira inyuma\n");
		break;
		case 8:
		printf("igiciro cy'ivunjisha:\n");
		printf("1.kenya\n2.uganda\n3.zambia\n4.tanzania\n5.DR CONGO\n6.cameroon\n7.cote d'Ivoire\n8.Gambia\n9.Ghana\n10.Guinea Bissau\n11.guinea Connakry\n");
		break;
		case 9:
		printf("9)sohokamo:\n");
		case 0:
		back();
		break;
		
	}
	
}


// 3___________________KWISHYURA UKORESHEHE MOMO_______________________________________________
void kwishyura()
{
	system("cls||clear");
	int choice;
	int bill;
	int menu;
   menu:	printf("1)ifatabuguzi rya Tv\n");
	printf("2)PostPaid bill\n");
	printf("3)ishyura PSF\n");
	printf("4)Pay Yego\n");
	printf("5)amazi\n");
	printf("6)Rwanda Revenue\n");
	printf("7)Service z'irembo\n");
	printf("8)Airport Parking\n");
	printf("9)Businesses\n");
	printf("10) amafaranga y'ishuri\n");
	printf("11)security n hygiene\n");
	printf("12)sohokamo\n");
	printf("0)gusubira inyuma\n");
	printf("reply:\n");
	scanf("%d",&bill);
	system("clear||cls");
	switch(bill)
	{
		case 1: //handling kugura ifatabuguzi
		    
		   	printf("1)Startimes\n");
	        printf("2) DSTV\n");
          	printf("3) AZAMTV\n");
        	printf("4)Canal+\n");
        	printf("5) Sohokamo\n");
        	printf("0) Gusubira inyuma\n");
        	
        	int option4;
        	printf("enter option:\n");
        	scanf("%d",&option4);
    
    switch(option4){
    	
    	case 1 : //enter in startimes 
    	system("clear||cls");
    	char numero_ikarita[15];
    	printf("shyiramo nimero y'ikarita yawe:\n");
    	scanf("%s",numero_ikarita);
    	if(strlen(numero_ikarita) != 11){
    		printf("UNKNOWN APPLICATION");
		} 
		 else if(strlen(numero_ikarita)== 11){
			 printf(" Startimes Smartcard:%s,\nCustomer Name:name\n Package Name:DTT_Nova\n 1)confirm\n2)change package\n 0)Gusubira inyuma\n ",numero_ikarita);
			 int yourOption;
	    	printf(" Enter your option:\n");
          	scanf("%d",&yourOption);
          	switch(yourOption)
          	{
          		case 1:
          			system("clear||cls");
                    printf("1) 12,000RWF (90 days)\n");
                    printf("2) 8,000RWF (60 days)\n");
                    printf("3) 4,000RWF (30 days)\n");
                    printf("4) 1,350RWF (7 days)\n");
                    printf("5) 500RWF (1 day)\n");
                    printf("0) Gusubira inyuma\n");
                    	
				    int yourOption2;
	    	         printf(" Enter your option:\n");
          	         scanf("%d",&yourOption2);
          	          switch(yourOption2)
          	             {
          	        	case 1: //handle for option 1 
                      system("clear||cls");
          	             momoPin();
          	             break;	
          	             	case 2: //handle for option 2
                      system("clear||cls");
          	            momoPin();
          	             break;	
          	             	case 3: //handle for option 3
                      system("clear||cls");
                         momoPin();
          	             break;	
          	             	case 4: //handle for option 4
                      system("clear||cls");
          	          momoPin();
          	             break;	
          	             	case 5: //handle for option 5 
                      system("clear||cls");
                      momoPin();
          	             break;
						  	case 0: //handle for option 0
                      system("clear||cls");
          	          		displayMenu();		
								break;		 	
						   }
                        break;
                        case 2://change package
                        system("clear||cls");
                        int interval;
                   start: printf("Select the product\n");
                    printf("1) DTT_BASIC\n");
                    printf("2)DTT_CLASSIC\n");
                    printf("3)DTT_UNIQUE\n");
                    printf("0) Gusubira inyuma\n");
                    printf("enter option:\n");
                    scanf("%d",&interval);
                    switch(interval)
                    {
                    	case 1: //select DDT_BASIC
                    	 system("clear||cls");
                    	 printf("1) 6500RWF(30 days)\n");
                         printf("2)2200RWF(7 days)\n");
                         printf("3)700RWF(1 day)\n");
                         printf("0)Gusubira inyuma\n");
                         
                         int interval1;
                         printf("enter option:\n");
                         scanf("%d",&interval1);
                         switch(interval1)
						 {
						 	case 1:
						 	momoPin();
						        break;
						    case 2:
						 	momoPin();
						        break;
						    case 3:
						 		momoPin();
						        break;
						    case 0:
						    	goto start;
                                
						        break;
						        
												  }   break;                      
                         
                        case 2://DDT_CLASSIC 
                         system("clear||cls");
                    	 printf("1) 8500RWF(30 days)\n");
                         printf("2)2900RWF(7 days)\n");
                         printf("0)Gusubira inyuma\n");
                         
                         int interval2;
                         printf("enter option:\n");
                         scanf("%d",&interval2);
                         switch(interval2)
						 {
						 	case 1:
	                        momoPin();	                    
						        break;
						    case 2:
						 	momoPin();
						        break;
						        case 0://gusubira inyuma
						        goto start;
                        		break;
					}break;
                        	case 3: //DDT_UNIQUE
                        	system("clear||cls");
                    	 printf("1) 10000RWF(30 days)\n");
                         printf("2)3500RWF(7 days)\n");
                         printf("0)Gusubira inyuma\n");
                         
                         int interval3;
                         printf("enter option:\n");
                         scanf("%d",&interval3);
                         switch(interval3)
						 {
						 	case 1:
						 	momoPin();
						        break;
						    case 2:
						 	momoPin();
						        break;
						        case 0://gusubira inyuma
						        goto start;
                        		break;
					}
                        	break;
            
            }
        }
        
            break;
            
			case 2: //DSTV
			   	system("clear||cls");
			    printf("Select bouquet\n");
             	printf("1)Isange(access)-5000.00RWF\n");
            	printf("2)Iwacu(Family)-10000.00 RWF\n");
             	printf("3)Inganji(compact)-20000RWF\n");
              	printf("4)Ishema(compact+)-30000RWF\n");
            	printf("5)Premium EA-100000.00 RWF\n");
            	printf("6)Addon French Plus- 37000.00 RWF\n");
            	printf("7)premium EA+Asia-126000.00RWF\n");
	            printf("8)Asia-45900.00 RWF\n");
	            printf("9)Francais Anglais-139000.00 RWF\n");
	            printf("0) Gusubira inyuma\n");
	            
	            int bouquet;
	            printf("enter your bouquet option:\n");
	            scanf("%d",&bouquet);
	            
	            switch(bouquet)
	            {
	            	case 1:
	            			 system("clear||cls");
    	                     char numero_ikarita1[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita1);
    	                     if(strlen(numero_ikarita1)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita1)== 10){
		                     momoPin();  }
	            		break;  //break for case1 when we enter isange
	            		case 2:
	            			 system("clear||cls");
    	                     char numero_ikarita2[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita2);
    	                     if(strlen(numero_ikarita2)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita2)== 10){
		                     	momoPin();
		                }
	            			break;
	            		case 3:
	            			 system("clear||cls");
    	                     char numero_ikarita3[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita3);
    	                     if(strlen(numero_ikarita3)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita3)== 10){
		                     momoPin();
		                }
	            			break;
	            	case 4:
	            			 system("clear||cls");
    	                     char numero_ikarita4[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita4);
    	                     if(strlen(numero_ikarita4)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita4)== 10){
		                     	momoPin();
		                    }
	            			break;
	            	case 5:
	            			 system("clear||cls");
    	                     char numero_ikarita5[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita5);
    	                     if(strlen(numero_ikarita5)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita5)== 10){momoPin();
		                     	
		                }
	            		break;
	            		case 6:
	            				 system("clear||cls");
    	                     char numero_ikarita6[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita6);
    	                     if(strlen(numero_ikarita6)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita6)== 10){
		                     momoPin();
		                     	
		                }
	            			break;
	            		case 7:
	            				 system("clear||cls");
    	                     char numero_ikarita7[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita7);
    	                     if(strlen(numero_ikarita7)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita7)== 10){
		                    momoPin();
		                }
	            			break;
	            		case 8:
	            				 system("clear||cls");
    	                     char numero_ikarita8[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita8);
    	                     if(strlen(numero_ikarita8)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita8)== 10){
		                     	momoPin();
		                }
	            			break;
	            		case 9:
	            				 system("clear||cls");
    	                     char numero_ikarita9[15];
    	                     printf("shyiramo nimero y'ikarita yawe:\n");
    	                     scanf("%s",numero_ikarita9);
    	                     if(strlen(numero_ikarita9)!= 10){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero_ikarita9)== 10){
		                     momoPin();
		                }
	            			break;
	            		case 0:
	            			goto menu;
	            			break;
				} break; //break for case 2 dtsv
            case 3: //AZAM
            printf("Could not perform the transaction.Please call customer care for assistance\n");//azam option no longer works haha
			break; //break for case 3 azam 
			case 4: //canal+
			    printf("1.Kongera ifatabuguzi\n");
            	printf("2. Guhindura ifatabuguzi\n");
             	printf("3. Numero ya dekoderi\n");
              	printf("4. Langue/language/Ururimi\n");
              	int ifatabuguzi;
              	printf("enter option:\n");
              	scanf("%d",&ifatabuguzi);
              	switch(ifatabuguzi)
              	{
              		case 1://kongeramo ifatabuguzi
              				 system("clear||cls");
    	                     char numero[15];
    	                     printf("shyiramo nimero ya dekoderi yawe:\n");
    	                     scanf("%s",numero);
    	                     if(strlen(numero)!= 14){ //dstv card has upto 10 digits
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                     else if(strlen(numero)== 14){
		                     momoPin();
		                }
              			break;
              		case 2: //guhindura ifatabuguzi
              		         
              		    	 system("clear||cls");
    	                     char numero1[15];
    	                     printf("shyiramo nimero ya dekoderi yawe:\n");
    	                     scanf("%s",numero1);
    	                    
		                    if(strlen(numero1)== 14){
		                    	 system("clear||cls");
		                        printf("Hitamo ifatabuguzi\n");
		                        printf("1.IKAZE 5000.0RWF\n");
		                        printf("2.ZAMUKA 10000.0RWF\n");
		                        printf("3.ZAMUKA NA SIPORO 20000RWF\n");
								printf("4.UBUKI 30000.0RWF\n");
								int hitamo;
								printf("hitamo ifatabuguzi ushaka:\n");
								scanf("%d",&hitamo);
								switch(hitamo)
								{
									case 1: //ikaze package
									    system("clear||cls");
								       printf("1.UKWEZI\n 2.AMEZI 3\n");
								       int op;
								        printf("Hitamo:\n");
    	                                scanf("%d",&op);
    	                                switch(op)
    	                                {
    	                                	case 1: system("clear||cls");
    	                                		printf("Kwishyura byagenze neza, mutegereze\n amasegonda 5 murabona inyemezabwishyu,\ncgmukande *182*7*1# mwemeze ubwishyu bwanyu\n");
    	                                		
    	                                		break;
    	                                	case 2:
    	                                			printf("Kwishyura byagenze neza, mutegereze\n amasegonda 5 murabona inyemezabwishyu,\ncgmukande *182*7*1# mwemeze ubwishyu bwanyu\n");
    	                                		break;
										}
										break;
									case 2: system("clear||cls");
										 printf("1.UKWEZI\n 2.AMEZI 3\n");
								       int op1;
								        printf("Hitamo:\n");
    	                                scanf("%d",&op1);
    	                                switch(op1)
    	                                {
    	                                	case 1: system("clear||cls");
    	                                		printf("Kwishyura byagenze neza, mutegereze\n amasegonda 5 murabona inyemezabwishyu,\ncgmukande *182*7*1# mwemeze ubwishyu bwanyu\n");
    	                                		
    	                                		break;
    	                                	case 2: system("clear||cls");
    	                                			printf("Kwishyura byagenze neza, mutegereze\n amasegonda 5 murabona inyemezabwishyu,\ncgmukande *182*7*1# mwemeze ubwishyu bwanyu\n");
    	                                		break;
										}
										break;
									case 3: system("clear||cls");
										 printf("1.UKWEZI\n 2.AMEZI 3\n");
								       int op2;
								        printf("Hitamo:\n");
    	                                scanf("%d",&op2);
    	                                switch(op2)
    	                                {
    	                                	case 1:
    	                                		printf("Kwishyura byagenze neza, mutegereze\n amasegonda 5 murabona inyemezabwishyu,\ncgmukande *182*7*1# mwemeze ubwishyu bwanyu\n");
    	                                		
    	                                		break;
    	                                	case 2:
    	                                			printf("Kwishyura byagenze neza, mutegereze\n amasegonda 5 murabona inyemezabwishyu,\ncgmukande *182*7*1# mwemeze ubwishyu bwanyu\n");
    	                                		break;
										}
										break;
									case 4: system("clear||cls");
										 printf("1.UKWEZI\n 2.AMEZI 3\n");
								       int op3;
								        printf("Hitamo:\n");
    	                                scanf("%d",&op3);
    	                                switch(op3)
    	                                {
    	                                	case 1:
    	                                		printf("Kwishyura byagenze neza, mutegereze\n amasegonda 5 murabona inyemezabwishyu,\ncgmukande *182*7*1# mwemeze ubwishyu bwanyu\n");
    	                                		
    	                                		break;
    	                                	case 2:
    	                                			printf("Kwishyura byagenze neza, mutegereze\n amasegonda 5 murabona inyemezabwishyu,\ncgmukande *182*7*1# mwemeze ubwishyu bwanyu\n");
    	                                		break;
										}
										break;
								}
								
								}
							else{ 
    	                    	printf("UNKNOWN APPLICATION");
		                                                      } 
		                }
              			break;// break for guhindura ifatabuguzi
              		
				  }
			break; // break for canal+ case
			
			case 5: //sohokamo
		            printf("Thank you for using mobile money\n");
			break;
			case 0: //gusubira inyuma 
				displayMenu();
               printf("Enter your choice: ");
                scanf("%d", &choice);
               if (choice == 3) {
         kwishyura();
        } 
			break;
            
	break;		  } break; 
	
		//   Handling Postpaid bill 
	case 2: system("clear||cls");
	    double amount1;
		 int konti;
		 char mobile[12];
		 char impamvu[50];
		 printf("Umubare wa konti:\n");
		 scanf("%d",&konti);
		  system("clear||cls");
		  printf("Nimero ya Mobile:\n");
		  scanf("%s",mobile);
		   system("clear||cls");
		    printf("Umubare wamafaranga:\n");
		 scanf("%lf",&amount1);
		  system("clear||cls");
		  printf("Shyiramo Impamvu:\n");
		   scanf("%49s",impamvu);
		   system("clear||cls");
		    printf("Washyizeho:ccount number%d, receiver\n MSISDN %s, amount %.2lf,message%s.Ikiguzi cya RWF 0\n kirakurikizwa.\n",konti,mobile,amount1,impamvu);
		                    momoPin();
		                     		break; //postpaid bill case
		
	case 3: //ishyura PSF
	     system("clear||cls");
	    printf("External application down\n");
			break;
	case 4: // pay yego
	     system("clear||cls");
	    int MM_pin[5];
	    int urugendo_ID[5];
	    double umubare;
	    printf("Injiza Urugendo ID\n");
	    scanf("%d",urugendo_ID);
	    system("cls||clear");
	    printf("Injiza umubare\n");
    	scanf("%lf",&umubare);
    	system("cls||clear");
    	printf("Winjije:UrugendoID:%d, umubare\n:%lf.Ikkiguzi cya RWF 0 kirakurikizwa.Emeza\n inyishyu,Injiza MM pin.",urugendo_ID,umubare);
        momoPin();
	 break;//pay yego
	
	case 5:  //Amazi
	     system("clear||cls");
	    char Nimero_konti[9];
	    printf("Nimero ya konti:\n");
	    scanf("%s",Nimero_konti);
	    if(strcmp(Nimero_konti , "232412364") == 0){
	    momoPin();
	    system("cls");
	    printf("1) Minimum payment: 118, Outstanding\nbalance:0.0, Customer ID:%s.Pay Water Bill.\n 2) Sohokamo\n0) Gusubira inyuma\n",Nimero_konti);
	    int water_bill;
	    printf(" Enter option:\n");
	    scanf("%d",&water_bill);
	    if(water_bill == 1)
	    {
	    	printf("Kwishyura byagenze neza, mutegereze\n amasegonda 5 murabona inyemezabwishyu,\ncgmukande *182*7*1# mwemeze ubwishyu bwanyu\n");
		}
		else if(water_bill == 2)
		{
		   printf(" Thank you for using Mobile Money");
		}
		else if(water_bill == 0)
		{
		  	goto menu;	
		}}
		else
		{ 
		printf("Could not perform the transaction. Please call customer care for assistance.");
		}
		break; //Amazi
	case 6:  // Rwanda Revenue
	      system("clear||cls");
	    char Nimero_konti1[9];
	    printf("Nimero ya konti:\n");
	    scanf("%s",Nimero_konti1);
	    if(strcmp(Nimero_konti1 , "101921017") == 0){
	    momoPin();
	    system("cls");
	    printf("1) Minimum payment: 118, Outstanding\nbalance:0.0, Customer ID:%s.Pay Tax Bill.\n 2) Sohokamo\n0) Gusubira inyuma\n",Nimero_konti1);
	    int tax_bill;
	    printf(" Enter option:\n");
	    scanf("%d",&tax_bill);
	    if(tax_bill == 1)
	    {
	    	printf("Kwishyura byagenze neza, mutegereze\n amasegonda 5 murabona inyemezabwishyu,\ncgmukande *182*7*1# mwemeze ubwishyu bwanyu\n");
		}
		else if(tax_bill == 2)
		{
		   printf(" Thank you for using Mobile Money");
		}
		else if(tax_bill == 0)
		{
		  	goto menu;	
		}}
		else
		{ 
		printf("Could not perform the transaction. Please call customer care for assistance.");
		}
		 
		break; // break for RRA
    
	case 7:  //Servisi z' irembo
    	
    	printf("\tNomero yo Kwishyuriraho\t\n");
	  scanf("%d",&choice);
	    momoPin();
    	break;  // break for irembo services
   
    case 8: // Airport Parking
	  printf("\n\tWELCOME TO KIGALI INTERNATIONAL\n\tAIRPORT CAR PARKING\t\n");
	  printf("\n\t1.English \n");
        printf("\t2.Kinyarwanda\n");

        scanf("%d", &choice);
          system("cls");
     switch(choice){

     case 1:
	    printf("\n\tWELCOME TO KIGALI INTERNATIONAL\n\tAIRPORT CAR PARKING\t\n");
	    printf("\n\tEnter Ticket number\n\t") ;

	scanf("%d", &choice);
	  momoPin();
	  break;
     case 2:
	     printf("\n\tWELCOME TO KIGALI INTERNATIONAL\n\tAIRPORT CAR PARKING\t\n");
	    printf("\n\tMushyiremo nimero y'itike\n\t") ;

	scanf("%d", &choice);
	  momoPin();
     }
    scanf("%d", &choice);
          

        break;
    
    case 9:     //Businesses
        	printf("\n\tVisit any MTN store or a MobileMoney\n\tAgent to register.You must have an active\n\tMTN SIM Card or buy a new one,your ID\n\tCard or Passport.");
      break;

    case 10: //Amafaranga y' Ishuri
           printf("\n\t1)Andika Nomero iranga umunyeshuri\n");
	printf("\t2)Andika Nomero iranga ikigo cy'ishuri\n");
	printf("\t0)Gusubira inyuma\n");
	 scanf("%d", &choice);
          system("cls");

          switch(choice) {

     case 1:
	   printf("\n\tAndika Nomero iranga umunyeshuri\n\t");
	   printf("\n");
	   scanf("%d", &choice);
          system("cls");
     case 2:
	   printf("\n\tAndika Nomero iranga ikigo cy'ishuri\n\t");
	   printf("\n");
	   scanf("%d", &choice);
	    system("clear||cls");
       printf("\n\t1)Andika Nomero iranga umunyeshuri\n");
          scanf("%d", &choice);
       	momoPin();
    	break;
		}
	
	case 11:    
	   printf("\n\t1)Garbage Collection\n");
	   printf("\t2)Security\n");
	   printf("\t3)rw_Saving\n");
	   printf("\t4)Sohokamo\n");
	   printf("\t0)subira inyuma\n");
       int choice1;
       printf("enter option:\n");
        scanf("%d", &choice1);
        switch(choice1)
        {
        		case 1:
      	printf("\n\t1)Coped\n");
	    printf("\t0)Gusubira inyuma\n");
	    scanf("%d",&choice1);
	     system("cls");
	      switch(choice1){

              case 1:
    	 printf("\nEnter Customer Account\n");
    	 scanf("%d",&choice1);
    	 momoPin();
    	 break;
    	 system("cls");
              case 0:
	     printf("Return to main menu...");
	     break;
default:
     printf("Invalid choice. Please try again.\n");
     break;
    }
    break;
 
               case 2:
	    printf("\n\t1)Coped\n");
	    printf("\t0)Gusubira inyuma\n");
	    scanf("%d", &choice1);
          system("cls");
             switch(choice1){

              case 1:
    	printf("\nEnter Customer Account\n");
    	 scanf("%d",&choice1);
    	 momoPin();
    	 break;
    	 system("cls");
              case 0:
           back();
              	break;
default:
     printf("Invalid choice. Please try again.\n");
     break;
    }
    break;
       
	   case 3:
               	printf("Invalid application response\n");
               	break;
     case 4:
     	        printf("Thank you for using mobile money\n");
     	break;
     case 0:
     	displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 3) {
         kwishyura();
        } 
      }
     	break; // this break is for the first case of hygiene and security
	
	case 12: //sohokamo
	        system("cls");
	       printf("Thank you for using mobile money\n");
	 break;	
	
	case 0:   // Gusubira inyuma
	    back();
		break;
		}// this bracket is for switch(bill)
	
    	
}//void paybill()
  

//6 ______________ KONTI YANGE YA MOMO _____________________________________________________________
void konti_Yange_Ya_MoMo()
{
	
system("clear || cls");                      //clearing the existing display

    void Kureba_Asigaye();
	void Raporo_ngufi();
	void Kubona_imabare_ya_cash_power_iherutse();
	void Preapproavave_Transactions();
	void Guhindura_Ururimi();
	void My_offers();
	 int choice;
system("clear || cls");
	printf("\t\n\t1)Kureba_Asigaye\n\t2)Raporo_ngufi\n\t3)Kubona_imabare_ya_cash_power_iherutse\n\t4)Preapproavave_Transactions\n\t5)Guhindura_Ururimi\n\t6)My_offers\n\t0)Gusubira_ahabanza\n\t\n");

	scanf("%d",&choice);
		switch(choice)
		{
     	case 1:
     		Kureba_Asigaye();
	       break;
	   case 2:
            Raporo_ngufi();
			break;
		case 3:
			Kubona_imabare_ya_cash_power_iherutse();
			break;
		case 4:
		     Preapproavave_Transactions();
			break;
     	case 5:
             Guhindura_Ururimi();
		  break;
		  case 6:
		    My_offers();
			break;
			case 0:
				back();
             return;
		   
		default:
		 printf("your choice was incorrect  please try again\n");
			break;
		}
}
	void Kureba_Asigaye()
	{
	char pin[5];
	int amount=1000;
	system("clear || cls");
		 printf("kwemeza Kureba amafaranga asigaye,shyiramo PIN\n");
		 scanf("%s",pin);
		 printf("MTN Rwandacell Message\n");
		 printf("--------------------\n");
		 printf("Musigaranye aya mafaranga\n");
		 printf("kuri ikaze pack musigaranye %d",&amount);
		 printf("-\n.Kanda *182*2*1# Wigurire amainite.urakoze gukoresha MObile Money\n");
}
	void Raporo_ngufi()
	{
		char pin[5];
		system("clear || cls");
       	printf("Kwemeza kureba raporo ngufi shyiramo PIN\n");
        scanf("%s",pin);
        printf("MTN Rwandacell Message\n\n");
        printf("--------------------\n");
        printf("Ibyakozwe urakoze gukoresha Mobile Money\n");
     }
 
     void Kubona_imabare_ya_cash_power_iherutse()
	 {
	 	system("clear || cls");
	 	char konteri_no[20];
	 	char pin[5];
	 	printf("Nimero ya Konteri\n");
		scanf("%s",konteri_no);
		printf("Shyiramo PIN\n");
		scanf("%s",pin);
		 printf("MTN Rwandacell Message\n\n");
		 printf("--------------------\n");
        printf("No Electricity Token found\n");
	 }
	 void Preapproavave_Transactions()
	 {
	 	system("clear || cls");
	 	char pin[5];
	 	int ptchoice;
	 	int ptchoice1;
	 	printf("Hitamo PIN\n");
	 	scanf("%s",pin);
	 	printf("select transaction\n");
	 	printf("\t1)11389559\n\t0)gusubira inyuma\n");
	 	scanf("%d",&ptchoice);
	 	switch(ptchoice){
	 		case 1:
	 			printf("do you want tp approve the preapproval request?\n");
	 		printf("\t1)yego\n\t2)oya\n\t0)gusubira inyuma\n");
	 		scanf("%d",&ptchoice1);
	 		switch(ptchoice1)
		{
		case 1:
		printf("Hitamo PIN\n");
		scanf("%s",pin);
		printf("MTN Rwandacell Message\n");
		printf("--------------------\n");
        printf("Coud not perform the transaction.\n please call customer care for assitance"); 
		break;
		case 2:
		printf("Hitamo PIN\n");
		scanf("%s",pin);
		printf("MTN Rwandacell Message\n");
		printf("--------------------\n");
        printf("Coud not perform the transaction.\n please call customer care for assitance"); 
        break;
        case 0:
        konti_Yange_Ya_MoMo();
        break;
        default:
        	break;
		}
		case 0:
		konti_Yange_Ya_MoMo();
	 	break;
	     default:
        	break;
		}
	 	
	 }
	 	void Guhindura_Ururimi()
		 {
		 	system("clear || cls");
		 	int Lang;
		 	char pin[5];
		printf("Hitamo ururimi\n");
		printf("\t1)EN\n\t2)kin\n\t0)gusubira inyuma\n");
        scanf("%d",&Lang);
		switch(Lang){
		case 1:
		printf("Shyiramo MM PIN");
		scanf("%s",pin);
		printf("MTN Rwandacell Message\n");
		printf("--------------------\n");
        printf("Ururimi rwahindutse\n");
		break;
		case 2:
		printf("Enter MM PIN to change language");
		scanf("%s",pin);
		printf("MTN Rwandacell Message\n");
		printf("--------------------\n");
        printf("your Lnguage has been changed successfully\n");
		break;
		case 0:
		konti_Yange_Ya_MoMo();
		break;
		default:
		 printf("your choice was incorrect  please try again\n");
		break;
		}
	
		 }
		 void My_offers()
		 {
		system("clear || cls");
		int off;
		char pin[5];
		printf("\t1)Recharge&Get\n\t2)Voice_Bunbles\n\t3)Bundle za Internet\n\t0)Gusubira Inyuma\n");
		printf("Hitamo\n");
		scanf("%d",&off);
		switch(off){
		case 1:
		printf("Shyiramo MM PIN");
		scanf("%s",pin);
		printf("MTN Rwandacell Message\n");
		printf("--------------------\n");
        printf("No available choices\n");
		break;
		case 2:
		printf("Enter MM PIN to change language\n");
		scanf("%s",pin);
		printf("MTN Rwandacell Message\n");
		printf("--------------------\n");
        printf("No available choices\n");
		break;
		case 3:
		printf("Enter MM PIN to change language\n");
		scanf("%s",pin);
		printf("MTN Rwandacell Message\n");
		printf("--------------------\n");
        printf("No available choices\n");
		break;
		case 0:
		konti_Yange_Ya_MoMo();
		break;	

	 }

	}

// 7 ___________ ibyemejwe bitaranozwa ___________ 

void Ibyemejwe_bitaranozwa()
{

system("clear || cls");                      //clearing the existing display

    void Emeza_kwishyura();
	void Saba_kubikurizwa();
	void Gusaba_gusubizwa_amafaranga_wohereje();
	void Emeza_cg_uhakane_gusubiza_amafaranga_wakiriye();
	void Gusubira_ahabanza();
	 int choice;
system("clear || cls");
printf("Ibyemezo bitaranozwa");
	printf("\t\n\t1)Emeza_kwishyura\n\t2)Saba_kubikurizwa\n\t3)Gusaba_gusubizwa_amafaranga_wohereje\n\t4)Emeza_cg_uhakane_gusubiza_amafaranga_wakiriye\n\t0)Gusubira_ahabanza\n\t\n");

	scanf("%d",&choice);
		switch(choice)
		{
     	case 1:
     		Emeza_kwishyura();
	       break;
	   case 2:
		   Saba_kubikurizwa();
			break;
		case 3:
			Gusaba_gusubizwa_amafaranga_wohereje();
			break;
		case 4:
			Emeza_cg_uhakane_gusubiza_amafaranga_wakiriye();
			break;
			case 0:
				back();
             return;
	
		default:
		 printf("your choice was incorrect  please try again\n");
			break;
		}
}
	void Emeza_kwishyura()

{
	char pin[5];
	system("clear || cls");
		 printf("Shyiramo PIN\n");
		 scanf("%s",pin);
		 printf("MTN Rwandacell Message\n");
		 printf("---------------------\n");
		 printf("you don't have any pending approval(s).\n");
}
	void Saba_kubikurizwa()
	{
		char pin[5];
		system("clear || cls");
       	printf("Shyiramo PIN\n");
        scanf("%s",pin);
        printf("MTN Rwandacell Message\n");
        printf("---------------------\n");
        printf("yello,ubu wemerewe kubikuza muminota itatu\n");
     }
	 void Gusaba_gusubizwa_amafaranga_wohereje()
	 {
	 	system("clear || cls");
	 	char pin[5];
	 	int ptchoice;
	 	//printf("Hitamo PIN\n");
	 	//scanf("%s",pin);
	 	printf("Kugarura \n");
	 	printf("\t1)Kugarura_amafaranga_wohereje\n\t2)Guhagarika ubusabe_bwo_gusubizwa_amafaranga_wohererejwe\n\t0)Gusubira inyuma\n\n");
	 	scanf("%d",&ptchoice);
	 	switch(ptchoice){
	 	case 1:
	 	printf("Kubona urutuonde rw'ibikorwa bitaranozwa byo gusubiza amafaranga mwoherereje,shyiramo PIN\n");
	 	scanf("%s",pin);
	 	printf("MTN Rwandacell Message\n");
	 	 printf("---------------------\n");
	 	printf("Nta gikorwa gihari");
	 	break;
		case 2:
		printf("Kubona urutuonde rw'ibikorwa bitaranozwa byo gusubiza amafaranga mwoherereje,shyiramo PIN\n");
		scanf("%s",pin);
		printf("MTN Rwandacell Message\n");
		 printf("---------------------\n");
		printf("Nta busabe bwo gusubiza buhari");
        break;
        case 0:
        Ibyemejwe_bitaranozwa();
        break;
        default:
         printf("your choice was incorrect  please try again\n");
        break;
		}

	 }
	 void Emeza_cg_uhakane_gusubiza_amafaranga_wakiriye()
		 {
		 	system("clear || cls");
		 	char pin[5];
		 	int ptchoice;
		 	//printf("Hitamo PIN\n");
		 	//scanf("%s",pin);
		 	printf("Emeza cg uhakane gusubiza amafaranga wakiriye \n");
		 	printf("\t1)Emeza gusubiza amafaranga wakiriye \n\t2)Hagarika ubusabe bwo gusubiza amafaranga\n\t0)Gusubira inyuma\n\n");
		 	scanf("%d",&ptchoice);
		 	switch(ptchoice){
		 	case 1:
		 	printf("Kubona urutuonde rw'ibikorwa bitaranozwa byo gusubiza amafaranga mwoherereje,shyiramo PIN\n");
		 	scanf("%s",pin);
		 	printf("MTN Rwandacell Message\n");
		 	 printf("---------------------\n");
		 	printf("Nta busabe bwo gusubiza uherutse gukora");
		 	break;
			case 2:
			printf("Kubona urutuonde rw'ibikorwa bitaranozwa byo gusubiza amafaranga mwoherereje,shyiramo PIN\n");
			scanf("%s",pin);
			printf("MTN Rwandacell Message\n");
			 printf("---------------------\n");
			printf("Nta busabe bwo gusubiza buhari");
	        break;
	        case 0:
	        Ibyemejwe_bitaranozwa();
	        break;
	        default:
	         printf("your choice was incorrect  please try again\n");
	        break;
			}
	 }



// ___________ BABYLY ____________________________
void babyly(){
	system("cls||clear");
	char ID[30];
	
	printf("\n\tIkaze kuri bably\n\tAndika nomero z'indangamuntu yawe\n\tWelcome to bably\n\tPlease enter your Id Number\n\t\n\t");
      scanf("%s", ID);
      system("cls || clear");
    if(strlen(ID) == 16 ){
	
      printf("\n\tHabaye ikibazo muri sisitemu,mwongere\n\tmugerageze mukanya.\n\t\n\t");
	}
	else{
		printf("Murakoze Gukoresha babyly!!!");
	}
}
//________________________momo terms and conditions________________________________________//
void MOMO_Terms_And_Condtions()
{
	printf("Urakoze gukoresha ino serivisi, wamaze kwemeza amategeko n'amabwiriza agenga MoMo.");
}
//_______________________________exit___________________________________________________
void exit()
{
	printf("Thank you for using Mobile Money");
}
//_____________________________InguzanyonoKuzigama_______________________________________
 void Mokash()
	 {
	 	void konti_Yange_Ya_MoMo();
	 	system("clear || cls");
	 	char pin[5];
	 	int ptchoice;
	 	int ptchoice1;
	 	int money;
	 	  printf("Inguzanyo no kuzigama\n");
          printf("\t1) Kuzigama\n");
          printf("\t2) Inguzanyo\n");
          printf("\t3) konti yawe\n");
          printf("\t4) amategeko n'amabwiriza\n");
    
	 	scanf("%d",&ptchoice);
	 	switch(ptchoice){
	case 1:
	 			printf("Kuzigama\n");
	 		printf("\t1)Bitsa\n\t2)Bikuza\n\t3)Kuzigama ako kanya\n\t0)gusubira inyuma\n");
	 		scanf("%d",&ptchoice1);
	 		switch(ptchoice1)
		{
		case 1:
	    	printf("Shyiramo umubare\n");
		    scanf("%s",&money);
		    printf("Shyiramo PIN ya Mobile money wemeze ko wabikije FRW %s Kuri MTN Mokash.\n",&money);
	 	    scanf("%s",pin);
		    printf("MTN Rwandacell Message\n");
	     	printf("--------------------\n");
            printf("Coud not perform the transaction.\n please call customer care for assitance"); 
		break;
		case 2:
		  printf("Hitamo PIN\n");
		  scanf("%s",pin);
		  printf("MTN Rwandacell Message\n");
		   printf("--------------------\n");
          printf("Coud not perform the transaction.\n please call customer care for assitance"); 
        break;
        case 3:
          	printf("Shyiramo umubare\n");
		    scanf("%s",&money);
		    printf("Shyiramo PIN ya Mobile money wemeze ko wabikije FRW %s Kuri MTN Mokash.\n",&money);
	 	    scanf("%s",pin);
		    printf("MTN Rwandacell Message\n");
	     	printf("--------------------\n");
            printf("Coud not perform the transaction.\n please call customer care for assitance"); 
         break;
        case 0:
          Mokash();
         break;
         
        default:
        	printf("invalid choice\n");
        	break;
		}
	case 2:
		printf("Shyiramo MM PIN");
		scanf("%s",pin);
		printf("MTN Rwandacell Message\n");
		printf("NO such transactions. ugerageze mu kanya\n");
        printf("No available choices\n");
		break;
	 	break;
	 	
	case 3:
		konti_Yange_Ya_MoMo();
	 	break;
	case 4:
		printf("kugirango wemeze amategeko n'amabwiriza,\n sura urubuga rwacu ku bindi bisobanuro \n Mokash http://bit.ly/1jppt.");
	 	break;
	default:
        	break;
		}
	 	
	 }
	
	void STAFF(){
		printf("Ntimwemerewe gukoresha iyi Service\n");
	}
	void KCB(){
		printf("Ntimwemerewe gukoresha iyi Service\n");
	}
void InguzanyonoKuzigama()
{
		 int choice;
system("clear || cls");
	printf("\t\n\t1)Mokash\n\t2)STAFF\n\t3)KCB\n\t0)Gusubira inyuma\n\t\n");

	scanf("%d",&choice);
		switch(choice)
		{
     	case 1:
     		Mokash();
	       break;
	   case 2:
            STAFF();
			break;
		case 3:
			KCB();
			break;
			case 0:
            InguzanyonoKuzigama() ;
		   break;
		default:
		 printf("your choice was incorrect  please try again\n");
			break;
		}
}
//______________________________Bariza hano_______________________________________________
 void help() {
 	     	system("cls||clear");
        printf("\t\t1) Dial Call Center \n");
        printf("\t\t2) What is Mobile Money?\n");
        printf("\t\t3) Getting Mobile Money\n");
        printf("\t\t4) Charges\n");
        printf("\t\t5) Roaming\n");
        printf("\t\t6) Transfer to a non Mobile user\n");
        printf("\t\t7) Buying MobileMoney\n");
        printf("\t\t8) Wrong Transfer\n");
        printf("\t\t9) Security\n");
        printf("\t\t0) Back \n");
        int choice;
        printf("injizamo icyemezo:\n");
         scanf("%d", &choice);
          system("cls");

	switch(choice){

		case 1:	system("cls||clear");
	printf("\n\tContact the Call Center 456");
	break;

case 2:	system("cls||clear");
	printf("\n");
	printf("\tMobileMoney is an MTN service that \n\tenables you to send and receive money \n\tanywhere in Rwanda using your phone. ");
	break;

case 3:	system("cls||clear");
	printf("\n\tVisit any MTN store or a MobileMoney\n\tAgent to register.You must have an active\n\tMTN SIM Card or buy a new one,your ID\n\tCard or Passport.");
	break;

case 4:	system("cls||clear");
	printf("\n\tFor every MobileMoney transfer,the system\n\twill charge a transaction fee.Obtain copy\n\tof charges from MTN Stores or Agents.");
	break;

case 5:	system("cls||clear");
	printf("\n\tWhen you are roaming,you can send\n\tmoney to another MobileMoney user,\n\tbut can not withdraw,because the agent\n\tnetwork works only within the Rwanda borders.");
	break;

case 6:	system("cls||clear");
	printf("\n\tYes,you can transfer money to a person\n\tthat does not have a phone.");
	break;

case 7:	system("cls||clear");
	printf("\n\tYou can buy Mobilemoney at\n\tMobilemoney Agents with agrnt Signage\n\tcountrywide or at any MTN Service Center.");
	break;

case 8:	system("cls||clear");
	printf("\n\tCall the MTN Call Center by selecting Call\n\tCenter on the MTN MobileMoney Menu.");
	break;

case 9:	system("cls||clear");
	printf("\n\tWhen you register for MobileMoney your\n\tmoney is safe since every transaction you\n\tperform you are required to input your PIN.");
	break;
case 0:
     back();
     break;

      default:	system("cls||clear");
                printf("Invalid choice. Please try again.\n");

    break;
	}
     }
 
//______________________________sekilite yange_____________________________________________
void sekiliteYanjye( ) 
{
	
    system("clear || cls");      
	printf("1) Hitamo PIN\n");
	printf("2) Guhindura PIN\n");
	printf("3) Kwihitiramo  PIN\n");
	printf("4) Sohoamo\n");
	printf("0) Gusubira Inyuma");
	char amahitamo[10];
    printf("hitamo: %s\n",amahitamo);
}
void mychoice(){
	int sekiliteYanye;
scanf("%d",&sekiliteYanye);
	switch (sekiliteYanye){
		case 1:
			
           system("clear || cls");      
			printf("Please Call Customer care for Pin Reset");
			break;	
			case 2:
				
                 system("clear || cls");      
				printf("MM Pin ukoresha\n");
				int oldPIN;
				scanf("%d:",&oldPIN);
				
                system("clear || cls");      	
				printf("mm pin nshya\n");	
				int confirm;
				scanf("%d:",&confirm); //a stands for 1st MM pin entance of new pin
				    
                     system("clear || cls");      
					printf("ongera wandike mm pin nshya:");
					int pin; //b Stand for MM PIN entered twice for confirmation
					scanf("%d:",&pin);
				if (confirm==pin){
					printf("MM Pin is changed succesfully\n");
				}
			else {
				printf("MM Do not match\n");
			}	
				break;
				
				case 3:
					 
                     system("clear || cls");      
					printf("1) MM kwihitiramo PIN:\n");
					printf("2) shyiramo nimero y'indi yagufasha guhindura PIN:\n");
					printf("3) Kuramo nimero washyize muzagufasha guhindura PIN:\n");
					printf("4) Reba nimero washyizemo zagufasha kubona code yo guhindura PIN:\n");
					printf("0) Gusubira inyuma:\n");
					break;
					
					case 4:
						
                        system("clear || cls");      
						printf("Thank you for using Mobile Money");
						break;
				case 0:
					back();
               	break;
}
}
void Hindura(){
	int guhindura;
	scanf("%d",&guhindura);
switch(guhindura){
	case 1:
		printf("kuri mokash ufiteho amafaranga arengeje umubare wemewe ngo uhindure PIN\n");
		break;
		case 2:
			printf("Shyiramo PIN\n");
			int pin;
			scanf("%d:",&pin);
			printf("Shyiramo nimero yagifasha kubona code ihindura PIN\n");
			int nimero;
			scanf("%d:",&nimero);
			printf("Shyiramo kode wohereje uri ya nimero\n");
			int kode;
			scanf("%d:",&kode);
			printf("Shyiramo PIN kwemeza nimero\n");
			int pin1;
			scanf("%d:",&pin1);
			if(pin==pin1){
				printf("nimero yawe yakirwaho kode yo guhindura PIN yemewe");	
			}
			else printf("fomat OTP is invalid");	
			break;
			case 3:
				printf("Shyiramo PIN\n");
					scanf("%d:",&pin);
						printf("Ntabwo wahisemo nimero yaguhesha kode\n 1) Andika nimero yaguhesha kubona kode ihindura PIN\n");
						int a=1;
						scanf("%d",&a);
						printf("Shyiramo PIN\n");
			scanf("%d:",&pin);
			printf("Shyiramo nimero yagifasha kubona code ihindura PIN\n");
			int nimeros;
			scanf("%d:",&nimeros);
			printf("Shyiramo kode wohereje uri ya nimero\n");
			int kode1;
			scanf("%d:",&kode1);
			printf("Shyiramo PIN kwemeza nimero\n");
			int pin2;
			scanf("%d:",&pin2);
			if(pin==pin2){
				printf("nimero yawe yakirwaho kode yo guhindura PIN yemewe");	
			}
			else printf("fomat OTP is invalid");
			break;	

						
}
}



void caller(){
	sekiliteYanjye();
	mychoice();
	Hindura();
}



// ______________ INT MAIN ________________________ 


int main()
 {
 
	int choice;
	char code[20];

 	system("clear || cls");

	printf("\n");
   printf("\t MURAKAZA NEZA MURI MOMO \n\n");
   printf("\tkanda *182# kwinjira\t");
   printf("\n\t");
	scanf("%9s", code);
	
	if(strcmp(code, "*182#") != 0){
		printf("UNKNOWN APPLICAION");
		return 0;
	}

	displayMenu();
	printf("\t\treply: ");
	scanf("\t%d",&choice);
		switch(choice)
		{
		case 1:
		   kohereza();
			break;
	
		
	     case 2:
	    	buyMenu();
			break;
		
	
		case 3:
			kwishyura();
			break;
		
		case 4:
			serivisi_za_banki();
			break;
		
		case 5:
			konti_Yange_Ya_MoMo();
		  break;
		case 6:
			konti_Yange_Ya_MoMo();
		  break;
		case 7:
			Ibyemejwe_bitaranozwa();
		   break;
	
		case 8:
			MOMOpay();
		   break;
		case 9:
			caller();
			break;
		
    	case 10:
		   insurance();
			break;
	
		case 11:
		MOMO_Terms_And_Condtions();
			break;
		
		
		case 12:
		Macye_Macye();
			break;
		
		case 13:
			babyly();
			break;
   		case 14:
			 help();
		  break;
		case 15:
		exit();
		   break;
	}
    return 0;
}



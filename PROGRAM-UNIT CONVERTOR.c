

#include <stdio.h>
	int main();	
	int length();
	int mass();
	int temperature();			//Main Prototype//
	void design()
{
    for (int i = 0; i <100; i++)
    {
        printf("*");
    }
    printf("\n"); 

    printf("                                       UNIT CONVERTER                                     ");  	//design//
   
    printf("\n");
    
    for (int i = 0; i <100; i++)
    {
        printf("*");
    }
    printf("\n");
}  
	int data()				//input//
{
	int select;

	printf("Enter 1 (length).\n");
	printf("Enter 2 (mass).\n");					//Description//
	printf("Enter 3 (temperature).\n");

	printf("Select the physical quantity:");		//Select Quantity//
	scanf("%d", &select);

	switch (select)						//Switch Case for Quantities//
	{
		case 1:
			{
				length();	
				break;						//Function Call Length//
			}
		case 2:
			{
				mass();	
				break;						//Function Call Mass//
			}
		case 3:
			{
				temperature();
				break;							//Function Call Temperature//
			}
		default:
			{
				printf("Invalid Operator!!\n");
				data();
			}
	}
}  

	int length()			//Length Function//

{
	double input;	//	Declaration//
	int choice,flag;

	printf("Enter the unit of your input.\n");
	printf("Enter 1 (kilometres).\n");
	printf("Enter 2 (metres).\n");
	printf("Enter 3 (decimetres).\n");
	printf("Enter 4 (centimetres).\n");				//Description for Length//
	printf("Enter 5 (millimetres).\n");
	printf("Enter 6 (miles).\n");
	printf("Enter 7 (feet).\n");
	printf("Enter 8 (inches).\n");

	printf("Enter your choice:");					//Choice length//
	scanf("%d",&choice);
	printf("Enter number:");					//Number Input length//
	scanf("%lf",&input);
	switch (choice)							//Switch Case length//
	{
	case 1:
		{
			printf("\nLength in metres is %.3lf.\n",input*1000);
			printf("\nLength in decimetres is %.3lf.\n",input*10000);				//Kilometres//
			printf("\nLength in centimetres is %.3lf.\n",input*100000);
			printf("\nLength in millimetres is %.3lf.\n",input*1000000);
			printf("\nLength in miles is %.3lf.\n",input* 0.621371);
			printf("\nLength in feet is %.3lf.\n",input*3281);
			printf("\nLength in inches is %.3lf.\n",input*39370.1);
			break;
		}
	case 2:
		{
			printf("\nLength in kilometres is %.3lf.\n",input/1000);
			printf("\nLength in decimetres is %.3lf.\n",input*10);
			printf("\nLength in centimetres is %.3lf.\n",input*100);				//Metres//
			printf("\nLength in millimetres is %.3lf.\n",input*1000);
			printf("\nLength in miles is %.3lf.\n",input* 0.00062137);
			printf("\nLength in feet is %.3lf.\n",input*3.28084);
			printf("\nLength in inches is %.3lf.\n",input*39.26);
			break;
		}
	case 3:
		{
			printf("\nLength in kilometres is %.3lf.\n",input/10000);
			printf("\nLength in metres is %.3lf.\n",input/10);
			printf("\nLength in centimetres is %.3lf.\n",input*10);					//Decimetres//
			printf("\nLength in millimetres is %.3lf.\n",input*100);
			printf("\nLength in miles is %.3lf.\n",input/16090);
			printf("\nLength in feet is %.3lf.\n",input*0.3280);
			printf("\nLength in inches is %.3lf.\n",input*3.937);
			break;
		}
	case 4:
		{
			printf("\nLength in kilometres is %.3lf.\n",input/100000);
			printf("\nLength in metres is %.3lf.\n",input/100);
			printf("\nLength in decimetres is %.3lf.\n",input/10);					//Centimetres//
			printf("\nLength in millimetres is %.3lf.\n",input*10);
			printf("\nLength in miles is %.3lf.\n",input/160900);
			printf("\nLength in feet is %.3lf.\n",input/ 30.48);
			printf("\nLength in inches is %.3lf.\n",input/2.54);
			break;
		}
	case 5:
		{
			printf("\nLength in kilometres is %.3lf.\n",input/1e+6);
			printf("\nLength in metres is %.3lf.\n",input/1000);
			printf("\nLength in decimetres is %.3lf.\n",input*100);
			printf("\nLength in centimetres is %.3lf.\n",input*10);				//Millimetres//
			printf("\nLength in miles is %.3lf.\n",input/1.609e+6);
			printf("\nLength in feet is %.3lf.\n",input/304.8);
			printf("\nLength in inches is %.3lf.\n",input/25.4);
			break;
		}
	case 6:
	{
		printf("\nLength in kilometres is %.3lf.\n",input*1.60934);
		printf("\nLength in metres is %.3lf.\n",input*1609.34);
		printf("\nLength in decimetres is %.3lf.\n",input*16093.4);
		printf("\nLength in centimetres is %.3lf.\n",input*160933.999);				//Miles//
		printf("\nLength in millimetres is %.3lf.\n",input* 1.609e+6);
		printf("\nLength in feet is %.3lf.\n",input*5280);
		printf("\nLength in inches is %.3lf.\n",input*63360);
		break;
	}
	case 7:
	{
		printf("\nLength in kilometres is %.3lf.\n",input*0.0003048);
		printf("\nLength in metres is %.3lf.\n",input*0.3048);
		printf("\nLength in decimetres is %.3lf.\n",input*3.048);
		printf("\nLength in centimetres is %.3lf.\n",input*30.48);			//Feet//
		printf("\nLength in millimetres is %.3lf.\n",input*304.8);
		printf("\nLength in miles is %.3lf.\n",input* 0.000189394);
		printf("\nLength in inches is %.3lf.\n",input*12);
		break;
	}	
	case 8:
	{
		printf("\nLength in kilometres is %.3lf.\n",input*2.5400008128e-5);
		printf("\nLength in metres is %.3lf.\n",input*0.025400008128);
		printf("\nLength in decimetres is %.3lf.\n",input*0.25400008128000001184);
		printf("\nLength in centimetres is %.3lf.\n",input*2.5400008128000002294);
		printf("\nLength in millimetres is %.3lf.\n",input*25.40000812799999963);				//Inches//
		printf("\nLength in miles is %.3lf.\n",input* 1.578283333333333415e-5);
		printf("\nLength in feet is %.3lf.\n",input*0.083333359999999995216);
		break;
		}
	default:
		{
			printf("\nInvalid Choice!!\n\n");					//Return to main//
			length();
			break;
		}
	}
	printf("\nDo you want to continue??\n");
	printf("Enter 1 for yes and 0 for no:");
	scanf("%d",&flag);
	if (flag==1)
	{
		length();
	}
}
		int mass()			//Mass Function//
{
	double input;	//	Declaration//
	int choice,flag;

	printf("Enter the unit of your input.\n");
	printf("Enter 1 (kilograms).\n");
	printf("Enter 2 (grams).\n");
	printf("Enter 3 (tons).\n");
	printf("Enter 4 (milligrams).\n");				//Description of Mass//
	printf("Enter 5 (quintals).\n");
	printf("Enter 6 (pounds).\n");

	printf("Enter your choice:");					//Choice Mass//
	scanf("%d",&choice);
	printf("Enter number:");					//Number Mass Input//
	scanf("%lf",&input);
	switch (choice)
	{
		case 1:
		{
			printf("\nMass in gram is %.3lf.\n",input/1000);
			printf("\nMass in tons is %.3lf.\n",input*1000);
			printf("\nMass in milligrams is %.3lf.\n",input/1000000);			//Kilograms//
			printf("\nMass in quintals is %.3lf.\n",input*100);
			printf("\nMass in pounds is %.3lf.\n",input/0.454);
			break;
		}
	
		case 2:
		{
			printf("\nMass in kilograms is %.3lf.\n",input*1000);
			printf("\nMass in tons is %.3lf.\n",input*1000000);
			printf("\nMass in milligrams is %.3lf.\n",input*0.001);					//Grams//
			printf("\nMass in quintals is %.3lf.\n",input*100000);
			printf("\nMass in pounds is %.3lf.\n",input*453.592);
			break;
		}
	
		case 3:
		{
			printf("\nMass in kilograms is %.3lf.\n",input*0.001);
			printf("\nMass in grams is %.3lf.\n",input*0.000001);
			printf("\nMass in milligrams is %.3lf.\n",input*1e-6);					//Tons//
			printf("\nMass in quintals is %.3lf.\n",input*0.01);
			printf("\nMass in pounds is %.3lf.\n",input*0.0004 );
			break;
		}
	
		case 4:
		{
			printf("\nMass in kilograms is %.3lf.\n",input*1e6);
			printf("\nMass in grams is %.3lf.\n",input*1000);
			printf("\nMass in tons is %.3lf.\n",input*1e9);						//Milligrams//
			printf("\nMass in quintals is %.3lf.\n",input*1e5);
			printf("\nMass in pounds is %.3lf.\n",input*45359.37 );
			break;
		}
	
		case 5:
		{
			printf("\nMass in kilograms is %.3lf.\n",input*0.01);
			printf("\nMass in grams is %.3lf.\n",input*0.0001);
			printf("\nMass in tons is %.3lf.\n",input*10);						//Quintals//
			printf("\nMass in milligrams is %.3lf.\n",input*1e-5);
			printf("\nMass in pounds is %.3lf.\n",input*0.004 );
			break;
		}
	
		case 6:
		{
			printf("\nMass in kilograms is %.3lf.\n",input*2.20462);
			printf("\nMass in grams is %.3lf.\n",input*0.0022);
			printf("\nMass in tons is %.3lf.\n",input*2204.62);
			printf("\nMass in milligrams is %.3lf.\n",input*2.20462e-6);		//Pounds//
			printf("\nMass in quintals is %.3lf.\n",input*220.462);
			break;
		}
		default:
		{
			printf("\nInvalid Choice!!\n\n");					//Return to main//
			mass();
		}
	}
	printf("\nDo you want to continue??\n");
	printf("Enter 1 for yes and 0 for no:");
	scanf("%d",&flag);
	if (flag==1)
	{
		mass();
	}
}
int temperature()				//Temperature Function
{
	double input;	//	Declaration//
	int choice,flag;

	printf("Enter the unit of your input.\n");
	printf("Enter 1 (Celsius).\n");
	printf("Enter 2 (Kelvin).\n");					//Description of Temperature//
	printf("Enter 3 (Fahrenheit).\n");
	
	printf("Enter your choice:");					//Choice Temperature//
	scanf("%d",&choice);
	printf("Enter number:");					//Number Temperature Input//
	scanf("%lf",&input);

	switch (choice)				//Switch Case Temperature//
	{
		case 1:
		{
			printf("\nTemperature in Kelvin is %.3lf.\n",input+273.15);
			printf("\nTemperature in Fahrenheit is %.3lf.\n",(input*1.8)+32);		//Celsius//
			break;
		}
		case 2:
		{
			printf("\nTemperature in Celsius is %.3lf.\n",input-273.15);				//Kelvin//
			printf("\nTemperature in Fahrenheit is %.3lf.\n",input-273.15*(9/5)+32);
			break;
		}
		case 3:
		{
			printf("\nTemperature in Celsius is %.3lf.\n",input-32*(5/9));
			printf("\nTemperature in Kelvin is %.3lf.\n",input-32*(5/9)+273.15);		//Fahrenheit//
			break;
		}		
		default:
		{
			printf("\nInvalid Choice!!\n\n");					//Return to main//
			temperature();
		}
	}
	printf("\nDo you want to continue??\n");
	printf("Enter 1 for yes and 0 for no:");
	scanf("%d",&flag);
	if (flag==1)
	{
		temperature();
	}
}
	int main()				//Main Function//
{
	design();
	data();
	return 0;
}
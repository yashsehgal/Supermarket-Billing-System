#include<stdio.h>
#include<stdlib.h>
#include<string.h>
float amount(float rate, int quantity, float discount, float vat);
void main()
{
	system("clear");
	int j, quantity, cash, w = 0;
	long cash_received, newt_amount;
	float rate, discount, vat, t_amount=0, amount1, float_part;
	char itemcode[5], date[20];
	printf("\t\t\t\tSUPERMARKET\n");
	printf("\t\t\t\tAddress line 1\n");
	printf("\t\t\t\tAddress line 2\n");
	printf("----------------------------------------------------------------------------------------------------------------\n");
	printf("    PRODUCTS AVAILABLE AT OUR STORE:\n");
	printf(" 1. Sunsilk Anti Dandruff Smooth and Silky Shampoo(375ml bottle) @ Rs.290.00\n\t\t@ 25%s discount\t@ 2.5%s VAT\n", "%", "%");
	printf(" 2. V-Three casual bagpack @ Rs.745.00\n\t\t@ 50%s discount\t@ 10.5%s VAT\n", "%", "%");
	printf(" 3. Adidas Men's T-Shirt-Red (Size L) @ Rs.275.00\n\t\t@ 30%s discount\t @ 7.25%s VAT\n", "%", "%");
	printf(" 4. Cadbury Silk Chocolates - Pack Of 10 @ Rs.800.00\n\t\t@ 20%s discount\t @ 9%s VAT\n", "%", "%");
	printf(" 5. Chings Chinese - Instant Noodles 100 gm @ Rs.10.00\n\t\t\t\t @ 0.25%s VAT\n", "%");
	printf(" 6. Tupperware water bottle - 750 ml @ Rs.999.00\n\t\t@ 10%s discount\t @ 9.3%s VAT\n", "%", "%");
	printf(" 7. Sensodyne Cavity Protection Regular Toothpaste Tube (75 ml) @ Rs.93.95\n\t\t@ 2%s discount\t@ 4.5%s VAT\n", "%", "%");
	printf(" 8. Pepsodent Super-Flexy toothbrush @ Rs.17.00\n\t\t@ 4%s discount\t @ 3%s VAT\n", "%", "%");
	printf(" 9. Nivia Tennis ball - Pack of 12 @ Rs.810.00\n\t\t@ 12%s discount\t @ 8.75%s VAT\n", "%", "%");
	printf("10. Sparx Men's Free Trainer 5.0 Outdoor Multisport Training Shoes (Size 8/9/10) @ Rs.8000.00\n\t\t@ 18%s discount\t @ 14%s VAT\n", "%", "%");
	printf("----------------------------------------------------------------------------------------------------------------\n");
	printf("DATE:");
	fgets(date, 20, stdin);
	printf("\t\t\tCASH MEMO - RETAIL INVOICE\n");
	printf("----------------------------------------------------------------------------------------------------------------\n");
	printf("CODE\tITEM NAME\t\t\t\t\t\t\t\t\t\tQUANTITY\n");
	printf("\t\tAMOUNT(Rs.)\n");
	printf("----------------------------------------------------------------------------------------------------------------\n");
	for(j = 1; j!= 0; j++)
	{
		fgets(itemcode, 5, stdin);
		if(strcmp(itemcode, "1\n") == 0)
		{
			printf("\tSunsilk Anti Dandruff Smooth and Silky Shampoo(375ml bottle)\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 290.00;
			discount = 25;
			vat = 2.5;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "2\n") == 0)
		{
			printf("\tV-Three casual bagpack\t\t\t\t\t\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 745.00;
			discount = 50;
			vat = 10.5;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "3\n") == 0)
		{
			printf("\tAdidas Men's T-Shirt-Red (Size L)\t\t\t\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 275.00;
			discount = 30;
			vat = 7.25;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "4\n") == 0)
		{
			printf("\tCadbury Silk Chocolates - Pack Of 10\t\t\t\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 800.00;
			discount = 20;
			vat = 9;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "5\n") == 0)
		{
			printf("\tChings Chinese - Instant Noodles 100gm\t\t\t\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 10.00;
			discount = 0;
			vat = 0.25;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "6\n") == 0)
		{
			printf("\tTupperware Bottle - 750 ml\t\t\t\t\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 999.00;
			discount = 10;
			vat = 9.3;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "7\n") == 0)
		{
			printf("\tSensodyne Cavity Protection Regular Toothpaste Tube (75 ml)\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 93.95;
			discount = 2;
			vat = 4.5;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "8\n") == 0)
		{
			printf("\tPepsodent Super-Flexy toothbrush\t\t\t\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 17.00;
			discount = 4;
			vat = 3;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "9\n") == 0)
		{
			printf("\tNivia Tennis ball - Pack of 12\t\t\t\t\t\t\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 810.00;
			discount = 12;
			vat = 8.75;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "10\n") == 0)
		{
			printf("\tSparx Men's Free Trainer 5.0 Outdoor Multisport Training Shoes (Size 8/9/10)\t\t   ");
			scanf("%d", &quantity);
			getchar();
			rate = 8000.00;
			discount = 18;
			vat = 14;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, " \n") == 0)
		{
			printf("TOTAL AMOUNT :\t%0.2f\n", t_amount);
			printf("----------------------------------------------------------------------------------------------------------------\n");
			j = -1;
		}
		else
		{
			printf("PRODUCT DOES NOT EXIST\n");
		}
	}
	printf("Total number of items sold = %d\n", w);
	printf("BALANCE DUE                = %0.2f\n", t_amount);
	newt_amount = t_amount;
	float_part = t_amount - newt_amount;
	if(float_part > 0.50)
		newt_amount += 1;
	printf("BALANCE DUE AFTER ROUNDING = %ld\n", newt_amount);
	A:
	printf("CASH RECEIVED              = ");
	scanf("%ld", &cash_received);
	if(cash_received < newt_amount)
	{
		printf("Amount insufficient. Please provide more money.\n");
		goto A;
	}
	printf("CHANGE TO BE RETURNED      = %ld\n", cash_received - newt_amount);
	printf("----------------------------------------------------------------------------------------------------------------\n");
	printf("\t\t\tCustomer Care Phone # : 1800 133 6702\n");
	printf("\t\t\tCustomer Care E-mail : custcare@gmail.com\n");
	printf("\t\t\tStore Phone # : 080-23316509\n");
	printf("\n\t\t\tCALL FOR FREE HOME DELIVERY.\n");
	printf("\n\t\t\t\tNo cash refunds.\n");
	printf("\t\t\tTerms and conditions apply.*\n");
	printf("\t\t\t** Thank you for shopping with us **\n");
	printf("\n*Any goods purchased from us can be exchanged along with presenting the original cash memo within 15 days from the date of purchase on any working day. Any electrical appliance purchased, is eligible for repair under warranty only if the original cash memo is shown.\n");
}
float amount(float p, int q, float r, float s)
{
	float z;
	z = ((p * q) - (p * q * r / 100)) + (((p * q) - (p * q * r / 100)) * s / 100);
	return z;
}

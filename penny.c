//Penny Lab
//Lew Piper III | Palomar ID 011263249

#include <stdio.h>
#include <math.h>
int doublePennies();
FILE *fp;

int main (void) {
	fp = fopen("csis.txt", "w");
	doublePennies();
	fclose(fp);
	return 0;
}


//Function that lets the user pick how long it would take to save a user input amount of money by doubling their pennies
int doublePennies(void) {
	double total = 0.00;
	double balance = 0.00;
	double deposit = .01;
	int day = 0;
	
	
	//Have the user enter how much money they want to save
	printf("Note: This program only formats numbers up to 1 Million corectly.\n\n");
	fprintf(fp,"Note: This program only formats numbers up to 1 Million corectly.\n\n");
	printf("Please enter the amount of money you want to accumulate: ");
	scanf("%lf", &total);
	fprintf(fp,"Please enter the amount of money you want to accumulate: $%.2f", total);
	printf("\n");
	fprintf(fp,"\n");
	
	//Output to console window on a day by day basis until the following loop is satisfied
	printf("Day             Deposit             Balance\n");
	fprintf(fp,"Day             Deposit             Balance\n");
	printf("---             -------             -------\n");
	fprintf(fp,"---             -------             -------\n");
	while (balance < total) {
		deposit = (deposit * 2);
		balance = (balance + deposit);
		day++;
		if (balance < 10) {
			printf("  %d                %.2lf                %.2lf\n", day, deposit, balance);
			fprintf(fp,"  %d                %.2lf                %.2lf\n", day, deposit, balance);
		} else if (balance >= 10 && day < 10) {
			printf("  %d                %.2lf               %.2lf\n", day, deposit, balance);
			fprintf(fp,"  %d                %.2lf               %.2lf\n", day, deposit, balance);
		} 
		
		if (balance > 10 && day >= 10 && balance < 100) {
			printf(" %d               %.2lf               %.2lf\n", day, deposit, balance);
			fprintf(fp," %d               %.2lf               %.2lf\n", day, deposit, balance);
		} else if (balance > 10 && day >= 10 && deposit < 100) {
			printf(" %d               %.2lf              %.2lf\n", day, deposit, balance);
			fprintf(fp," %d               %.2lf              %.2lf\n", day, deposit, balance);
		}
		
		if (balance > 100 && day >= 10 && balance < 1000 && deposit > 100) {
			printf(" %d              %.2lf              %.2lf\n", day, deposit, balance);
			fprintf(fp," %d              %.2lf              %.2lf\n", day, deposit, balance);
		} else if (balance > 1000 && day >= 10 && deposit < 1000) {
			printf(" %d              %.2lf             %.2lf\n", day, deposit, balance);
			fprintf(fp," %d              %.2lf             %.2lf\n", day, deposit, balance);
		}
		
		if (balance > 1000 && day >= 10 && balance < 10000 && deposit > 1000) {
			printf(" %d             %.2lf             %.2lf\n", day, deposit, balance);
			fprintf(fp," %d             %.2lf             %.2lf\n", day, deposit, balance);
		} else if (balance > 10000 && day >= 10 && deposit < 10000) {
			printf(" %d             %.2lf            %.2lf\n", day, deposit, balance);
			fprintf(fp," %d             %.2lf            %.2lf\n", day, deposit, balance);
		}
		
		
		if (balance > 10000 && day >= 10 && balance < 100000 && deposit > 10000) {
			printf(" %d            %.2lf            %.2lf\n", day, deposit, balance);
			fprintf(fp," %d            %.2lf            %.2lf\n", day, deposit, balance);
		} else if (balance > 100000 && day >= 10 && deposit < 100000) {
			printf(" %d            %.2lf           %.2lf\n", day, deposit, balance);
			fprintf(fp," %d            %.2lf           %.2lf\n", day, deposit, balance);
		}
		
		if (balance > 100000 && day >= 10 && balance < 1000000 && deposit > 100000) {
			printf(" %d           %.2lf           %.2lf\n", day, deposit, balance);
			fprintf(fp," %d           %.2lf           %.2lf\n", day, deposit, balance);
		} else if (balance > 1000000 && day >= 10 && deposit < 1000000) {
			printf(" %d           %.2lf          %.2lf\n", day, deposit, balance);
			fprintf(fp," %d           %.2lf          %.2lf\n", day, deposit, balance);
		} 
	}
	
	//Print how many days it takes to save that much money
	printf("\n");
	fprintf(fp,"\n");
	printf("It took %d days to accumulate at least $%.2lf.", day, total);
	fprintf(fp,"It took %d days to accumulate at least $%.2lf.", day, total);
	
	return 0;
}
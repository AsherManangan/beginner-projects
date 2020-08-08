#include <stdio.h>

int main ()
{
	int number, sum=0, store, mod;
	printf(" Is it an Armstrong Number or Not");
	printf("\n\nEnter number: ");
	scanf("%d", &number);
	store=number;
	while(number>0){
		mod=number%10;
		sum=sum+(mod*mod*mod);
		number=number/10;
	}
if(store==sum) printf("\n%d is an Armstrong Number",store );
else printf("Not an Armstrong Number");
}

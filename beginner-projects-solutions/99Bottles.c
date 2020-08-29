#include <stdio.h>
int main ()
{
	printf("Lyrics of the Song 99 Bottles of Beer\n\n");
	int bottlecount=99;
	int i,s=1;
	int confirm=0;
	for (i=99;i>0;i--){
	printf("%d bottles of beer on the wall, %d bottles of beer. \n", bottlecount, bottlecount);
	bottlecount=bottlecount-s;
	printf("Take one down and pass it around, %d bottles of beer in the wall\n\n", bottlecount);
}
	printf("%d bottle of beer on the wall, %d bottle of beer. \n", bottlecount, bottlecount);
	bottlecount=bottlecount-s;
	printf("Take one down and pass it around, no more bottle of beer in the wall\n\n", bottlecount);
	if (confirm==bottlecount){
		printf("No more bottles of beer on the wall, no more bottle of beer. \n");
		printf("Go to store and buy some more, 99 bottles of beer.");
	}	
return 0;
}

#include<stdio.h>
main(){
	int price;
	int quantity;
	float total;
	printf("\n enter the item price");
	scanf("%d",&price);
		printf("\n enter quantity");
		scanf("%d",&quantity);
		total=(price*quantity);
				printf("\n total amount of bill %d and %d=%f",price,quantity,total);
}

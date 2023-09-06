#include<stdio.h>
int main()
{
	printf("\n\t\t\t\t\tGrison Bank Limited\n\n");
    char first[30],middle[30],last[30],address[30],again;
    int phone,process,accid;
    float amt,deposit,withdraw;
    printf("Fill your valid information :-\n\n");
    printf("First Name: ");
    scanf("%s",&first);
    printf("Middle Name: ");
    scanf("%s",&middle);
    printf("Last Name: ");
    scanf("%s",&last);
    printf("Phone number: ");
    scanf("%d",&phone);
    printf("Address: ");
    scanf("%s",&address);
	printf("Account id: ");
	scanf("%d",&accid);
	printf("Deposit certain amount of money for registraion of your account(must be higher than Rs.500): ");
	scanf("%f",&amt);
	printf("\n\n");
	do{
	    printf("Do you want to?\n1)Deposit\n2)Withdraw\n3)Check account information\n\n");
	    printf("Enter process :");
		scanf("%d",&process);
		switch(process)
		{
			case 1:
				printf("\n\nPlease enter amount of money you want to deposit:\n");
				printf("Enter amount :");
				scanf("%f",&deposit);
				amt=amt+deposit;
				printf("\nYour account has been credited.\nYour updated bank balance is %f.",amt);
			break;
			case 2:
				printf("\n\nPlease enter amount of money you want to withdraw:\n");
				printf("Enter amount :");
				scanf("%f",&withdraw);
				amt=amt-withdraw;
				if(amt < 0)
				{
					printf("\nYour account is in debt/negative.\nYour updated bank balance is %f.",amt);
				}
				else
				{
					printf("\nYour account has been debited.\nYour updated bank balance is %f.",amt);
				}
			break;
			case 3:
				printf("\nName:%s %s %s\n",first,middle,last);
				printf("Phone number: %d\n",phone);
				printf("Address: %s\n",address);
				printf("Account id: %d\n",accid);
				printf("Cash amount: %f\n",amt);
			break;
			default:
				printf("\nInvalid input!!!");
		}
		printf("\n\nDo you still want to continue transaction(y or n): ");
		scanf("%s", &again);
		printf("\n");
	}
	while(again == 'y' || again == 'Y');
	printf("\nThanks for trusting Grison Bank Ltd.!!!");
    return 0;
}

#include<stdio.h>
#include<conio.h>
#include<windows.h>
struct about
{
    char name[50];
    char Mobile_No[100];
};
int main()
{
	struct about s1[10];
	int b,z,i,a,s,g=0,bq,bill=0,arr[5],prr[5],b_value[5];
	int cgst=0,sgst=0;
	char ch='y',ok='y',order='y';
	const char *crr[50];
	printf("\n\t\t\t\t\t\tWelcome To NFSU RESTAURANT \n\n");
	printf("\n CUSTOMER INFORMATION\n ");
    printf("\n Customer Name: ");
    scanf("%s", s1[1].name);
    printf("\n Customer Mobile Number: ");
    scanf("%s", s1[1].Mobile_No);

	printf("\tChoose your meal plan :\n\n");
	printf("\t1. Breakfast\n\t2. Lunch\n\t3. Dinner\n\n");
	scanf("%d",&a);
	printf("\n");
	if(a==1)
	{
		do
		{
			printf("\tChoose your order :\n\n\t");
			printf("1.Poha\t\t\t50/-\n\t");
			printf("2.Cheese Paratha\t60/-\n\t");
			printf("3.Vada Pav\t\t40/-\n\t");
			printf("4.Sandwitch\t\t80/-\n\n\t");
		}while(ch=='n' || ch=='N');
		do
		{
			do
			{
				printf("Enter no.");
				scanf("%d",&b);
				b_value[g]=b;
				if(b==1||b==2||b==3||b==4)
				{
					printf("\n\tTell us the Quantity :");
					scanf("%d",&bq);
					arr[b]=bq;
					break;
				}
   				else
				{
					printf("\n\tInvalid Entry.. Please Try Again\n\n\t");
			    	ok='n';
				}
			}while(ok=='n' || ok=='N');
			printf("\n\tAdd More To Your Order : (Y or N) ?\n\t");
			fflush(stdin);
			order=getch();
			printf("\n\t");
			g++;
			if(b==1)
			{
				crr[0]="Poha        ";
				prr[0]=50;
			}
			else if(b==2)
			{
				crr[1]="Cheese Paratha";
				prr[1]=60;
			}
			else if(b==3)
			{
				crr[2]=" Vada Pav        ";
				prr[2]=40;
			}
			else
			{
				crr[3]="Sandwitch";
				prr[3]=80;
			}
		}while(order=='y'||order=='Y');
	}
	else if(a==3)
	{
		do
		{
			printf("\tChoose your order :\n\n\t");
			printf("1.Tandoori Roti\t15/-\n\t");
			printf("2.Kadhai Paneer\t140/-\n\t");
			printf("3.Kadi Chawal\t100/-\n\t");
			printf("4.Salad/Curd\t50/-\n\n\t");
		}while(ch=='n' || ch=='N');
		do
		{
			do{
				printf("Enter no.");
				scanf("%d",&b);
				b_value[g]=b;
				if(b==1||b==2||b==3||b==4)
				{
					printf("\n\tTell us the Quantity :");
					scanf("%d",&bq);
					arr[b]=bq;
					break;
				}
				else
				{
					printf("\n\tInvalid Entry.. Please Try Again\n\n\t");
					ok='n';
				}
			}while(ok=='n');
			printf("\n\tAdd More To Your Order : (Y or N) ?\n\t");
			fflush(stdin);
			order=getch();
			printf("\n\t");
			g++;
			if(b==1)
			{
				crr[0]="Tandoori Roti";
				prr[0]=15;
			}
			else if(b==2)
			{
				crr[1]="Kadhai Paneer";
				prr[1]=140;
			}
			else if(b==3)
			{
				crr[2]="Kadi Chawal";
				prr[2]=100;
			}
			else
			{
				crr[3]="Salad/Curd";
				prr[3]=50;
			}
		}while(order=='y'||order=='Y');
	}
	else if(a==2)
	{
		do
		{
			printf("\tChoose your order :\n\n\t");
			printf("1.Veg Thali\t150/-\n\t");
			printf("2.Premium Thali\t250/-\n\t");
			printf("3.Salad/papad\t45/-\n\t");
			printf("4.Veg Biryani\t90/-\n\n\t");
		}while(ch=='n');
		do
		{
			do
			{
				printf("Enter No.");
				scanf("%d",&b);
				b_value[g]=b;
				if(b==1||b==2||b==3||b==4)
				{
					printf("\n\tTell us the Quantity :");
					scanf("%d",&bq);
					arr[b]=bq;
					break;
				}
				else
				{
					printf("\n\tInvalid Entry.. Please Try Again\n\n\t");
					ok='n';
				}
			}while(ok=='n');
			printf("\n\tAdd More To Your Order : (Y or N) ?\n\t");
			fflush(stdin);
			order=getch();
			printf("\n\t");
			g++;
			if(b==1)
			{
				crr[0]="Veg Thali";
				prr[0]=150;
			}
			else if(b==2)
			{
				crr[1]="Premium Thali";
				prr[1]=250;
			}
			else if(b==3)
			{
				crr[2]="Salad/Papad";
				prr[2]=45;
			}
			else
			{
				crr[3]="Veg Biryani"; 
				prr[3]=90;
			}
		}while(order=='y'||order=='Y');
	}
	printf("\t\tGenerating your BILL....");
	for(i=1;i<=6;i++)
	{
	   printf("\b\b\b\b");
	   if(i==1||i==3||i==5)
	   printf("    ");
	   if(i==2||i==4||i==6)
	   {
	   	printf(".");
	   	Sleep(300);
	   	printf(".");
	   	Sleep(300);
	   	printf(".");
	   	Sleep(300);
	   	printf(".");
	   }
	   Sleep(300);
	}
	printf("\n");
	for(z=1;z<=60;z++)
	{
		printf("_");
	}
	printf("\n\t\t\t BILL Generated\n\t\t");
	for(z=1;z<=g;z++)
	{
		s=(prr[b_value[z-1]-1])*(arr[b_value[z-1]]);
		bill=bill+s;
		printf("\n\t%d.%s\t\t%dx%d\t:%d/-",z,crr[b_value[z-1]-1],prr[b_value[z-1]-1],arr[b_value[z-1]],s);
	}
	printf("\n");
	for(z=1;z<=60;z++)
	{
		printf("_");
	}
	printf("\n\tSum total\t\t:%d/-",bill);
	sgst=((bill/100)*5);
	cgst=sgst;
	printf("\n\tCGST 5 prc\t\t:%d/-",cgst);
	printf("\n\tSGST 5 prc\t\t:%d/-",sgst);
	bill=bill+sgst+cgst;
	printf("\n\tTotal Bill\t\t:%d/-",bill);
	getch();
	return 0;
}

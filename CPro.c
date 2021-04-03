#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void OPE();
void A_V();
void C_O();
void CSLTF();
void CSLTK();
void CSNLPP();
void ASTF();
void ASTDRCT();
void ASSTR();
void main()
{
	int c,ch;
	int i,a=0,b=1,cc,n;
	 system("COLOR F9");
	do
		 {
		 choice:
	 	 printf("\n\t\t\tMAIN MENU\n\t\t-------------------------\n");		
		 printf("\n\t\t1.Basic C Programs\n");
		 printf("\n\t\t2.Control Structures(Loops)\n");
		 printf("\n\t\t3.Control Structures(Nested Loops)\n");
		 printf("\n\t\t4.Array & Structures\n");
		 printf("\n\t\t5.Change The Colour Window\n");
		 printf("\n\t\t6.Exit\n");
		 printf("\n\nWhich Program Do You Want to Run:");
		 scanf("%d",&c);
	
		 switch(c)
			{		
			case 1:
			system("cls");
			goto BCP;
			break;

			case 2:
			system("cls");
			goto CSL;
			break;

			case 3:
			system("cls");
		 	goto CSNL;
			break;

			case 4:
			system("cls");
			goto AS;
			break;

			case 5:
			system("cls");
			goto col;
			break;
			
			case 6:
			exit(0);
			break;

			default:
			system("cls");
			printf("Invalid Choice\n\nTry Again");
			goto choice;
			} 
		}while(c<=6);

col:
system("cls");
printf("\n\t\t1.Default Colour\n");
printf("\n\t\t2.Black & Red\n");
printf("\n\t\t3.White & Blue\n");
printf("\n\t\t4.Blue & Red\n");
printf("\n\t\t5.Black & Yellow\n");
printf("\n\t\t6.Go Back\n");
printf("\nEnter Your Choice :\n");
scanf("%d",&ch);
if(ch==1)
{system("COLOR 0F");goto choice;}
else if(ch==2)
{system("COLOR 0C");goto choice;}
else if(ch==3)
{system("COLOR F9");goto choice;}
else if(ch==4)
{system("COLOR BC");goto choice;}
else if(ch==5)
{system("COLOR 0E");goto choice;}
else if(ch==6)
{system("cls");goto choice;}
else
{printf("Invalid Choice\n\nTry Again");
goto choice;}

BCP:
do{
	printf("\n\t\t\tSUB MENU\n\t\t-------------------------\n");		
		 printf("\n\t\t1.Operations On 2 integers (+ - * /)\n");
		 printf("\n\t\t2.Area & Volume\n");
		 printf("\n\t\t3.Convertors\n");
		 printf("\n\t\t4.Go Back\n");
		 printf("\n\t\t5.Exit\n");
		 printf("\n\nWhich Program Do You Want to Run:");
		 scanf("%d",&c);
		 switch(c)
			{		
			case 1:
			OPE();
			break;

			case 2:
			A_V();
			break;

			case 3:
			C_O();
			break;

			case 4:
			system("cls");
			goto choice;
			break;

			case 5:
			exit(0);
			break;
			
			default:
			system("cls");
			printf("Invalid Choice\n\nTry Again");
			goto choice;
			}
	}while(c<=5);

CSL:
do{
	printf("\n\t\t\tSUB MENU\n\t\t-------------------------\n");		
		 printf("\n\t\t1.To Find\n");
		 printf("\n\t\t2.To Know\n");
		 printf("\n\t\t3.Go Back\n");
		 printf("\n\t\t4.Exit\n");
		 printf("\n\nWhich Program Do You Want to Run:");
		 scanf("%d",&c);
		 switch(c)
			{		
			case 1:
			CSLTF();
			break;

			case 2:
			CSLTK();
			break;

			case 3:
			system("cls");
			goto choice;
			break;

			case 4:
			exit(0);
			break;
			
			default:
			system("cls");
			printf("Invalid Choice\n\nTry Again");
			goto choice;
			}
	}while(c<=4);

CSNL:
do{
	printf("\n\t\t\tSUB MENU\n\t\t-------------------------\n");		
		 printf("\n\t\t1.To Print Pattern\n");
		 printf("\n\t\t2.To Find Fibonacci Of The No.\n");
		 printf("\n\t\t3.Go Back\n");
		 printf("\n\t\t4.Exit\n");
		 printf("\n\nWhich Program Do You Want to Run:");
		 scanf("%d",&c);
		 switch(c)
			{		
			case 1:
			CSNLPP();
			break;

			case 2:		
				printf("Enter No. For Fibonacci:");
					scanf("%d",&n);	
				printf("%d  %d  ",a,b);
				for (i=1;i<=n;i++)
				{	
					
						cc=a+b;
						printf("%d  ",cc);
						a=b;
						b=cc;
				}
			break;

			case 3:
			system("cls");
			goto choice;
			break;

			case 4:
			exit(0);
			break;

			default:
			system("cls");
			printf("Invalid Choice\n\nTry Again");
			goto choice;
			}
	}while(c<=4);

AS:
do{
	printf("\n\t\t\tSUB MENU\n\t\t-------------------------\n");		
		 printf("\n\t\t1.To Find & Operations On Array(+ -)\n");
		 printf("\n\t\t2.To Display Reverse, Copy & Transpose Of Array\n");
		 printf("\n\t\t3.String Copy,Reverse,Compare,Length & Merge\n");
		 printf("\n\t\t4.Go Back\n");
		 printf("\n\t\t5.Exit\n");
		 printf("\n\nWhich Program Do You Want to Run:");
		 scanf("%d",&c);
		 switch(c)
			{		
			case 1:
			ASTF();
			break;

			case 2:
			ASTDRCT();
			break;
            
			case 3:
			ASSTR();
			break;

			case 4:
			system("cls");
			goto choice;
			break;

			case 5:
			exit(0);
			break;

			default:
			system("cls");
			printf("Invalid Choice\n\nTry Again");
			goto choice;
			}
	}while(c<=5);
}

void OPE()
{
	int a,b,chh,d,e,c;
	float f;
	printf("\nEnter 2 No:\n");
	scanf("%d %d",&a,&b);
			printf("\n\t\t\tSUB MENU\n\t\t-------------------------\n");
			printf("\n\t\t1.Addition\n");
			printf("\n\t\t2.Subtraction\n");
			printf("\n\t\t3.Multiplication\n");
			printf("\n\t\t4.Division\n");
			printf("\n\t\t5.All Together\n");
			printf("\n\t\t6.Exit\n");
			printf("\n\nWhich Program Do You Want to Run:");
		 	scanf("%d",&c);
	chh=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	switch(c)
	{
		case 1:
		system("cls");
		printf("\nAddition :%d\n",chh);
		break;

		case 2:
		system("cls");
		printf("\nSubtraction :%d\n",d);
		break;

		case 3:
		system("cls");
		printf("\nMultiplication :%d\n",e);
		break;
		
		case 4:
		system("cls");
		printf("\nDivision :%f\n",f);
		break;
		
		case 5:
		system("cls");
		printf("\n\nAddition :%d\n\nSubtraction :%d\n\nMultiplication :%d\n\nDivision :%f",chh,d,e,f);
		break;
		
		case 6:
		exit(0);
		break;
		
		default:
		system("cls");
		printf("\nInvalid Choice\n");
	}
		
}

void A_V()
{
	int c;
	float r,b,h,l,br;
			printf("\n\t\t\tSUB MENU\n\t\t-------------------------\n");
			printf("\n\t\t1.Area & Volume Of Sphere\n");
			printf("\n\t\t2.Area Of Triangle\n");
			printf("\n\t\t3.Area Of Rectangle\n");
			printf("\n\t\t4.Area Of Circle\n");
			printf("\n\t\t5.Exit\n");
			printf("\n\nWhich Program Do You Want to Run:");
		 	scanf("%d",&c);
	if(c==1)
	{
		printf("\n\nEnter Radius Of Sphere :");
		scanf("%f",&r);
	}
	else if(c==2)
	{
		printf("\n\nEnter Base & Height Of Triangle :");
		scanf("%f %f",&b,&h);
	}
	else if(c==3)
	{
		printf("\n\nEnter Length & Bredth Of Rectangle :");
		scanf("%f %f",&l,&br);
	}
	else if(c==4)
	{
		printf("\n\nEnter Radius Of Circle :");
		scanf("%f",&r);
	}
	switch(c)
	{
		case 1:
		system("cls");
		printf("\n\nArea Of Sphere :%f Units\n\n",4*3.14*r*r);
		printf("\n\nVolume Of Sphere :%f Units\n\n",(4*3.14*r*r*r)/3);
		break;

		case 2:
		system("cls");
		printf("\n\nArea Of Triangle :%f Units\n\n",(b*h)/2);
		break;

		case 3:
		system("cls");
		printf("\n\nArea Of Rectangle :%f Units\n\n",l*br);
		break;
		
		case 4:
		system("cls");
		printf("\n\nArea Of Circle :%f Units\n\n",3.14*r*r);
		break;
		
		case 5:
		exit(0);
		break;
		
		default:
		system("cls");
		printf("\nInvalid Choice\n");
	}
	
}

void C_O()
{
	int c;
	float ce,km,h;
			printf("\n\t\t\tSUB MENU\n\t\t-------------------------\n");
			printf("\n\t\t1.Convert Temperature(*C To *F)\n");
			printf("\n\t\t2.Convert Distance (Km To Ml)\n");
			printf("\n\t\t3.Convert Distance (Km To M)\n");
			printf("\n\t\t4.Convert Time(Hr To Sec)\n");
			printf("\n\t\t5.Exit\n");
			printf("\n\nWhich Program Do You Want to Run:");
		 	scanf("%d",&c);
	if(c==1)
	{
		printf("\n\nEnter Temp. In *C :");
		scanf("%f",&ce);
	}
	else if(c==2)
	{
		printf("\n\nEnter Distance In Km :");
		scanf("%f",&km);
	}
	else if(c==3)
	{
		printf("\n\nEnter Distance In Km :");
		scanf("%f",&km);
	}
	else if(c==4)
	{
		printf("\n\nEnter Time In Hour :");
		scanf("%f",&h);
	}
	switch(c)
	{
		case 1:
		system("cls");
		printf("\n\nConverted Temp. In *F :%f *F\n\n",(ce*1.8)+32);
		break;

		case 2:
		system("cls");
		printf("\n\nConverted Distance In Ml :%f Miles\n\n",km*2.27);
		break;

		case 3:
		system("cls");
		printf("\n\nConverted Distance In M :%f Meter\n\n",km*1000);
		break;
		
		case 4:
		system("cls");
		printf("\n\nConverted Time In Sec :%f s\n\n",h*3600);
		break;
		
		case 5:
		exit(0);
		break;
		
		default:
		system("cls");
		printf("\nInvalid Choice\n");
	}
	
}

void CSLTF()
{
	int c,n,a,b,i,s=0;
	char ch;
			printf("\n\t\t\tSUB MENU\n\t\t-------------------------\n");
			printf("\n\t\t1.Find Smallest No Among 2\n");
			printf("\n\t\t2.Display 1-n & There Sum \n");
			printf("\n\t\t3.Exit\n");
			printf("\n\nWhich Program Do You Want to Run:");
		 	scanf("%d",&c);
	if(c==1)
	{
		printf("\n\nEnter 2 No. :");
		scanf("%d %d",&a,&b);
	}
	else if(c==2)
	{
		printf("\n\nEnter A No. :");
		scanf("%d",&n);
	}
	switch(c)
	{
		case 1:
		
		if(a>b)
		{
			printf("\n\n%d Is The Greater No.\n\n",a);
		}
		else
		{
			printf("\n\n%d Is The Greater No.\n\n",b);
		}
		
		break;

		case 2:
		system("cls");
		for(i=1;i<=n;i++)
		{
			printf("%d\n",i);
			s=s+i;
		}
		printf("Sum Of No. :%d",s);
		break;
		
		case 4:
		exit(0);
		break;

		default:
		system("cls");
		printf("\nInvalid Choice\n");
	}
	
}

void CSLTK()
{
	int a,b,c,d,ch,n,f=1,s,re=0,so;
	int co=0;
	float e;
	char t[10];
			printf("\n\t\t\tSUB MENU\n\t\t-------------------------\n");
			printf("\n\t\t1.To Know Student Is Pass Or Fail\n");
			printf("\n\t\t2.To Know No. Is Factorial Or Not\n");
			printf("\n\t\t3.To Know No. Is Palindrom Or Not\n");
			printf("\n\t\t4.To Know No. Is Armostrong Or Not\n");
			printf("\n\t\t5.Enter A No. & Count Digits\n");
			printf("\n\t\t6.Exit\n");
			printf("\n\nWhich Program Do You Want to Run:");
		 	scanf("%d",&c);
	if(c==1)
	{
		printf("\n\nEnter marks of four subject:");
	     scanf("%d %d %d %d",&a,&b,&ch,&d);
	}
	else if(c==2)
	{
		printf("Enter A No.");
		scanf("%d",&n);
	}
	else if(c==3)
	{
		printf("Enter A No.");
		scanf("%d",&n);
		s=n;	
	}
	else if(c==4)
	{
		printf("Enter A No.");
		scanf("%d",&n);
		s=n;	
	}
	else if(c==5)
	{
	printf("Enter A No.");
	scanf("%d",&n);
	}
	switch(c)
	{
		case 1:
		system("cls");
	    e=(a+b+ch+d)/4;
	if(e>=30)
	{
		printf("\n\nStudent is pass.\n\n");
	}
	else
	{
		printf("Student is fail.\n\n");
	}	
		break;

		case 2:
		system("cls");
		while(n>0)
		{
			f=f*n;
			n--;
		}
		printf("Factorial Of No. :%d",f);
		break;

		case 3:
	
	while(n>0)
	{
		re=(re*10)+(n%10);
		n=n/10;
	}
	if(re==s)
	{
		printf("No. Is Palindrome");
	}
	else
	{
		printf("No. Is Not Palindrome");
	}
	
		break;
		
		case 4:
		system("cls");
	while(n>0)
	{
		so=n%10;
		re=re+(so*so*so);
		n=n/10;
	}
	if(re==s)
	{
		printf("No. Is Armostrong");
	}
	else
	{
		printf("No. Is Not Armostrong");
	}
		break;
		
		case 5:
		system("cls");
	while(n>0)
	{
		co++;
		n=n/10;
	}
	printf("Count Of No. :%d",co);
		break;

		case 6:
		exit(0);
		break;

		default:
		system("cls");
		printf("\nInvalid Choice\n");
	}
} 

void CSNLPP()
{
	int c,r,co,s,n,i,j;
	char t[10];
			printf("\n\t\t\tSUB MENU\n\t\t-------------------------\n");
			printf("\n\t\t1.Print Pyramid Of Stars\n");
			printf("\n\t\t2.Print Diamond Of Stars\n");
			printf("\n\t\t3.Print Arrow Of Stars\n");
			printf("\n\t\t4.Print Non-Regular Pyramid\n");
			printf("\n\t\t5.Exit\n");
			printf("\n\nWhich Program Do You Want to Run:");
		 	scanf("%d",&c);
	if(c==1)
	{
		printf("Enter A No.");
		scanf("%d",&n);

	}
	else if(c==2)
	{
		printf("\n\nEnter A No.(1-7):");
		scanf("%d",&n);
	}
	else if(c==4)
	{
	printf("Enter The Number\n:");
	scanf("%d",&n);
	}
	switch(c)
	{
		case 1:
		system("cls");
	for(r=1;r<=n;r++)
	{
		for(s=1;s<=n-r;s++)
		{
			printf(" ");
		}
		for(co=1;co<=r;co++)
		{
			printf("* ");
		}
		printf("\n");
	}
		break;

		case 2:
		system("cls");
		for(r=1;r<=n;r++)
	{
		for(s=1;s<=n-r;s++)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(r=n;r>=1;r--)
	{
		for(s=1;s<=n-r;s++)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getchar();
		break;
		
		case 3:
		system("cls");
			for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
		break;
		
		case 4:
		for(r=1;r<=n;r++)
	{
		for(s=1;s<=n-r;s++)
		{
			printf("  ");
		}
		for(co=1;co<=(2*r)-1;co++)
		{
			printf("* ");
		}
		printf("\n");
	}
		break;

		case 5:
		exit(0);
		break;

		default:
		system("cls");
		printf("\nInvalid Choice\n");
	}
	
}

void ASTF()
{
int a[3][3],b[3][3],i,j;

	printf("Enter the matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the second matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("Addition of matrix\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n\n");
	}
	printf("subtraction of matrix\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]-b[i][j]);
		}
		printf("\n\n");
	}
}

void ASTDRCT()
{
	int a[3][3],i,j,c,b[3][3];
	char t[10];
			printf("\n\t\t\tSUB MENU\n\t\t-------------------------\n");
			printf("\n\t\t1.Array Reverse\n");
			printf("\n\t\t2.Array Copy\n");
			printf("\n\t\t3.Array Transpose\n");
			printf("\n\t\t4.Exit\n");
			printf("\n\nWhich Program Do You Want to Run:");
		 	scanf("%d",&c);
	if(c==1)
	{
	printf("Enter Array :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}		
	}
	}
	else if(c==2)
	{
		printf("Enter Array :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}		
	}
	}
	else if(c==3)
	{
	printf("Enter The Matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	}
	switch(c)
	{
		case 1:
	printf("Reverse Array :\n\n");
	for(i=2;i>=0;i--)
	{
		for(j=2;j>=0;j--)
		{
		printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}		
		break;

		case 2:
		
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		b[i][j]=a[i][j];
		}		
	}
	printf("Copied Array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",b[i][j]);
		}	
		printf("\n");
	}
		break;

		case 3:
	   
	printf("Display First Matrix\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	printf("Display Transpose Matrix\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n\n");
	}
		break;
		
		case 4:
        exit(0);
		break;
	
		default:
		printf("\nInvalid Choice\n");
	}
}
void ASSTR()
{
	
	char a[100],b[100],p[100],c;
	int l;
			printf("\n\t\t\tSUB MENU\n\t\t-------------------------\n");
			printf("\n\t\t1.String Reverse\n");
			printf("\n\t\t2.String Compare\n");
			printf("\n\t\t3.String Concat\n");
			printf("\n\t\t4.String Lenght\n");
			printf("\n\t\t5.String Copy\n");
			printf("\n\t\t6.Exit\n");
			printf("\n\nWhich Program Do You Want to Run:");
		 	scanf("%d",&c);
	if(c==1)
	{
	printf("Enter a String:\n\n");
	scanf("%s",a);
	}
	else if(c==2)
	{
	printf("Enter a String:\n\n");
	scanf("%s",a);
	printf("Enter a String:\n\n");
	scanf("%s",b);
	}
	else if(c==3)
	{
	printf("Enter a String:\n\n");
	scanf("%s",a);
	printf("Enter a String:\n\n");
	scanf("%s",b);
	}
	else if(c==4)
	{
	printf("Enter a String:\n\n");
	scanf("%s",a);
	}
	else if(c==5)
	{
	printf("Enter a String:\n\n");
	scanf("%s",a);
	}

	switch(c)
	{
		case 1:
	strrev(a);
	printf("Reverse String\n\n");
	printf("%s",a);
		break;

		case 2:
	if(strcmp(a,b)==0)
	{
		printf("Same String\n\n");
	}
	else
	{
		printf("Not Same String\n\n");
	} 
		break;

		case 3:
	strcat(a,b);
	printf("%s",a);
		break;
		
		case 4:
    l=strlen(a);
	printf("Length Of String:%d\n\n",l);
		break;
	
		case 5:
    strcpy(b,a);
	printf("Copied String:\n\n");
	printf("%s",b);
		break;

		case 6:
    	exit(0);
		break;

		default:
		printf("\nInvalid Choice\n");
	}
}

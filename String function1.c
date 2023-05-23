#include<stdio.h>
#include<string.h>

void main()
{
 char pass[20],ch;
 int i,number,special,capital,small;
 number=special=capital=small=0;
 
 strlen(pass);

 printf("Enter Password : ");
 gets(pass);
 if(pass>=8)
 {
 
	 for(i=0;pass[i]!='\0';i++)
	 {
	  if(pass[i]>='0' && pass[i]<='9')
	   number=1;
	  if(pass[i]>='a' && pass[i]<='z')
	   small=1;
	  if(pass[i]>='A' && pass[i]<='Z')
	   capital=1;
	  if(pass[i]=='!' || pass[i]=='@' || pass[i]=='#' || pass[i]=='$' || pass[i]=='%' || pass[i]=='*')
	   special=1;

 	}
 }
 else
 {
 	printf("\tpassword must be a 8 character or above");
 }
 if(number==0 || special==0 || capital==0 || small==0)
  printf("\n\t plzz,create a strong paaword and try again !!");
 else
  printf("\n\tPassword generated succesfully...");
 getch();
}

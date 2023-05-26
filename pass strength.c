#include <stdio.h>
#include <ctype.h> //for islower(), isupper(), isdigit() and ispunct()
#include <string.h> //for strlen()

main()
{
    char pass[30];
    printf("Enter your password: ");
    scanf("%[^\n]s", pass);//so that password may contain space char
    int i = 0,
    lower_count = 0,
    upper_count = 0,
    digit_count = 0,
    punct_count = 0;
    int length = strlen(pass);
    while (pass[i]) 
    {
        if(islower(pass[i]))
            lower_count++;
        if(isupper(pass[i]))
            upper_count++;
        if (isdigit(pass[i]))
            digit_count++;
        if (ispunct(pass[i]))
            punct_count++;
        i++;
        }
        if(strlen(pass) < 8)
        {
            printf("The password must have at least 8 chars\n");
            return 1;
        }
        if(lower_count == 0)
        {
             printf("You need lowercases\n");
        }
        if(upper_count == 0)
        {
             printf("You need an uppercase\n");
        }
        if(digit_count == 0)
        {
             printf("You need digits\n");
        }
        if(punct_count == 0)
        {
             printf("You need a special character\n");
        }
        if(upper_count != 0 && digit_count != 0 && punct_count != 0 &&
        length >=8)
        {
            printf("Your password is strong!\n");
        }
    }
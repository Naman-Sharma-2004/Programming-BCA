#include <stdio.h>
#include <conio.h>

// <------------------------------- Switch case ----------------------------->

main()
{
    int age;

    printf("Enter your age:\n");
    scanf("%d", &age);

switch (age)
{
case 3:
    printf("Your age is 3");
    break;

case 13:
    printf("Your age is 13");
    break;

    case 23:
    printf("Your age is 23");
    break;

default:
    printf("Your age is not 3, 13 or 23");
    break;
}   
   return 0;
}

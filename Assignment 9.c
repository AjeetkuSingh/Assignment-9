//Assignment 9 Sol 1//
/*
#include <stdio.h>

int main()
{
    int month;
    printf("Enter month number(1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
            printf("31 days");
            break;
        case 2:
            printf("28/29 days");
            break;
        case 3:
            printf("31 days");
            break;
        case 4:
            printf("30 days");
            break;
        case 5:
            printf("31 days");
            break;
        case 6:
            printf("30 days");
            break;
        case 7:
            printf("31 days");
            break;
        case 8:
            printf("31 days");
            break;
        case 9:
            printf("30 days");
            break;
        case 10:
            printf("31 days");
            break;
        case 11:
            printf("30 days");
            break;
        case 12:
            printf("31 days");
            break;
        default:
            printf("Invalid input! Please enter month number between 1-12");

    }

    return 0;
}
*/

//Sol 2//
/*
#include <stdio.h>
void main() {
  int num1,num2,opt;
  printf("Enter the first Integer :");
  scanf("%d",&num1);
  printf("Enter the second Integer :");
  scanf("%d",&num2);

    printf("\nInput your option :\n");
    printf("1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.\n5-Exit.\n");
    scanf("%d",&opt);
    switch(opt) {
      case 1:
        printf("The Addition of  %d and %d is: %d\n",num1,num2,num1+num2);
        break;

      case 2:
        printf("The Substraction of %d  and %d is: %d\n",num1,num2,num1-num2);
        break;

      case 3:
        printf("The Multiplication of %d  and %d is: %d\n",num1,num2,num1*num2);
        break;

      case 4:
        if(num2==0) {
          printf("The second integer is zero. Devide by zero.\n");
        } else {
          printf("The Division of %d  and %d is : %d\n",num1,num2,num1/num2);
        }
        break;

      case 5:
        break;

      default:
        printf("Input correct option\n");
        break;
    }
}
*/

//Sol 3//
/*
#include <stdio.h>
int main()
{
    unsigned int week;
    //Ask user to input week number
    printf("Enter week number (1-7): ");
    scanf("%u", &week);
    switch (week)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("\n Please enter Valid Number between 1 to 7");
    }
    return 0;
}
*/

//Sol 4//
/*
#include<stdio.h>
int main()
{
    int choice, a,b,c;
    printf("Enter your choice");
    printf("1. To check Isosceles Triangle\n");
    printf("2. To check Right angle Triangle\n");
    printf("3. To check Equilateral Triangle\n");
    scanf("%d",&choice);
    printf("Enter length of 3 sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    switch(choice)
    {
        case 1: if(a==b || b==c || c==a)
        printf("Isosceles");
        else
        printf("Not an Isosceles");
        break;

        case 2: if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)
        printf("Right Triangle");
        else
        Printf("Not a Right Triangle");
        break;

        case 3: if((a==b) &&(b==c))
        printf("Equilateral Triangle");
        else
        printf("Not a Equilateral Triangle");
        break;
        default:printf("Invalid");
    }
    return 0;
}
*/

//Sol 6//
/*
#include<stdio.h>
void main()
{
   int year,y;

   printf("Enter the Year :\n");
   scanf("%d",&year);

 y = year % 400 == 0 || year % 100 == 0 || year % 4 == 0;

 switch (y) {
        case 1:
            printf("\n%d is the leap year.\n", year);
            break;

        case 0:
            printf("\n%d is not the leap year.\n", year);
            break;

        default:
            printf("\n%d is not the leap year.\n", year);
    }

}
*/

//Sol 7//
/*
#include<stdio.h>
int main()
{
    float x=24; amount=0; total=0;
    switch(x<=50)
    {
        case 1: amount=x*0.5;
        break;
        case 0: Switch(x<=150)
        {
            case 1: amount=25+(x-50)*0.75;
            break;
            case 0: switch(x<=250)
            {
                case 1: amount=100+(x-150)*1.20;
                break;
                case 0: amount=220+(x-250)*1.5;
                break;
            }break;
        }
    }

total= amount+amount*0.20;
printf("Total amount=%f",total);
return o;
}
*/

//Sol 8//
/*
#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    switch (num > 0)
    {
        // Num is positive
        case 1:
            printf("%d is positive.", num);
        break;

        // Num is either negative or zero
        case 0:
            switch (num < 0)
            {
                case 1:
                    printf("%d is negative.", num);
                    break;
                case 0:
                    printf("%d is zero.", num);
                    break;
            }
        break;
    }

    return 0;
}
*/

//Sol 10//

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);


    discriminant = (b * b) - (4 * a * c);



    switch(discriminant > 0)
    {
        case 1:

            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("Two distinct and real roots exists: %.2f and %.2f",
                    root1, root2);
            break;

        case 0:

            switch(discriminant < 0)
            {
                case 1:

                    root1 = root2 = -b / (2 * a);
                    imaginary = sqrt(-discriminant) / (2 * a);

                    printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                            root1, imaginary, root2, imaginary);
                    break;

                case 0:

                    root1 = root2 = -b / (2 * a);

                    printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);

                    break;
            }
    }

    return 0;
}


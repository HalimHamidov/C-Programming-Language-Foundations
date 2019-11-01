//#include <stdio.h>
//
//int main(void)
//{
//    int a = 0;
//    int b = 5;
//    int total = 53;
//    scanf("%d", &a);
//    if (a >= 0 && a <= 8)
//        printf("%d\n", a * b + 10);
//    if (a > 8)
//        printf("%d\n", total);
//    else if (a < 0)
//        printf("error\n");
//    return (0);
//}

//
//#include <stdio.h>
//int main() {
//    int arrivalHour = 0;
//    scanf("%d", &arrivalHour);
//    int total = 10+5*arrivalHour;
//    int totalExceeds53 = total > 53;
//    if(totalExceeds53){
//        printf("53");
//    }else{
//        printf("%d", total);
//    }
//    return 0;
//}

#include <stdio.h>

int main(void)
{
    int a = 0;
    scanf("%d", &a);
    
    int t = a*5+10;
    int t53 = t > 53;
    if (t53)
    {
        printf("53");
    }
    else
    {
        printf("%d", t);
    }
    return (0);
}
/*
The hostel in which you plan to spend the night tonight offers very interesting rates, as long as you do not arrive too late. Housekeeping finishes preparing rooms by noon, and the sooner guests arrive after noon, the less they have to pay. You are trying to build a C program that calculates your price to pay based on your arrival time.

Your program will read an integer (between 0 and 12) indicating the number of hours past noon of your arrival. For example, 0 indicates a noon arrival, 1 a 1pm arrival, 12 a midnight arrival, etc. The base price is 10 dollars, and 5 dollars are added for every hour after noon. Thankfully the total is capped at 53 dollars, so you'll never have to pay more than that. Your program should print the price (an integer) you have to pay, given the input arrival time.

Example 1
Input
7
Output
45
Example 2
Input
10
Output
53
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.

Note
You may submit as many solutions as you wish. Only your highest score will be kept.
 */

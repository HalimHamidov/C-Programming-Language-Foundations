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

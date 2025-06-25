#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    unsigned long num;
    unsigned long div;
    bool isPrime;           //素数标记

    printf("Please enter an tinteger for analysis; ");
    printf("Enter q to quit.\n");
    while (scanf("%lu",&num) == 1)
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++) //div从2开始一直自增1直到div<=sqrt{num}
        {
            if (num % div == 0)   //若div是num的因子，否则跳过此选择语句且由上for循环将isPrime初始化为ture
            {
                if ((div * div) != num) //若div不等于 sqrt{num}
                printf("%lu is divisible by %lu and %lu,\n",  //输入的num的因子为div和frac{num}{div}
                        num, div, num / div);
                else                    //若div等于 sqrt{num}
                    printf("%lu is divisible by %lu.\n",      //num的因子为div
                        num, div);
                        isPrime = false;  //该数不是素数
            }
        }
        if (isPrime)  //若div是num的因子，则isPrime=false，否则isPrime=ture，此时执行该选择语句
            printf("%lu is prime.\n", num);
        printf("Please enter another interger for analysis; ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}
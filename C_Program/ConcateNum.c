#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int num1, num2 = 0;
    scanf("%d", &num1);
    scanf("%d", &num2);

    // int l1 = sizeof(n1) / sizeof(n1[0]);
    // int l2 = sizeof(n1) / sizeof(n2[0]);
    int tmp_n1 = num1;
    int tmp_n2 = num2;
    int l1 = 0, l2 = 0;

    while (tmp_n1 > 0)
    {
        tmp_n1 /= 10;
        l1++;
    }
    while (tmp_n2 > 0)
    {
        tmp_n2 /= 10;
        l2++;
    }

    char str_n1[l1];
    char str_n2[l2];
    
    int l;
    if (l1 <= l2)
    {
        l = l2;
    }
    else
    {
        l = l1;
    }

    char str_n3[l1 + l2];

    for (int i = l1 - 1; i >= 0; i--)
    {
        int d = num1 % 10;
        str_n1[i] = d;
        num1 /= 10;
    }

    for (int i = l2 - 1; i >= 0; i--)
    {
        int d = num2 % 10;
        str_n2[i] = d;
        num2 /= 10;
    }

    int n = 0;
    for (int j = 0; j < l1 + l2; j++)
    {
        if (j < l1)
        {
            str_n3[n] = str_n1[j];
            n++;
        }
        if (j < l2)
        {
            str_n3[n] = str_n2[j];
            n++;
        }
    }

   printf("\n");
    //String s = "";

    for (int i = 0; i < l1 + l2; i++)
    {
        printf("%d",str_n3[i]);
        //s = s + str_n3[i] + "";
    }

    int con_v = atoi(str_n3);
    if (10000000000<= con_v)
    {
        con_v = -1;
    }
    printf("\n%d",con_v);


return 0;
}
/*
 * Find the Nth Catalan number based on its recursive formula
 * 
 * Author: Ansor Kasimov 
 * Created: March 27 2022
 * Copyright (c) 2022 Ansor Kasimov
 */

#include <stdio.h>

int catalan(int);

int main()
{
    printf("The 5th Catalan number is: %d\n", catalan(5));
    printf("The 9th Catalan number is: %d\n", catalan(9));
    printf("The 13th Catalan number is: %d\n", catalan(13));
    return 0;
}

int catalan(int n)
{
    int res = 0;
    if (n <= 1)
        return 1;
    for (int i = 0; i < n; ++i)
        res += catalan(i) * catalan(n - i - 1);
    return res;
}
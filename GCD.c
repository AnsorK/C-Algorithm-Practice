/*
 * Find the greatest common divisor of two positive integers using two recursive functions
 * First function will use the Euclidean Algortihm
 * Second function will use Dijkstra's Algorithm
 * 
 * Author: Ansor Kasimov 
 * Created: March 27 2022
 * Copyright (c) 2022 Ansor Kasimov
 */

#include <stdio.h>

int euclidean(int, int);
int dijkstra(int, int);

int main()
{
    int set1[2] = {32, 456};
    int set2[2] = {1424, 3084};
    int set3[2] = {91, 400};
    printf("Euclidean algorithm:\n"); 
    printf("Greatest common divisor of %d and %d is %d\n", set1[0], set1[1], euclidean(set1[0], set1[1]));
    printf("Greatest common divisor of %d and %d is %d\n", set2[0], set2[1], euclidean(set2[0], set2[1]));
    printf("Greatest common divisor of %d and %d is %d\n\n", set3[0], set3[1], euclidean(set3[0], set3[1]));
    printf("Dijkstra's algorithm:\n"); 
    printf("Greatest common divisor of %d and %d is %d\n", set1[0], set1[1], dijkstra(set1[0], set1[1]));
    printf("Greatest common divisor of %d and %d is %d\n", set2[0], set2[1], dijkstra(set2[0], set2[1]));
    printf("Greatest common divisor of %d and %d is %d\n", set3[0], set3[1], dijkstra(set3[0], set3[1]));
    return 0;
}

int euclidean(int a, int b)
{
    int rem = a % b;
    if (rem == 0)
        return b;
    return euclidean(b, rem);
}

int dijkstra(int a, int b)
{
    if (a == b)
        return a;
    if (a > b)
        return dijkstra(a - b, b);
    else
        return dijkstra(b - a, a);
}
/*
 * Utilize the Merge Sort algorithm on an array of characters
 * Put in unsorted array and get back a sorted one
 * 
 * Author: Ansor Kasimov 
 * Created: March 27 2022
 * Copyright (c) 2022 Ansor Kasimov
 */

#include <stdio.h>

void mergeSort(char[], int, int);
void merge(char[], int, int, int);

int main()
{
    char set[10] = {'g', 'a', 'c', 'h', 'e', 'j', 'i', 'b', 'f', 'd'};
    printf("Unsorted array of characters:\n");
    int i;
    for (i = 0; i < 10; ++i)
        printf("%c ", set[i]);
    printf("\n");
    mergeSort(set, 0, 9);
    printf("Sorted array of characters after Merge Sort:\n");
    for (i = 0; i < 10; ++i)
      printf("%c ", set[i]);
    printf("\n");
    return 0;
}

void mergeSort(char arr[], int l, int r)
{
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void merge(char arr[], int l, int m, int r)
{
    int i, j, k;
    int lArrSize = m - l + 1;
    int rArrSize = r - m;
    int lArr[lArrSize], rArr[rArrSize];

    for (i = 0; i < lArrSize; ++i)
        lArr[i] = arr[l + i];
    for (j = 0; j < rArrSize; ++j)
        rArr[j] = arr[m + j + 1];

    i = j = 0;
    k = l;

    while (i < lArrSize && j < rArrSize) {
        if (lArr[i] <= rArr[j])
            arr[k++] = lArr[i++];
        else
            arr[k++] = rArr[j++];
    }

    while (i < lArrSize)
        arr[k++] = lArr[i++];
    while (j < rArrSize)
        arr[k++] = rArr[j++];
}
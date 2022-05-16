#ifndef EQUATION_H
#define EQUATION_H

#include <stdlib.h>
#include<stdio.h>
#include <math.h>

#define _CRT_SECURE_NO_WARNINGS

char myStrTok(char* str, const char* delim);
void mergeArray(int a[], int n1, int b[], int n2, int mer[]);
void merge_array_1(int arr[], int arr2[], int arr1_len, int arr2_len, int merge[]);

#endif // !EQUATION_H

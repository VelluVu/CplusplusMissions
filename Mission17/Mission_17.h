#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int t[7] = {2,3,15,5,6,3,2};
int elements = 7;

void Order(int* table, int elements);
int* Find_Largest(int* table, int elements);
void SwapValues(int& x, int& y);
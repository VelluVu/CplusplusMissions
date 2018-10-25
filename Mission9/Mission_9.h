#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;



string question;
string question2;
string high;
string scores;
string name;
int score;
const int SIZE(10);

int scored [SIZE];
string players [SIZE];

string Ask_Name();
int Ask_Score();
void PrintScore(string players[SIZE], int scored[SIZE] );
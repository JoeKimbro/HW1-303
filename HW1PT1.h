#pragma once
#include <iostream>
#include <stdbool.h>
#include <fstream>
#include <algorithm>


using namespace std;
const int Arr_size = 100; int dataArray[Arr_size];
void readFromArray(const string& fileName);
int findIndexInArr(int dataArray[], int num);

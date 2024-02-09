#pragma once
#include <iostream>
#include <stdbool.h>
#include <fstream>
#include <algorithm>
using namespace std;
const int arraySize = 100; int dataArray[arraySize];
void readFromArray(const string& fileName);
void replaceAtIndex(int index, bool remove);

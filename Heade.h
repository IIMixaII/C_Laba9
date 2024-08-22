#pragma once
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <chrono>
using namespace std;
int getRandomNumber(int min, int max);
int linearSearch(const std::vector<int>& arr, int target, int& comparisons);
int BarierlinearSearch(std::vector<int>& arr, int target, int& comparisons);
int linearSearch1(const std::vector<int>& arr, int target);
int binarySearch(const std::vector<int>& arr, int target, int& comparisons);
vector<int> generateArray(int size, string order);
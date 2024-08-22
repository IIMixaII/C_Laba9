#include "Heade.h"

// Функция для генерации случайных чисел в заданном диапазоне
int getRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Функция для выполнения линейного поиска в массиве
int linearSearch(const vector<int>& arr, int target, int& comparisons) {

    for (int i = 0; i < arr.size(); ++i) {
        comparisons++;
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}
int BarierlinearSearch(vector<int>& arr, int target, int& comparisons) {
    int last = arr[arr.size() - 1];
    arr[arr.size() - 1] = target; 
    int i = 0;
    while (arr[i] != target) {
        ++i;
        comparisons++;
    }
    arr[arr.size() - 1] = last; 
    if (i < arr.size() - 1 || arr[arr.size() - 1] == target) {
        return i; 
    }
    return -1; 
}
int linearSearch1(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}
int binarySearch(const vector<int>& arr, int target, int& comparisons) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        comparisons++;
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}


vector<int> generateArray(int size, string order) {
    vector<int> arr(size);
    if (order == "Отсортированный") {
        for (int i = 0; i < size; i++) {
            arr[i] = i;
        }
    }
    else if (order == "Обратная сортировка") {
        for (int i = 0; i < size; i++) {
            arr[i] = size - i - 1;
        }
    }
    else if (order == "Отсортрованный на 25%") {
        for (int i = 0; i < size; i++) {
            int num = size * 0.25;
            if (i < num) {
                arr[i] = i;
            }
            else {
                arr[i] = rand() % size + num;
            }
        }
    }
    else if (order == "Отсортированный на 50%") {
        for (int i = 0; i < size; i++) {
            int num = size * 0.5;
            if (i < num) {
                arr[i] = i;
            }
            else {
                arr[i] = rand() % size + num;
            }
        }
    }
    else if (order == "Отсортированный на 75%") {
        for (int i = 0; i < size; i++) {
            int num = size * 0.75;
            if (i < num) {
                arr[i] = i;
            }
            else {
                arr[i] = rand() % size + num;
            }
        }
    }
    else {
        for (int i = 0; i < size; i++) {
            arr[i] = rand() % size;
        }
    }
    return arr;
}
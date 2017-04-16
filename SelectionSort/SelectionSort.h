//
// Created by James Li on 2017/4/16.
//

#ifndef SELECTIONSORT_SELECTIONSORT_H
#define SELECTIONSORT_SELECTIONSORT_H

#include <iostream>

using namespace std;

template <typename T>
void selectionSort(T arr[], int n){

    for(int i = 0; i < n; i ++){

        // 寻找[i, n - 1]区间的最小值
        int minIndex = i;
        for(int j = i + 1; j < n; j ++)
            if(arr[j] < arr[minIndex])
                minIndex = j;
        swap(arr[i], arr[minIndex]);
    }

    return;
}

#endif //SELECTIONSORT_SELECTIONSORT_H

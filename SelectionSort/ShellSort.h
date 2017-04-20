//
// Created by James Li on 2017/4/19.
//

#ifndef SELECTIONSORT_SELLSORT_H
#define SELECTIONSORT_SELLSORT_H

#include <iostream>
#include <math.h>

using namespace std;

template <typename T>
void shellSort(T arr[], int n){
//
//    int step = n;
//    for(step >>= 1; step > 0; step >>= 1){
//
//        int j;
//        for(int i = step - 1; i < n; i ++){
//
//            T e = arr[i];
//            for(j = i; j > step - 1 && arr[j - step] > e; j -= step)
//                arr[j] = arr[j - step];
//            arr[j] = e;
//        }
//    }
//
//    return;

    int step;
    int k;
    int j;
    for(k = int(log(n + 1) / log(2)); k > 0; k --){

        step = int(power(2, k)) - 1;
        for(int i = step - 1; i < n; i ++){

            T e = arr[i];
            for(j = i; j > step - 1 && arr[j - step] > e; j -= step)
                arr[j] = arr[j - step];
            arr[j] = e;
        }
    }

    return;
}

#endif //SELECTIONSORT_SELLSORT_H

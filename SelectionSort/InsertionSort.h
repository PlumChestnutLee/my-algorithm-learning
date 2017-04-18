//
// Created by James Li on 2017/4/18.
//

#ifndef SELECTIONSORT_INSERTIONSORT_H
#define SELECTIONSORT_INSERTIONSORT_H

#include <iostream>

using namespace std;

template <typename T>
void insertionSort(T arr[], int n){

    for(int i = 0; i < n; i ++){

        // 寻找arr[i]合适的插入位置
//        for(int j = i; j > 0; j --){
//
//            if(arr[j] < arr[j - 1])
//                swap(arr[j], arr[j - 1]);
//            else
//                break;
//        }


//        for(int j = i; j > 0 && arr[j] < arr[j - 1]; j --)
//            swap(arr[j], arr[j - 1]);

        T e = arr[i];
        int j; // j保存元素e应该插入的位置
        for(j = i; j > 0 && arr[j - 1] > e; j --)
            arr[j] = arr[j - 1];
        arr[j] = e;
    }

    return;
}

#endif //SELECTIONSORT_INSERTIONSORT_H

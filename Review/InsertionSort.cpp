#include <iostream>

using namespace std;

template <typename T>
void insertionSort(T arr[], int n){

	for(int i = 0; i < n; i ++){

		// for(int j = i; j > 0; j --){

		// 	if(arr[j - 1] > arr[j])
		// 		swap(arr[j - 1], arr[j]);
		// 	else
		// 		break;
		// }

		for(int j = i; j > 0 && arr[j - 1] > arr[j]; j --)
			swap(arr[j - 1], arr[j]);

	}

	return;
}

template <typename T>
void insertionSortModified(T arr[], int n){

	for(int i = 0; i < n; i ++){

		T e = arr[i];
		int j;
		for(j = i; j > 0 && arr[j - 1] > e; j --)
			arr[j] = arr[j - 1];

		arr[j] = e;
	}

	return;
}



#include <iostream>

using namespace std;

template <typename T>
void insertionSort(T arr[], int n){

	for(int i = 0; i < n; i ++)
		for(int j = i; j > 0 && arr[j - 1] > arr[j]; j --)
			swap(arr[j - 1], arr[j]);

	return;
}

template <typename T>
void insertionSortModified(T arr[], int n){

	int j;
	for(int i = 0; i < n; i ++){

		T e = arr[i];
		for(j = i; j > 0 && arr[j - 1] > e; j --)
			arr[j] = arr[j - 1];
		arr[j] = e;
	}

	return;
}
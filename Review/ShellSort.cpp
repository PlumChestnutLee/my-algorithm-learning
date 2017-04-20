#include <iostream>

using namespace std;

template <typename T>
void shellSort(T arr[], int n){

	int step = n;
	for(step >> 1; step > 0; step >> 1){

		int j;
		for(int i = step - 1; i < n; i ++){

			T e = arr[i];
			for(j = i; j > step - 1 && arr[j - step] > e; j -= step)
				arr[j] = arr[j - step];
			arr[j] = e;
		}
	}

	return;
}



#include <iostream>

using namespace std;

template <typename T>
void shellSort(T arr[], int n){

	int step = n;
	for(step >>= 1; step > 0; step >>= 1){

		for(i = step - 1; i < n; i ++){

			T e = arr[i];
			int j;
			for(j = i; j > step - 1 && arr[j - step] > e; j -= step)
				arr[j] = arr[j - step];
			arr[j] = e;
		}
	}

	return;
}

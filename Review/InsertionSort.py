def insertionSort(arr, n):
	for i in range(n):
		for j in range(i, 0, -1):
			if arr[j - 1] > arr[j]:
				arr[j - 1], arr[j] = arr[j], arr[j - 1]
			else:
				break

	return


def insertionSortModified(arr, n):
	for i in range(n):
		e = arr[i]
		for j in range(i, 0 ,-1):
			if arr[j - 1] > e:
				arr[j] = arr[j - 1]
			else:
				break;
		arr[j] = e

	return
	
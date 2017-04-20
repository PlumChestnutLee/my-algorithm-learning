def selectionSort(arr, n):
	for i in range(n):
		minIndex = i
		for j in range(i + 1, n):
			if arr[j] < arr[minIndex]:
				minIndex = j
		arr[i], arr[minIndex] = arr[minIndex], arr[i]

	return
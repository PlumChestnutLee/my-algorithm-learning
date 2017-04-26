def insertionSort(arr, n):
	for i in range(n):
		j = i
		while j > 0 and arr[j - 1] > arr[j]:
			arr[j - 1], arr[j] = arr[j], arr[j - 1]
			j -= 1

	return arr


def insertionSortModified(arr, n):
	for i in range(n):
		e = arr[i]
		j = i
		while j > 0 and arr[j - 1] > e:
			arr[j] = arr[j - 1]
			j -= 1
		arr[j] = e

	return arr





def insertionSort(arr, n):
	for i in range(n):
		j = i
		while j > 0 and arr[j - 1] > arr[j]:
			arr[j - 1], arr[j] = arr[j], arr[j - 1]
			j -= 1

	return arr

def insertionSortModified(arr, n):
	for i in range(n):
		e = arr[i]
		j = i
		while j > 0 and arr[j - 1] > e:
			arr[j] = arr[j - 1]
			j -= 1
		arr[j] = e

	return arrs
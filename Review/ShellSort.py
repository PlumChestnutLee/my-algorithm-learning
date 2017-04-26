def shellSort(arr, n):
	step = n / 2
	while step > 0:
		for i in range(step - 1, n):
			e = arr[i]
			for j in range(i, step - 1, -step):
				if arr[j - step] > e:
					arr[j] = arr[j - step]
				else:
					break
			arr[j] = e
		step = step / 2

	return


def shellSort(arr, n):
	step = n / 2
	while step > 0:
		for i in range(step - 1, n):
			e = arr[i]
			j = i
			while j > step - 1 and arr[j - step] > e:
				arr[j] = arr[j - step]
				j -= step
			arr[j] = e
		step = step / 2

	return arr
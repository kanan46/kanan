int pivotedBinarySearch(int arr[], int n, int key)
{
    int pivot = findPivot(arr, 0, n - 1);
 
    // If we didn't find a pivot,
    // then array is not rotated at all
    if (pivot == -1)
        return binarySearch(arr, 0, n - 1, key);
 
    // If we found a pivot, then first compare with pivot
    // and then search in two subarrays around pivot
    if (arr[pivot] == key)
        return pivot;
 
    if (arr[0] <= key)
        return binarySearch(arr, 0, pivot - 1, key);
 
    return binarySearch(arr, pivot + 1, n - 1, key);
}

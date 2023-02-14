/*
197. Check Max-Heap: Given an array of integers, check whether it represents max-heap or not. Return true if the given array represents max-heap, else return false.
*/

bool isMaxHeap(int arr[], int n)
{

    for (int i = 0; 2 * i + 1 < n; i++)
    {
        int leftChild = 2 * i + 1;
        int rightChild = leftChild + 1;

        if (arr[i] < arr[leftChild])
        {
            return false;
        }

        if (rightChild < n && arr[i] < arr[rightChild])
        {
            return false;
        }
    }

    return true;
}
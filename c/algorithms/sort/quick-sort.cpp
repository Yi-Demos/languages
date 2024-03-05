// https://hackmd.io/@jQSlhiN3QaGkugpbD4NDAA/rkvNkyQfi
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
int Partition(int *arr, int front, int end) {
  int pivot = arr[end];
  int i = front - 1;
  for (int j = front; j < end; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  i++;
  swap(&arr[i], &arr[end]);
  return i;
}
void QuickSort(int *arr, int front, int end) {
  if (front < end) {
    int pivot = Partition(arr, front, end);
    QuickSort(arr, front, pivot - 1);
    QuickSort(arr, pivot + 1, end);
  }
}
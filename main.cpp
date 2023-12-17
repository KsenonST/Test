void selectionSort(int arr[], int n, bool ascending) {
for (int i = 0; i < n-1; i++) {
int minIndex = i;
for (int j = i+1; j < n; j++) {
if (ascending ? arr[j] < arr[minIndex] : arr[j] > arr[minIndex]) {
minIndex = j;
}
}
std::swap(arr[i], arr[minIndex]);
}
}

int main() {
int arr[] = {64, 25, 12, 22, 11};
int n = sizeof(arr)/sizeof(arr[0]);
selectionSort(arr, n, true); // сортировка по возрастанию
// selectionSort(arr, n, false); // сортировка по убыванию

std::cout << "Sorted array: ";
for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
}
return 0;
}
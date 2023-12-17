#include

int getMax(const int* ar, int size) {
int maxIndex = 0;
for (int i = 1; i < size; i++) {
if (ar[i] > ar[maxIndex]) {
maxIndex = i;
}
}
return maxIndex;
}

int getMin(const int* ar, int size) {
int minIndex = 0;
for (int i = 1; i < size; i++) {
if (ar[i] < ar[minIndex]) {
minIndex = i;
}
}
return minIndex;
}

void swap(int* a, int* b) {
int temp = *a;
*a = *b;
*b = temp;
}

void showEl_line(const int* ar, int size, char del = ' ') {
for (int i = 0; i < size; i++) {
if (i != size - 1) {
std::cout << ar[i] << del;
} else {
std::cout << ar[i];
}
}
std::cout << std::endl;
}

void showEl_matrix(const int* ar, int size, int col, char del = ' ') {
for (int i = 0; i < size; i++) {
if (i % col == 0 && i != 0) {
std::cout << std::endl;
}
std::cout << ar[i] << del;
}
std::cout << std::endl;
}

int main() {
int arr[] = {5, 2, 9, 1, 7, 3};
int size = sizeof(arr) / sizeof(arr[0]);

int maxIndex = getMax(arr, size);
int minIndex = getMin(arr, size);

std::cout << "Max element: " << arr[maxIndex] << " at index " << maxIndex << std::endl;
std::cout << "Min element: " << arr[minIndex] << " at index " << minIndex << std::endl;

swap(&arr[maxIndex], &arr[minIndex]);

std::cout << "After swapping max and min elements: ";
showEl_line(arr, size);

std::cout << "Array elements in matrix form (2x3):" << std::endl;
showEl_matrix(arr, size, 3);

return 0;
}
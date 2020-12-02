#include <iostream>
#include <vector>
using namespace std;

void quickSort(float* numbers, int left, int right)
{
    int pivot; 
    int l_hold = left; 
    int r_hold = right; 
    pivot = numbers[left];
    while (left < right) {
        while ((numbers[right] >= pivot) && (left < right))
            right--; 
        if (left != right) 
        {
            numbers[left] = numbers[right]; 
            left++; 
        }
        while ((numbers[left] <= pivot) && (left < right))
            left++; 
        if (left != right) 
        {
            numbers[right] = numbers[left]; 
            right--; 
        }
    }
    numbers[left] = pivot; 
    pivot = left;
    left = l_hold;
    right = r_hold;
    if (left < pivot) 
        quickSort(numbers, left, pivot - 1);
    if (right > pivot)
        quickSort(numbers, pivot + 1, right);
}

int main()
{
    float n, x, y, s;
    cin >> n;
	float*A = new float[n];
    float* B = new float[n];
    for (int i = 0; i < n; i++) {
        cout << "Введите количество товара";
        cin >> x;
        cout << "Введите стоимость товара";
        cin >> y;
        A[i]=y / x;
		B[i]=x;
    }
    quickSort(A, 0, n-1);
	while (s!=0){

	}

}


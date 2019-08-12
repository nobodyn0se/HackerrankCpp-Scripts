#include<iostream>
#include<time.h>
#include<string>
#include<ctime>
#include<iomanip>
using namespace std;

void input(int [], int);
void printArray(int [], int);
int binarySearch(int [], int, int, int);
void insertionSort(int [], int);
void bubbleSort(int [], int);
void swap(int*, int*);
void selectionSort(int [], int);
void time_it(double, double, string);
void optimized_bubbleSort(int [], int);

int main() {
    clock_t start, end;
    int size, elem, i;
    cout <<"Enter the size of the array\n";
    cin >> size;
    int*a = new int[size];
    int*b = new int[size];
    int*c = new int[size];
    int*d = new int[size];
    cout <<"Entering random array elements\n"; 
    input(a, size); 
    //cout <<"The unsorted array looks like this\n";
    //printArray(a, size); 
    for(i=0; i < size; i++) {
        d[i] = c[i] = b[i] = a[i];
    }
    cout <<"Sorting the array using Binary Insertion Sort...\n";
    start = clock();
    insertionSort(a, size);
    end = clock();
    delete[] a;
    //printArray(a, size);
    time_it(start, end, "Binary Insertion");
    cout <<"Sorting the array using Selection Sort...\n";
    start = clock();
    selectionSort(c, size);
    end = clock();
    delete[] c;
    //printArray(c, size);
    time_it(start, end, "Selection");
    cout <<"Sorting the array using Bubble Sort...\n"; 
    start = clock();
    bubbleSort(b, size);
    end = clock();
    delete[] b;
    //printArray(b, size);
    time_it(start, end, "Bubble");
    cout <<"Sorting the array using Optimized Bubble Sort...\n";
    start = clock();
    optimized_bubbleSort(d, size);
    end = clock();
    delete[] d;
    time_it(start, end, "Optimized Bubble");
    return 0;
}

void printArray(int a[], int n) {
    for(int i=0; i<n; i++)
        cout << a[i] <<" ";
    cout << endl;
}

int binarySearch(int a[], int low, int high, int x) {
    if (high <= low)
        return (x > a[low])?  (low + 1): low;
    int mid = (low + high)/2;
    if(x == a[mid])
        return mid+1;
    if(x > a[mid])
        return binarySearch(a, mid+1, high, x);
    return binarySearch(a, low, mid-1, x);
}

void insertionSort(int a[], int n) {
    int loc, i, j, selected;
    for(i=1; i<n; i++) {
        selected = a[i];
        j = i - 1;
        loc = binarySearch(a, 0, j, selected);
        while(j >= loc){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = selected;
    }
}

void bubbleSort(int b[], int n) {
    int i, j;
    for(i=n-1;i>=0;i--) {
        for(j=0; j<i; j++) {
            if(b[j+1] < b[j]) {  
                swap(b+j,b+j+1);
            }
        }
    }
}

void swap(int*a, int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int c[], int n) {
    int min, i, j;
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(c[j] < c[i]){
                swap(c+i,c+j);
            }
        }
    }
}

void time_it(double strt, double lst, string str) {
    double time_taken = double(lst - strt)/ double(CLOCKS_PER_SEC);
    cout <<"Time taken by "<< str <<" Sort is: "<< fixed << time_taken << setprecision(6);
    cout <<"sec\n";
}

void input(int x[], int n) {
    int i;
    srand(time(0));
    for(i=0; i<n; i++) {
        x[i] = rand() % 1000 + 1;
    }
}

void optimized_bubbleSort(int b[], int n) {
    int i, j;
    bool swapped;
    for(i=n-1;i>=0;i--) {
        swapped = false;
        for(j=0; j<i; j++) {
            if(b[j+1] < b[j]) {  
                swap(b+j,b+j+1);
                swapped = true;
            }
        }
        if(swapped==false) break;
    }
}

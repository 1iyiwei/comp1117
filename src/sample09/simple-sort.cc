// Rearranging an array of numbers into ascending order.
// The "selection sort" algorithm is used.

#include <iostream>

const int MAX_NUM_INPUT = 10;

void swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

int main(){
	using namespace std;
  
	int a[MAX_NUM_INPUT];   // declare an array of int with MAX_NUM_INPUT entries

	cout << "Enter " << MAX_NUM_INPUT << " numbers: ";
	for (int i = 0; i < MAX_NUM_INPUT; ++i)
		cin >> a[i];

	for (int i = 0; i < MAX_NUM_INPUT; ++i){
		// find the minimum value among a[i], a[i+1], ..., a[MAX_NUM_INPUT]
		int min_index = i;   // index of the minimum value
		for (int j = i+1; j < MAX_NUM_INPUT; ++j)
			if (a[j] < a[min_index])
				min_index = j;
    
    // swap the minimum entry with the i-th one
  	swap(a[i], a[min_index]);
  }

  for (int i = 0; i < MAX_NUM_INPUT; ++i)
    cout << a[i] << ' ';
  cout << endl;
}

// Other sorting algorithms:

// Bubble sort            <--- Simple but slow for large input
// Insertion sort            

// Quick sort             <--- Fast, with bigger overhead for small input
// Heap sort
// Merge sort

// More on sorting will be covered in other courses such as
// CSIS1119 (Introduction to data structures and algorithms).


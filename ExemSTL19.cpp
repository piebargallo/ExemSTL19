// C++ program to illustrate the
// priority_queue :: value_type function
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main() {
	
	// declare value_type for priority queue
	priority_queue<int>::value_type AnInt;

	// Declares priority_queue
	priority_queue<int> q1;

	// here AnInt acts as a variable of int data type
	AnInt = 16;
	cout << "The value_type is AnInt = " << AnInt;

	return 0;

}

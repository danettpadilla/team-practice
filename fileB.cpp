//fileB - sum of an array
#include <iostream>
using namespace std;

void functionB() {
    // Developer1: Modify this message
    cout << "Function B: write a message here." << endl;

    // Developer2: Modify this array
    int nums[] = {1, 2, 3, 4, 5};
    
	int size = sizeof(nums) / sizeof(nums[0]);
    int sum = 0;
	
	// Developer3: Modify this loop to add the array numbers
	for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
	
	// Developer4: Print the sum of the array
	
}

int main() {
    functionB();
    return 0;
}
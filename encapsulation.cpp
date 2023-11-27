// Encapsulation
#include <iostream>
using namespace std;

class Encapsulation {
private:
	// Data hidden from outside world
	int x;

public:
	
	void set(int a) { x = a; }

	int get() { return x; }
};

// Driver code
int main()
{
	Encapsulation obj;
	obj.set(5);
	cout << obj.get();
	return 0;
}

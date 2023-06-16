#include <iostream>
#include <wchar.h>

using namespace std;

int main() {
    cout << "Hello World" << endl;

	int total = 0;
	
	for(int i=0; i<10;i++) {
		total += i;
		cout << total << " is the total" << endl;	
	}
    return 0;
}

#include <iostream>
using namespace std;

const int SIZE = 5;
const char dog[SIZE] = {'B', 'I', 'N', 'G', 'O'};

void printName(bool isPartial, int blockNum);
int main()
{
	for (int i = 0; i < 6; i++) {
		cout << "\nThere was a farmer had a dog\nand ";
		printName(false, i);
		cout << "was his name-o\n";
		printName(true, i);
		cout << "And ";
		printName(false, i);
		cout << "was his name-o\n";
	}
	cout << endl;
    return 0;
}
void printName(bool isPartial, int blockNum)
{
	if (isPartial) {
		for (int i = 0; i < 3; i++) {
			for (int i = 0; i < blockNum; i++)
				cout << "* ";
			for (int i = blockNum; i < 5; i++)
				cout << dog[i] << " ";		
			cout << "\n";
		}
	} else {
		for (int i = 0; i < 5; i++)
			cout << dog[i] << " ";
	}
}

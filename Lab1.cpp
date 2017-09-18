//Victor Anthony
// Lab 1
// COSC 2030


#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;


int main() {
	string filename;
	float intnum = 1.0;
	ifstream nFile;


	cout << "Enter file name." << endl;
	cin >> filename;

	nFile.open(filename);

	int counter = 0;
	
	//nFile >> intnum;
	float num1 = 0;
	float num2 = 0;
	while (!nFile.eof())
	{
		counter++;
		nFile >> intnum;
		

		if (counter == 1) {
			num1 = intnum;
		}
		else if (counter == 2){
			num2 = intnum;

		}
		//else if (counter = 1) {
		//	int num2 = intnum;
		//}
		
		
	}
	int actualCount = counter - 1;
	cout << "Count: " << actualCount << endl;

	nFile.close();
	nFile.open(filename);
	//nFile.seekg(0, nFile.beg);
	
	//cout << intnum << endl;
	int nCount = 0;
	
	float num3 = 0;
	while (!nFile.eof())
	{
		nFile >> intnum;
		nCount++;
		//int LastMinus1 = counter - 2;
		int LastMinus1 = actualCount - 1;
		if (nCount == LastMinus1) {
			num3 = intnum;
			cout << "Last -1: " << num3 << endl;
		}

		if (nCount == counter)
		{
			cout << "Last: " << intnum << endl;
			
		}
	}
	
	cout << "First Number: " <<  num1 << " and " << "Second is "<<  num2 << endl;
	system("pause");
	return 0;


}

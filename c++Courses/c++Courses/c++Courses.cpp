
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vector1;
	vector<int> vector2;
	
	vector1.push_back(10);
	vector1.push_back(20);

	vector2.push_back(100);
	vector2.push_back(200);

	cout << "Pushing values into the vector1 and also checking its size at the end \n";
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << vector1.size() << endl;

	cout << "Pushing values into the vector2 and also checking its size at the end \n";
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;
	cout << vector2.size() << endl;

	vector<vector<int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << "Checking values in my 2d array \n";
	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(1).at(1) << endl;

	cout << "Changing the vector1 value [0] to 1000 \n";
	vector1.at(0) = 1000;
	cout << vector1.at(0) << endl;

	cout << "Rechecking values in my 2d array \n";
	cout << vector_2d.at(0).at(0) << endl;


	return 0;
}


//#include "PhanSo.cpp"
#include <vector>
#include <iostream>
// class Dummy{
// public:
// 	Dummy(){cout<<"Enter";}
// 	~Dummy(){cout<<"Exit";}

// };
// Dummy A;
using namespace std;
int main()
{
	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(4);
	for (auto i = numbers.begin();i!=numbers.end();i++){
		std::cout<<*i<<endl;
	}
	// fraction *a = new fraction;
	// a->import();
	// cout << "Phan so sau khi rut gon la: ";
	// a->print();
	// delete a;
	return 0;
}

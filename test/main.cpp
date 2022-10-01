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
vector <int> test(){
	vector<int> a{1,2,3,4};
	return a;
}

int main()
{
	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(4);
	for (auto i = test().begin();i!=test().end();i++){
		std::cout<<*i<<endl;
	}
	test();
	// fraction *a = new fraction;
	// a->import();
	// cout << "Phan so sau khi rut gon la: ";
	// a->print();
	// delete a;
	return 0;
}

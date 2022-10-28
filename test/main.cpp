//#include "PhanSo.cpp"
#include <vector>
#include <iostream>
#include<algorithm>
// class Dummy{
// public:
// 	Dummy(){cout<<"Enter";}
// 	~Dummy(){cout<<"Exit";}

// };
// Dummy A;
using namespace std;
// vector <int> test(){
// 	vector<int> a{1,2,3,4};
// 	return a;
// }

int main()
{
	vector<int> numbers{4,564,64,84,23,78};
	numbers.push_back(1);
	numbers.push_back(4);
	for (auto i = numbers.begin();i!=numbers.end();i++){
		std::cout<<*i<<endl;
	}
	std::vector<int>::iterator it;
	it= find(numbers.begin(),numbers.end(),84);
	cout<<*it<<endl;
	// test();
	// fraction *a = new fraction;
	// a->import();
	// cout << "Phan so sau khi rut gon la: ";
	// a->print();
	// delete a;
	return 0;
}

#include<iostream>
using namespace std;
class Point {

    private:

        float x, y;

    public:

        Point(float x);

        Point(float x, float y);

        void display();

};



/////////// Point.cpp ////////////////



Point::Point(float x) {

    this->x = x;

    this->y = 0;

}



Point::Point(float x, float y) {

    this->x = x;

    this->y = y;

}



void Point::display() {

    cout << "Display point (x,y) = (" << this->x << "," << this->y << ")" << endl;

}



/////////// Test1.cpp ////////////////

int main() {

    // UC1: Khoi tao 1 diem và in ra màn hình

    Point p1;

    p1.display();

  	return 0;

}


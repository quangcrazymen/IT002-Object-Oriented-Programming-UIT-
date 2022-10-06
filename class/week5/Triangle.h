class Triangle
{
private:
    Point a,b,c;
public:
    Triangle();
    Triangle(Point &a,Point &b,Point &c);
    // Hiển thị tam giác:
    void display();
    ~Triangle();
};


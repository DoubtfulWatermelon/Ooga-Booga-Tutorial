#include <iostream>
#include <cmath>

class Point{
    private:
        int x, y;
    public:
        Point(int ex= 0, int wai= 0){
            x= ex;
            y= wai;
        }

        int getX(){ //since this is declared under private specifier.
            return x;
        }

        int getY(){
            return y;
        }
};

class Line{
    private:
        Point point1;
        Point point2;
    public:
        Line(Point oint1, Point oint2){
            point1= oint1;
            point2= oint2;
        }

        int length(){
            int ength;
            ength= sqrt((point2.getX()-point1.getX())*(point2.getX()-point1.getX())+(point2.getY()-point1.getY())*(point2.getY()-point1.getY()));

            return ength;
        }
};

int main(){
    Point p1(0, 0);
    Point p2(3, 4);

    Line line1(p1, p2);

    std::cout<< "Length of Line: "<< line1.length()<< std::endl;

    return 0;
}
#ifndef SHAPES_H_INCLUDED
#define SHAPES_H_INCLUDED
#define PI 3.1415926 //�w�qPI��

class Shape {//�]�pShape����
public:
	Shape(double a = 0, double b = 0) {
		width = a; height = b;
	}
	~Shape() {}

	void setWidth(double w) {
		width = w;
	}
	void setHeight(double h) {
		height = h;
	}
	virtual double area() = 0;

protected:
	double width;
	double height;//�ŧiwidth�Blength�T�w��Double�ܼƫ��A�C
};

class Rectangle : public Shape {//�]�pRectangle����
public:
	Rectangle(double a = 0, double b = 0) :Shape(a, b) { }

	double area() {
		return (width * height);
	}
};

class Triangle : public Shape {//�]�pTriangle����
public:
    Triangle(double w = 0,double h = 0) :Shape(w ,h) { }

    double area() {
        return (width*height/2);
    }
};

class Circle : public Shape {//�]�pCircle����
public:
    Circle(double w = 0,double h = 0) :Shape(w,h) { }

    double area() {
        return (width*width*PI);
    }
};

#endif // SHAPES_H_INCLUDED

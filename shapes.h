#ifndef SHAPES_H_INCLUDED
#define SHAPES_H_INCLUDED
#define PI 3.1415926 //定義PI值

class Shape {//設計Shape物件
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
	double height;//宣告width、length固定為Double變數型態。
};

class Rectangle : public Shape {//設計Rectangle物件
public:
	Rectangle(double a = 0, double b = 0) :Shape(a, b) { }

	double area() {
		return (width * height);
	}
};

class Triangle : public Shape {//設計Triangle物件
public:
    Triangle(double w = 0,double h = 0) :Shape(w ,h) { }

    double area() {
        return (width*height/2);
    }
};

class Circle : public Shape {//設計Circle物件
public:
    Circle(double w = 0,double h = 0) :Shape(w,h) { }

    double area() {
        return (width*width*PI);
    }
};

#endif // SHAPES_H_INCLUDED

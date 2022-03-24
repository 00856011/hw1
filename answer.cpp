#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string.h>
#include "shapes.h"//�N���|�������Y�ɾɤJ���{����
const char *usage = "Usage: a.out [type] [num1] [num2] \n"//�ŧi�t�Ϋ���(*)���ܦr��usage
		    "	type - circle, rectangle, triangle \n"
		    "	num1 - width or radius \n"
		    "	num2 - length \n";

int main(int argc, char *argv[])//�b�D�{���ޤJ��J���O�`�ƩM�r��}�C
{
	double num1 = 0, num2 = 0;

	if (argc < 3) {
	    cout << usage << endl;//�P�_�Y��J���O�榡���šA�L�X�t�δ���
	    return -1;
	} else {
		num1 = atof(argv[2]);//�N�r��μƦr��ܨçP�_
		if (argc == 4)
			num2 = atof(argv[3]);
	}

	Shape *shape; //���Ыŧi�ܼƬ��]�p���󪺵��G
	Rectangle rect;//�ŧi�ܼƬ��]�p���󪺵��G�C
	Circle circle;
	Triangle triangle;

    if (strcmp(argv[1], "rectangle") == 0)//�P�_�Ĥ@�Ӧr��}�C
		shape = &rect;
	else if (strcmp(argv[1], "triangle") == 0)
		shape = &triangle;
	else if (strcmp(argv[1], "circle") == 0)
		shape = &circle;
	else {
		cout << "Error! Unknown shape type" << endl;
		return -2;
	}

	shape->setWidth(num1); //��'->'�s���ܼ�shape�C
	shape->setHeight(num2);


	cout << shape->area() << endl;//�N�ܼ�shape�s���area()�ÿ�X�C

	return 0;
}

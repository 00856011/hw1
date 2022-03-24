#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string.h>
#include "shapes.h"//將路徑中的標頭檔導入此程式中
const char *usage = "Usage: a.out [type] [num1] [num2] \n"//宣告系統指標(*)提示字元usage
		    "	type - circle, rectangle, triangle \n"
		    "	num1 - width or radius \n"
		    "	num2 - length \n";

int main(int argc, char *argv[])//在主程式引入輸入指令總數和字串陣列
{
	double num1 = 0, num2 = 0;

	if (argc < 3) {
	    cout << usage << endl;//判斷若輸入指令格式不符，印出系統提示
	    return -1;
	} else {
		num1 = atof(argv[2]);//將字串用數字表示並判斷
		if (argc == 4)
			num2 = atof(argv[3]);
	}

	Shape *shape; //指標宣告變數為設計物件的結果
	Rectangle rect;//宣告變數為設計物件的結果。
	Circle circle;
	Triangle triangle;

    if (strcmp(argv[1], "rectangle") == 0)//判斷第一個字串陣列
		shape = &rect;
	else if (strcmp(argv[1], "triangle") == 0)
		shape = &triangle;
	else if (strcmp(argv[1], "circle") == 0)
		shape = &circle;
	else {
		cout << "Error! Unknown shape type" << endl;
		return -2;
	}

	shape->setWidth(num1); //用'->'存取變數shape。
	shape->setHeight(num2);


	cout << shape->area() << endl;//將變數shape存放於area()並輸出。

	return 0;
}

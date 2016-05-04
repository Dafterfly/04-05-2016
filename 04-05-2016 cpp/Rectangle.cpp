#include <iostream>
#include <ctime>
using namespace std;

class Rectangle
{
private:
	int length;
	int width;

public:
	Rectangle()
	{
		//to prove that a construcot is indeed called
		/*time_t t = time(0);
		cout << "Created at: " << t << " (Unix time)" <<endl;*/
	}

	void setLength(int l)
	{
		length = l;
	}
	
	void setWidth(int w)
	{
		width = w;
	}

	int getLength()
	{
		return length;
	}

	int getWidth()
	{
		return width;
	}

	int getArea()
	{
		return getLength()*getWidth(); // can also say return length*width but the one that is not commented is better programming practice
	}

	int getPerimeter()
	{
		return 2 * (getLength() + getWidth());
	}
};

int main()
{
	int l, w;

	Rectangle rectangle;

	cout << "Enter length: ";
	cin >> l;

	cout << "Enter width: ";
	cin >> w;

	rectangle.setLength(l);
	rectangle.setWidth(w);

	int area = rectangle.getArea();
	int perimeter = rectangle.getPerimeter();

	cout << "Area = " << area << endl;
	cout << "Perimeter = " << perimeter << endl;

	return 0;
}

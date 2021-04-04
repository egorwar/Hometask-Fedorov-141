#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

class Rectangle
{

	int width, height;
	string name;
public:
	static int num, sq;

    string to_string(int &i){
        stringstream ss;
        ss << i;
        return ss.str();
    }

	Rectangle(int width, int height)
	{
		this->name = "Rectangle #" + to_string(++num);
		SetWigthAndHeight(width, height);
	}

	Rectangle(string name, int width, int height)
	{
	    ++num;
		this->name = name;
		SetWigthAndHeight(width, height);
	}

	Rectangle(string name, int side)
	{
	    ++sq;
		this->name = name;
		SetWigthAndHeight(side, side);
	}

	Rectangle(int side)
	{
		this->name = "Square #" + to_string(++sq);
		SetWigthAndHeight(side, side);
	}


	Rectangle(const Rectangle& other)  // = delete
	{
		this->name = other.name;
		cout << "!!!!\n";
		SetWigthAndHeight(other.width, other.height);
	}

    // Rectangle() = default;

	bool SetWidth(int width)
	{
		if (width >= 0)
		{
			this->width = width;
			return true;
		}
		return false;
	}
	int GetWigth()
	{
		return width;
	}
	bool SetHeight(int height)
	{
		if (height >= 0)
		{
			this->height = height;
			return true;
		}
		return false;
	}
	int GetHeight()
	{
		return height;
	}

	string GetName(){
        return name;
	}

	void SetName(string name){
        this->name = name;
	}

	void SetWigthAndHeight(int width, int height)
	{
		SetHeight(height);
		SetWidth(width);
	}

	void PrintRect()
	{
		cout << width << ' ' << height << '\n';
	}

	int Perimeter(){
        return 2*(width+height);
	}

	string toString(){
	    string str = "\nName: " + name + "\nWidth: " + to_string(width) + "\nHeight: " + to_string(height) + "\n";
        return str;
	}

	int Square() const;


	const bool operator>(const Rectangle& other)
	{
		return Square() > other.Square();
	}

	const bool operator==(const Rectangle& other){
        return this->height == other.height && this->width == other.width;
	}

	const bool operator!=(const Rectangle& other){
        return this->height != other.height || this->width != other.width;
	}

	~Rectangle()
	{

		// cout << "r deleted";
	}

	friend Rectangle operator+(const Rectangle& first,
		const Rectangle& second)
	{
		return Rectangle("Summ of ["+first.name+" + "+second.name+"]", first.width + second.width,
			first.height + second.height);
	}

    friend Rectangle operator-(Rectangle& rect){
        rect.name += " - strange";
        rect.width = -rect.width;
        rect.height = -rect.height;
        return rect;
    }

    friend Rectangle& operator++(Rectangle& rect){
        rect.width++;
        rect.height++;
        return rect;
    }

    friend Rectangle operator++(Rectangle& rect, int){
        Rectangle tmp(rect);
        rect.width++;
        rect.height++;
        return tmp;
    }

};



int Rectangle::Square() const
{
	return width * height;
}

int Rectangle::num = 0;
int Rectangle::sq = 0;

int main()
{

	Rectangle r(5, 6);

	cout << r.toString();
	r.SetWigthAndHeight(1, 2);
	r.SetName("Not a triangle");
    cout << r.toString();

	Rectangle r2(1, 2);
	cout << r2.toString();

	Rectangle r3(7, 9);
	r3 = r;
	cout << r3.toString();

	cout << "\nNum is " << Rectangle::num << '\n';

	if (r2 > r3)
	{
		cout << "Yes\n";
	}

	Rectangle rr = r2 + r3;
	cout << rr.toString();

	cout << "\n[" << r2.GetName() << "] and [" << r3.GetName() << "] are " << ((r2==r3)?"":"not ") << "equal";
	cout << "\n[" << r3.GetName() << "] and [" << rr.GetName() << "] are " << ((r3!=rr)?"not ":"") << "equal";

	-r;
	cout << r.toString();
	cout << r2++.toString();
	cout << (++rr).toString();
	Rectangle square(5);
	cout << square.toString();

	return 0;
}

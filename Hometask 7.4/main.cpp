#include <iostream>
#include <cmath>

using namespace std;

struct Point2D{
    double x, y;
};

struct Point3D{
    double x, y, z;
};

int distance(int a, int b){
    return abs(b-a);
}
double distance(double a, double b){
    return abs(b-a);
}
int distance(int a, int b, int c){
    return max(abs(b-a), max(abs(b-c), abs(a-c)));
}

double distance(double a, double b, double c){
    return max(abs(b-a), max(abs(b-c), abs(a-c)));
}

double distance(Point2D dot){
    return sqrt(dot.x*dot.x + dot.y*dot.y);
}

double distance(Point3D dot){
    return sqrt(dot.x*dot.x + dot.y*dot.y + dot.z*dot.z);
}

int distance(int a, int b, int c, int d){
    return abs(max(max(a,b),max(c,d)) - min(min(a,b),min(c,d)));
}

double distance(double a, double b, double c, double d){
    return abs(max(max(a,b),max(c,d)) - min(min(a,b),min(c,d)));
}

int distance(int a, int b, int c, int d, int e, int f){
    return abs(max(max(a,b),max(max(c,d),max(e,f))) - min(min(a,b),min(min(c,d),min(e,f))));
}

double distance(double a, double b, double c, double d, double e, double f){
    return abs(max(max(a,b),max(max(c,d),max(e,f))) - min(min(a,b),min(min(c,d),min(e,f))));
}

double distance(Point2D dot, Point2D dot2){
    return sqrt(pow(dot2.x-dot.x, 2) + pow(dot2.y-dot.y, 2));
}

double distance(Point3D dot, Point3D dot2){
    return sqrt(pow(dot2.x-dot.x, 2) + pow(dot2.y-dot.y, 2) + pow(dot2.z-dot.z, 2));
}



int main()
{
    int x = 3, y = 5;
    cout << distance(3, 5) << endl;
    cout << distance(3.1, 5.2) << endl;
    cout << distance(0, 7, -2) << endl;
    cout << distance(-3.1, 3.1, 2.7) << endl;
    Point2D pt;
    pt.x = 2.4;
    pt.y = 3.6;
    cout << distance(pt) << endl;
    Point3D pt3d;
    pt3d.x = 4.6;
    pt3d.y = -3.9;
    pt3d.z = 0.7;
    cout << distance(pt3d) << endl;
    cout << distance(-5, 3, 0, -7) << endl;
    cout << distance(3.8, 17.9, -3.1, 0.16) << endl;
    cout << distance(5, 4, 5, -3, 6, 0) << endl;
    cout << distance(1.76, 32.5, -5.7, 0.8, 3.56, 13.9) << endl;
    Point2D pt2;
    pt2.x = 0.4;
    pt2.y = 8.3;
    cout << distance(pt, pt2) << endl;
    Point3D pt3d2;
    pt3d2.x = 3.7;
    pt3d2.y = -1.9;
    pt3d2.z = -2.5;
    cout << distance(pt3d, pt3d2) << endl;
    return 0;
}

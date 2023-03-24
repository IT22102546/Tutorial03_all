#include <iostream>
using namespace std;
int volume(int height, int width, int length);
struct structname {
int height;
int width;
int length;
}box1,box2;

int main() {

int Totvolume;
cout << "Enter Box 1 Height : ";
 cin >> box1.height;
 cout << "Enter Box 1 Width : ";
 cin >> box1.width;
 cout << "Enter Box 1 Length : ";
cin >> box1.length;

cout << "Enter Box 1 Height : ";
 cin >> box2.height;
 cout << "Enter Box 1 Width : ";
 cin >> box2.height;
 cout << "Enter Box 1 Length : ";
cin >> box2.length;

Totvolume=volume(box1.height,box1.width,box1.length)+volume(box2.height,box2.height,box2.length);

cout << "Volume of Box is " << Totvolume<< endl;
  

}

int volume(int height, int width, int length)
{
  int vol;
  vol=(height*width*length);
  return vol;
}

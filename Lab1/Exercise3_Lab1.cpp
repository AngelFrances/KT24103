#include <iostream>
using namespace std;
void ChangeIt_1(int n) {
 n = 5;
}
void ChangeIt_2(int *n) {
 *n = 6;
} 
void ChangeIt_3(int &n) {
 n = 7;
}
int ChangeIt_4(int n) {
 n = 8;
 return n;
}
main(){
 int *p; //declare p as pointer
 int x=10, y=7, SIZE=5, data[SIZE]={1,3,2,5,4};
 p=&x; //reference of x

 ChangeIt_1(x);
 cout << "ChangeIt_1 : " << *p << endl;

 ChangeIt_2(&x);
 cout << "ChangeIt_2 : " << *p << endl;

 ChangeIt_3(x);
 cout << "ChangeIt_3 : " << *p << endl;

 x = ChangeIt_4(x);
 cout << "ChangeIt_4 : " << *p << endl;
}

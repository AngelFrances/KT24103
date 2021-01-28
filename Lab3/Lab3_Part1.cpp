#include <iostream>
#include <stack>
using namespace std;
int main()
{
stack<char> stackObj;
stackObj.push('A');
stackObj.push('B');
stackObj.push('C');
stackObj.push('D');
cout << "There are " << stackObj.size () << " object in the stack." << endl;
cout << "The top item " << stackObj.top() << endl << endl;
cout << "Time to take out from the stack:" << endl;
while(!stackObj.empty()) {
cout << "Popping: ";
cout << stackObj.top() << endl;
stackObj.pop();
}
cout << endl;
cout << "There are " << stackObj.size () << " object in the stack." << endl;
return 0;
}

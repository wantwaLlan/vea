#include <iostream>
using namespace std;
main(){
    double a = 21.09399;
    float b = 10.20;
    int c;
    c=(int) a;
    cout << "line 1 - value of (int) a is :" << c<<endl;
    c=int (b);
    cout << "line 2 - value of (int)b is :" << c<<endl;
    return 0;
}
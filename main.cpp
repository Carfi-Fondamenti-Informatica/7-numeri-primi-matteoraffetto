#include <iostream>
#include "cmake-build-debug/lib.h"
using namespace std;
int main() {
   long n=0;
   cin >> n;
   if(primi(n)){
       cout <<"numero primo" << endl;
   }else{
       cout << "numero non primo" << endl;
   }
    return 0;
}

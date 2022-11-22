#include <iostream>
using namespace std;

int main() {
   int n, a=1,b=1,c;
       cin >> n;
       do{
           cout << a << endl;
           cout<< b << endl;
       }
       while(n<3);
           for (int i = 2; i < n; i++){
               c = a + b;
               a = b;
               b = c;
               cout << c << endl;
           }
   return 0;
}

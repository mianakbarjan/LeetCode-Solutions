#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

  bool isPalindrome(int x) {
        long int reverse = 0;
        int xAbsolute = abs(x);
        while (x!=0){
            reverse*=10;
            reverse+=x%10;
            x/=10;
        }
        if (reverse == xAbsolute) return true;
        else return false;
    }

int main(){
cout << isPalindrome(515)<<endl;
cout << isPalindrome(51)<<endl;
return 0;
}
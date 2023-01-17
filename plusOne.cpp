#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


vector<int> plusOne(vector<int>& digits) {
        vector <int> result;
        if (digits.size()==0){
            result.push_back(1);
            return result;
        }
        if (digits.size()==1){
            if (digits[0]==9){
                result.push_back(1);
                result.push_back(0);
                return result;
            }
            else{
                digits[0]+=1;
                return digits;
            }
        }

        digits[digits.size()-1]+=1;
        
        for (int i=digits.size()-1;i>=0;i--){
            if (digits[0]==10){
                digits.insert(digits.begin(),1);
                digits[1]=0;
            }
            if (digits[i]==10){
                digits[i-1]+=1;
                digits[i]=0;

            }
            
        }
        return digits;
    }


int main(){
    vector <int> digits;
    digits.push_back(1);
    digits.push_back(2);
    digits.push_back(3);
    digits=plusOne(digits);
}
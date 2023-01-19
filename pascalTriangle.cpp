#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

   vector<vector<int>> generate(int numRows) {
     vector <vector<int>> pascal(numRows);
    for (int row=0; row<numRows; row++){
        pascal[row].resize(row+1); //sets the size of the row to the row number
        pascal[row][0]=1; //sets first number of every row to 1
        pascal[row][row]=1; //sets last number of every row to 1
        for (int column=1; column<row; column++){
            pascal[row][column]=pascal[row-1][column-1]+pascal[row-1][column];
        }
    }
    return pascal;
    }
int main(){

}
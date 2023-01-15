#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void front(vector<int> &matrix, vector<int> &newMatrix);
void back(vector<int> &matrix, vector<int> &newMatrix);
void bottom (vector<vector<int> > &matrix, int colNo, vector<int> &newMatrix);
void top (vector<vector<int> > &matrix, int colNo, vector<int> &newMatrix);
vector<int> spiralOrder(vector <vector<int>>& matrix) {
        int rows = matrix.size()-1;
        int columns = matrix[0].size()-1;
        int row = 0;
        int col = 0;
        vector <int> l;
        if(matrix.size() == 0) return l;
        while (row<=rows && col<=columns){
            for (int i=col; i<=columns; i++){
                l.push_back(matrix[row][i]);
            }
            row++;
            for (int i=row; i<=rows; i++){
                l.push_back(matrix[i][columns]);
            }
            columns--;
            for (int i=columns; i>=col && row<=rows; i--){
                l.push_back(matrix[rows][i]);
            }
             rows--;
            for (int i=rows; i>=row && col<=columns; i--){
                l.push_back(matrix[i][col]);
            }
            col++;
        }
        return l;
    }
    

    int main(){
        vector <int> row1;
        vector<int> row2;
        vector<int> row3;
        vector<int>  row4;
        vector <vector<int>> m;
        row1.push_back(1);
        row1.push_back(2);
        row1.push_back(3);
        row1.push_back(4);
        row2.push_back(5);
        row2.push_back(6);
        row2.push_back(7);
        row2.push_back(8);
        row3.push_back(9);
        row3.push_back(10);
        row3.push_back(11);
        row3.push_back(12);
        m.push_back(row1);m.push_back(row2);m.push_back(row3);
        
     
    }
#include <iostream>
#include <cassert>

// define calcSum
int calcSum(int m, int n)
{
  int sum = 0;
  //create blank m by n matrix accending
  int accending[m][n];
  accending[0][0] = 0;

  // fill in by each value by column_num + n*row_num
  for(int row_num = 0; row_num< m; row_num++)
  {
    for(int column_num = 1; column_num< n+1; column_num++)
    { 
 
      accending[row_num][column_num-1] = column_num + row_num * n;
    }
  }
  //create a blank n by m matrix decending
  int decending[n][m];
  //fill each row by n*m - m*row_num - column_num

  for(int row_num = 0; row_num< n; row_num++)
  {
    for(int column_num = 0; column_num< m; column_num++)
    {
  
      decending[row_num][column_num] = n*m - m*row_num - column_num;
    }
  }

 
  //multiply the rows of accending to the column of decending
  for(int row_num = 0; row_num< m; row_num++)
  {
    for(int column_num = 0; column_num< n; column_num++)
    {
      for(int decending_column_num = 0; decending_column_num< m; decending_column_num++)
      {
        
        sum += accending[row_num][column_num] * decending[column_num][decending_column_num];
        std::cout<<"sum "<< sum<< "\n";
      }
    }
  }
  return sum;

}

int main() {
    // write column_num assert for the test case m=2, n=3
    int m = 2;
    int n = 3;
    int sum = calcSum(m,n);
    std::cout<<sum;
}
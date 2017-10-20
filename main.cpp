//Saif Alketbi
//CSCI 111
//x19

#include <vector>
#include <iostream>

using namespace std;

int main()
{
  vector<vector<char> > stars;
  int row;
  int col;

  cout << "Enter rows and columns of stars:" << endl;

  cin >> row;
  stars.resize(row);

  cin >> col;

  if (row > 0 && col > 0)
  {

    for (int i=0;i<row;i++)
    {
      stars[i].resize(col);

      for (int j=0;j<col;j++)
      {
        stars[i][j]='*';
      }
    }

    // print the matrix
    for (int i=0;i<row;i++)
    {
      for (int j=0;j<col;j++)
      {
        cout << stars[i][j];
      }

      cout << "\n";
    }
  }

  return 0;
}

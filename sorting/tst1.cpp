//diagnal rotation

#include<iostream>
using namespace std;
void rotateMatrix(int matrix[],int k)
{

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if((i+j)%2!=0)
            {
                 int temp1=0;
                temp1=matrix[i][j];
                matrix[j][i]=temp1;

            }
        }
    }
}
void displayMatrix(int mat[3][3])
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout<<mat[i][j];

        cout<<endl;
    }
    cout<<endl;
}

int main()
 {
  int matrix[3][3] = {{12, 23, 34},
                     {45, 56, 67},
                     {78, 89, 91}};
  int k = 2;

  // rotate matrix by k
  rotateMatrix(matrix, k);

  // display rotated matrix
  displayMatrix(matrix);

  return 0;
}

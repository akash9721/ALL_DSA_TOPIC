#include<bits/stdc++.h>
using namespace std;
const int R=4,C=4;

void boundryprint(int mat[R][C])
{
   for(int i=0;i<C;i++)
   {
       for(int j=i+1;j<R;j++)
       {
           swap(mat[i][j],mat[j][i]);
       }
   }
}
int main()
{
    int mat[R][C]={1,2,3,4,
                   5,6,7,8,
                   9,10,11,12,
                   13,14,15,16};
    boundryprint(mat);
    for(int i = 0; i <R; i++)
	{
		for(int j = 0; j <C; j++)
		{
			cout << mat[i][j] << " ";
		}

		cout << endl;
	}

}



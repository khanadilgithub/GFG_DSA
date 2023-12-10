#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

//if both row and colums known then pass as mat[r][C]
//if only colums known then pass as mat[][C]
//if both unknown use double ponter or vetor of vectors

void printCstyle(int **matrx, int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<matrx[i][j]<<" ";
        }
    }
    cout<<endl;
}

void printCppStyle(vector<vector<int>> &vMatrx)
{
    for(int i=0; i<vMatrx.size(); i++)
    {
        for(int j=0; j<vMatrx[0].size(); j++)
        {
            cout<<vMatrx[i][j]<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int **matrx;
    int m=3, n=3;
    matrx = new int* [m];
    for(int i=0; i<m; i++)
    {
        matrx[i] = new int[n];
        for(int j=0; j<n; j++)
        {
            matrx[i][j] = i+j;
        }
    }

    vector<vector<int>> vMatrx;

    for(int i=0; i<m; i++)
    {
        vector<int> v;
        for(int j=0; j<n; j++)
        {
            v.push_back(i+j);
        }
        vMatrx.push_back(v);
    }

    printCppStyle(vMatrx);

    printCstyle(matrx, m,n);
}
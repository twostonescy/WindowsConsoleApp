#include "head.h"


void print(vector<vector<int>>& mat)
{
    for (size_t i = 0; i < mat.size(); i++)
    {
        for (size_t j = 0; j < mat[0].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}


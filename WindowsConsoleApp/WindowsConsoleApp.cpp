#include "common/head.h"
#include "copy/rr.h"
#include "algorithm/btree.h"
#include<winsock2.h>
#include<stdio.h>
#include<string.h>
#include <WS2tcpip.h>
#include<iostream>
# define BUFFER_SIZE  2004    //缓冲区大小

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    
};

  struct TreeNode {
      vector<int> val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(vector<int> x) : val(x), left(NULL), right(NULL) {}
  };

  class MaxQueue {
  public:
      MaxQueue( ) {
         
      }

  };

 //[2,3,1,1,4]volatile
 
  void rotate(vector<vector<int>>& matrix) {
      vector<vector<int>> temp(matrix);

      int n = matrix.size();
      for (int i = 0; i < n; i++)
      {
          for (int j = 0; j < n; j++)
          {
              matrix[j][n - i - 1] = temp[i][j];
          }
      }
      return;
  }

int main()
{
    pp("Hello World!");

    vector<int> ma = { 2,1};
    vector<int> m = { 3,3,3,3,3,1,3};

    vector<vector<int>> mat = { };
    vector<vector<int>> matt = { {1,2},
                                 {3,4} 
                               };
    vector<string> matts = { "doeeqiy","yabhbqe","twckqte"
    };
    pp(int('a'));
    /*auto kk = */rotate(matt);
    int y = 4;
    MaxQueue D = MaxQueue();  // \u521d\u59cb\u5316\uff0c\u6808\u6700\u5927\u5bb9\u91cf capacity = 2
    
        
    system("pause");
}


#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include<numeric>
#include <thread>
#include <chrono>
#include <fcntl.h>
#include <sys/stat.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <deque>
#include <set>
#include<unordered_map>
#include<unordered_set>

#include "memory"
#include <errno.h> // errno 变量的头文件

#ifdef WIN32
#include <windows.h>
#else
#endif // WIN32

using namespace std;

#define pp(out) cout <<"line:"<<__LINE__<<"---" << out << "------##" << endl;

void print(vector<vector<int>>& mat);




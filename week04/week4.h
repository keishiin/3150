#ifndef __WEEK04_
#define __WEEK04_

#include <iostream>
#include <stack> // std::stack
#include <queue> // std::queue


void pushStack(std::stack<int>& s, std::string& fs);
int popStack(std::stack<int>& s);

void pushQ(std::queue<int>& q, std::string& fs);
int popQ(std::queue<int>& q);

#endif
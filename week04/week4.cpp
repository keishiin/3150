#include "week4.h"
#include <fstream>

void pushStack(std::stack<int>& s, std::string& fs) {

    // open the file
    std::ifstream myfile(fs, std::ios_base::in); 

    int sum = 0; // sum to check wheter sum is neg or not 
    // check if file is open 
    if (myfile.is_open()) {
        int temp = 0; 

        // read through the file and push to the stack
        while(myfile >> temp) {
            int x = int(temp);
            s.push(x); // push to the stack 
            sum += x;
        }
    }

    if (sum < 0) {
        throw("negative sum");
    }

    myfile.close(); // always close the file
}

int popStack(std::stack<int>& s){

    // check is stack is empty or not 
    if (!s.empty()) {
        int temp = s.top();
        s.pop();
        return temp;
    }

    return 0; // will return 0 if nothing happens idk what else to return here
}

void pushQ(std::queue<int>& q, std::string& fs){
        // open the file
    std::ifstream myfile(fs, std::ios_base::in); 

    // check if file is open 
    if (myfile.is_open()) {
        int temp = 0; 

        // read through the file and push to the stack
        while(myfile >> temp) {
            int x = int(temp);
            q.push(x); // push to the stack 
        }
    }
    myfile.close(); // always close the file
}

int popQ(std::queue<int>& q){
        // check is stack is empty or not 
    if (!q.empty()) {
        int temp = q.front();
        q.pop();
        return temp;
    }

    return 0; // will return 0 if nothing happens idk what else to return here
}
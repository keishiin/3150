#ifndef __WEEK9_
#define __WEEK9_

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

 struct Node {
    int data;
    unique_ptr<Node> next;
};

struct List {

    unique_ptr<Node> head;

    List() : head(nullptr) {};

    void push(int data) {

        auto temp = std::make_unique<Node>();
        temp->data = data;
        
        if (head) {

            temp->next = std::move(head);
            head = std::move(temp);
        }
        else {
            head = std::move(temp);
        }
    };
    
    void clean() {
        while(head) {
            head = std::move(head->next);
            }
    };
    
    ~List() {
        clean();
    };

    friend std::ostream& operator<<(std::ostream &os, const List &list);
    
};

#endif
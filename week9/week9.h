#ifndef __WEEK9_
#define __WEEK9_

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

struct List {

    struct Node {
        int data;
        unique_ptr<Node> next;
    };

    unique_ptr<Node> head;

    List() : head(nullptr) {};

    void push(int data) {

        auto temp{std::make_unique<Node>(data)};

        if (head) {

            temp->next = std::move(head);
            head = std::move(temp);
        }
        else {
            head = std::move(temp);
        }
    };

    void pop() {

        if(head == nullptr) {
            return;
        }
        
        std::unique_ptr<Node> temp = std::move(head);
        head = std::move(temp->next);
    };
    
    void clean() {
        while(head) {
            head = std::move(head->next);
            }
    };
    
    ~List() {
        clean();
    };

    // friend std::ostream& operator<<(std::ostream &os, const List &list);
    
};



#endif
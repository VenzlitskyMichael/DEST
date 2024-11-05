#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class List {
private:
    Node* head;
public:
    List() : head(nullptr) {}
    void push_front(int value) {
        Node* nyNode = new Node(value);
        nyNode->next = head;
        head = nyNode;

    }
    ~List() {
        Node* curr = head;
        while (curr != nullptr) {
            Node* nexNode = curr->next; 
            delete curr;
            curr = nexNode; 
        }
    }
};

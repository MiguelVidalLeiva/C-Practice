#include <iostream>

struct Node {
    int num;
    Node* link;
};

int main() {
    Node* A = NULL;
    Node* temp = new Node();
    temp->num = 1;
    temp->link = NULL;
    A = temp;

    //Creating a second node
    temp = new Node();
    temp->num = 4;
    temp->link = NULL;

    //Example of traversing a node
    Node* temp1 = A;
    while(temp1->link !=NULL)
    {
	    std::cout << temp1->num;
	    temp1 = temp1->link;
    }

    return 0;
}

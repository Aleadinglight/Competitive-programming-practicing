#include <iostream>

using namespace std;

struct Node()
{
    int data;
    struct Node *next;
}

Node* Reverse(Node *head)
{
    Node *last, *temp = head, *save;
    if (head == NULL)
        return head;

    while (temp->next != NULL){
        last = temp;
        temp = temp->next;
        if (temp->next != NULL){
            save = temp->next;
            temp->next = last;
        }
        temp = save;

    }
    head->next = NULL;

    return temp;
}

int main()
{
    Reverse();
    return 0;
}

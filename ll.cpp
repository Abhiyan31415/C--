#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
Node *arrtoll(vector<int> &a)
{
    Node *head = new Node(a[0]);
    Node *mover = head;
    for (int i = 1; i < a.size(); i++)
    {
        Node *temp = new Node(a[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void printll(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
Node *removehead(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
void removetail(Node *head)
{
    if (!head || !head->next)
        return;
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *te = temp->next;
    temp->next = nullptr;
    delete te;
}
Node *removele(Node *head, int pos)
{
    int cnt = 1;
    Node *temp = head;
    Node *tempb = head;
    if (pos == 1)
    {
        head = removehead(head);
        return head;
    }
    while (cnt <= pos)
    {
        if (cnt == pos /*for value value=temp->data*/)
        {
            tempb->next = temp->next;
            delete temp;
            break;
        }
        else
        {
            tempb = temp;
            temp = temp->next;
            cnt++;
        }
    }
    return head;
}
Node *inserthead(Node *head, int arr)
{
    Node *newhead = new Node(arr, head);
    return newhead;
}
void inserttail(Node *head, int value)
{
    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    Node *newend = new Node(value);
    temp->next = newend;
}
Node *insertele(Node *head, int place, int value)
{
    Node *temp = head;
    Node *prev = head;
    int cnt = 1;
    if (place == 1)
    {
        Node *tem = inserthead(head, value);
        return tem;
    }
    while (temp)
    {
        if (cnt == place)
        {
            Node *insertion = new Node(value, temp);
            prev->next = insertion;
        }
        prev = temp;
        temp = temp->next;
        cnt++;
    }
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    Node *head = arrtoll(arr);
    printll(head);
    cout << "___________________________________________" << endl;

    head = removehead(head);
    printll(head);
    cout << "___________________________________________" << endl;

    removetail(head);
    printll(head);
    cout << "___________________________________________" << endl;
    head = removele(head, 2);
    printll(head);
    cout << "___________________________________________" << endl;
    head = inserthead(head, 9);
    printll(head);
    cout << "___________________________________________" << endl;

    inserttail(head, 3);
    printll(head);
    cout << "___________________________________________" << endl;
    head = insertele(head, 5, 67);
    printll(head);
}
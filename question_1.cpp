#include <iostream>

template <typename T> class Node {
public:
  T data;
  Node<T> *next;
  Node(T d) : data(d) { next = nullptr; }
};

template <typename T> class LinkedList {
private:
  Node<T> *head;
  Node<T> *tail;

public:
  LinkedList() : head(nullptr), tail(nullptr) {}

  void addAtStart(T value) {

    Node<T> *nodeptr = new Node<T>(0);
    nodeptr->data = value;

    nodeptr->next = head;
    head = nodeptr;

    if (tail == nullptr) {
      tail = head;
    }

    std::cout << "Added " << nodeptr->data << " node at the start" << std::endl;
  }

  void addAtEnd(T value) {
    Node<T> *nodeptr = new Node<T>(0);
    nodeptr->data = value;

    if (tail == nullptr) {
      head = nodeptr;
      tail = nodeptr;
    } else {
      tail->next = nodeptr;
      tail = nodeptr;
    }

    std::cout << "Added " << nodeptr->data << " node at the end" << std::endl;
  }

  void addAfter(T testValue, T value) {
    if (head == nullptr) {
      throw std::runtime_error("The list is empty!");
    }

    Node<T> *current = head;

    while (current->data != testValue) {
      current = current->next;

      if (current == nullptr) {
        throw std::runtime_error("Couldn't find the target node!");
      }
    }

    Node<T> *nodeptr = new Node<T>(0);
    nodeptr->data = value;

    nodeptr->next = current->next;
    current->next = nodeptr;

    std::cout << "Added " << value << " node after " << testValue << " node"
              << std::endl;
  }

  void addBefore(T testValue, T value) {
    if (head == nullptr) {
      throw std::runtime_error("The list is empty!");
    }

    Node<T> *nodeptr = new Node<T>(0);
    nodeptr->data = value;

    if (head->data == testValue) {
      nodeptr->next = head;
      head = nodeptr;
    } else {
      Node<T> *nextNode = head;
      Node<T> *currentNode;

      do {
        currentNode = nextNode;
        nextNode = currentNode->next;

        if (nextNode == nullptr) {
          throw std::runtime_error("Couldn't find the target node!");
        }

      } while (nextNode->data != testValue);

      nodeptr->next = nextNode;
      currentNode->next = nodeptr;

      std::cout << "Added " << value << " node before " << testValue << " node"
                << std::endl;
    }
  }

  void removeStart() {
    if (head == nullptr) {
      throw std::runtime_error("The list is empty!");
    }

    if (head == tail) {
      tail = nullptr;
    }

    std::cout << "Removed Node: " << head->data << std::endl;
    Node<T> *temp = head;
    head = head->next;
    delete temp;
  }

  void removeEnd() {
    Node<T> *currentNode = head;

    if (currentNode == nullptr) {
      throw std::runtime_error("The list is empty!");
    }

    if (head == tail) {
      std::cout << "Removed Node: " << head->data << std::endl;
      delete head;
      head = nullptr;
      tail = nullptr;
    } else {
      while (currentNode->next != tail) {
        currentNode = currentNode->next;
      }

      tail = currentNode;

      std::cout << "Removed Node: " << currentNode->next->data << std::endl;

      delete (currentNode->next);

      currentNode->next = nullptr;
    }
  }

  void removeAfter(T testValue) {
    Node<T> *currentNode = head;

    while (currentNode->data != testValue) {
      currentNode = currentNode->next;

      if (currentNode == nullptr) {
        throw std::runtime_error("Couldn't find the target node!");
      }
    }

    if (currentNode->next == nullptr) {
      throw std::runtime_error(
          "There is no node to delete after the given node.");
    }

    Node<T> *toBeDeleted = currentNode->next;
    currentNode->next = toBeDeleted->next;
    if (toBeDeleted == tail) {
      tail = currentNode;
    }
    delete toBeDeleted;
  }

  // Optional
  void traversal() {
    Node<T> *currentNode = head;

    if (head != nullptr) {
      std::cout << "Head Node: " << head->data << ", Tail Node: " << tail->data
                << std::endl;
    }

    while (currentNode != nullptr) {
      std::cout << "Node: " << currentNode->data << std::endl;
      currentNode = currentNode->next;
    }
  }
};

int main() {

  LinkedList<int> list;

  list.addAtEnd(6);
  list.addAtStart(5);
  list.addAtEnd(7);
  list.addAfter(5, 10);
  list.addBefore(10, 9);
  list.removeEnd();
  list.addAtEnd(12);

  return 0;
}
#include <iostream>
#include <stack>

struct Node {
    int val;
    Node* next;
    Node* prev;
    Node* child;

    Node(int _val) : val(_val), next(nullptr), prev(nullptr), child(nullptr) {}
};

Node* flatten(Node* head) {
    if (!head) return nullptr;

    Node* curr = head;
    std::stack<Node*> stack;

    while (curr) {
        if (curr->child) {
           
            if (curr->next) {
                stack.push(curr->next);
                curr->next->prev = nullptr;  
            }

          
            curr->next = curr->child;
            curr->child->prev = curr;
            curr->child = nullptr;
        }

        
        if (!curr->next && !stack.empty()) {
        
            curr->next = stack.top();
            stack.top()->prev = curr;
            stack.pop();
        }
        
        curr = curr->next;
    }

    return head;
}


void printList(Node* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
  
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;
    
    head->next->child = new Node(7);
    head->next->child->next = new Node(8);
    head->next->child->next->prev = head->next->child;
    head->next->child->next->child = new Node(11);
    head->next->child->next->child->next = new Node(12);
    
    head->next->next->next = new Node(4);
    head->next->next->next->prev = head->next->next;
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->prev = head->next->next->next;
    
    std::cout << "Original multilevel list:\n";
    printList(head); 
    
    Node* flattenedHead = flatten(head);
    std::cout << "\nFlattened list:\n";
    printList(flattenedHead);

    
    return 0;
}

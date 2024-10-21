struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        if(head == NULL || head->next == NULL) return false ;
        
        Node* slow = head ;
        Node* fast = head ;
        
        while(fast && fast->next){
            slow = slow->next ;
            fast = fast->next->next ;
            if(slow == fast) return numberofNodes(slow ,fast) ;
        }
        return 0 ;
    }
    int numberofNodes(Node* slow , Node* fast){
        int counter = 1 ;
        fast = fast->next ;
        while(slow!=fast){
            fast = fast->next ;
            counter++ ;
        }
        return counter ;
    }
};


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node 
struct Node {
    int data;
    struct Node* next;
}; */
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
#include<stack>
#define node Node
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    stack<node*> st1,st2;
    node * cur1=head1,*cur2=head2;
    while(cur1!=NULL){
        st1.push(cur1);
        cur1=cur1->next;
    }
    while(cur2!=NULL){
        st2.push(cur2);
        cur2=cur2->next;
    }
    int ans=-1;
    while((st1.top())->data==(st2.top())->data){
        ans=(st1.top())->data;
        st1.pop();
        st2.pop();
    }
    return ans;
    
    
}

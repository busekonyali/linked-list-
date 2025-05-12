#include <iostream>

using namespace std;
struct node{
 int  value;
 node *prev;
node *next;
};

node *insertd(node * head,int value){
node* p=new node;
p->value=value;
p->next=head;
p->prev=NULL;
if(head !=NULL){
    head->prev=p;

}
return p;


}
int main()
{
    node *head=NULL;
    head =insertd(head,5);
    head =insertd(head,10);
    head =insertd(head,15);

     node* current = head;
    while (current != NULL) {
        cout << current->value << " ";
        current = current->next;
    }


    return 0;
}


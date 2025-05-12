#include <iostream>

using namespace std;
struct node{
int value;
node* next;
};
node *insert(node *head,int value){
node *p =new node;
p->value=value;
p->next=head;
return p;
}

void print(node *head){
while(head!=NULL){
    cout<<head->value;
    head=head->next;
}
}
node *deletenode(node* head){

if(head==NULL){
    return NULL;
}
node*p=head;
head=head->next;
delete p;
return head;
}
int main()
{
node * head=NULL;
head=insert(head,5);
head=insert(head,2);
head=insert(head,9);

cout<<"liste: ";
print(head);
head=deletenode(head);
cout<<endl;
cout<<"silme sonrasi";
print(head);
    return 0;
}



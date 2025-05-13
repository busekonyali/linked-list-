#include <iostream>

using namespace std;
struct node{
int data;
node* next;
};
void write(node* head);
void add_end(node*& node,int veri);
int main()
{
node* head=NULL;
node* s1=new node{5,NULL};
node* s2=new node{8,NULL};
node* s3=new node{10,NULL};

head=s1;

s1->next=s2;
s2->next=s3;
s3->next=NULL;
write(head);
int m;
cout<<"enter new num: "<<endl;
cin>>m;
add_end(head,m);
write(head);
delete s1;
delete s2;
delete s3;

    return 0;
}
void write(node* head){
node* p=head;
while(p != NULL){
    cout<<p->data<<" ";
    p=p->next;
}

cout<<endl;

}

void add_end(node*& head, int veri) {
    node* yeni = new node;
    yeni->data = veri;
    yeni->next = NULL;

    if (head == NULL) {
        head = yeni;
        return;
    }

    node* p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = yeni;
}

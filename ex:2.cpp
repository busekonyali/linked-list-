#include <iostream>

using namespace std;
struct node{
int data;
node* next;
};
void write(node* head);
void add_begin(node*& head,int num);
void add_end(node*& head,int num);
int find_max(node*& head);
void only_odd(node*& head);
int main()
{

    node* head=NULL;
 add_end(head, 4);
    add_end(head,5);

    write(head);
     cout<<endl;
    add_begin(head,6);
     add_begin(head,1);
      add_begin(head,9);
       add_begin(head,2);

    write(head);
    cout<<endl;
    cout<<"max: "<<find_max(head)<<endl;
    cout<<"tek sayilar: ";
    only_odd(head);
    write(head);


    return 0;
}
void only_odd(node*& head){

    while(head!=NULL && head->data%2==0){
            node* temp=head;
            head=head->next;
            delete temp;
    }
      node* current=head;
      while(current!=NULL && current->next!=NULL){
            if(current->next->data%2==0){
                node* temp=current->next;
                current->next=current->next->next;
                delete temp;
            }else{
                current=current->next;

            }
    }



}
int find_max(node*& head){
    node* m=head;
    int maxx=m->data;
    while(m!=NULL){
            if(m->data>maxx){
                maxx=m->data;
            }
        m=m->next;

    }
return maxx;

}





void write(node* head){
    node* p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }


}
void add_begin(node*& head,int num){
    node *yeni=new node;
    yeni->data=num;
    yeni->next=head;
    head=yeni;



}
void add_end(node*& head,int num){
    node* yeni2=new node;

    yeni2->data=num;
    yeni2->next=NULL;

    if(head==NULL){
        head=yeni2;
    }else{
        node *p=head;
        while(p->next!=NULL){

            p=p->next;
        }
   p->next=yeni2;

    }



}

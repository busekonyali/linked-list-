#include <iostream>

using namespace std;
struct node{
int data;
node* next;
};
void write(node* head);
void add_begin(node*& head,int num);
void add_end(node*& head,int num);
int maxx(node* head);
void ort(node*& head,int num);
int main()
{
 node* head=NULL;
 add_begin(head,6);
 add_begin(head,5);
 write(head);
 cout<<endl;
 add_end(head,7);
 add_begin(head,4);
 add_end(head,8);
  add_end(head,9);

 write(head);
 cout<<endl;
 cout<<"ort eklendi: "<<endl;
 ort(head,0);
write(head);
 cout<<endl;
 cout<<"max: "<<maxx(head);



    return 0;
}
void ort(node*& head,int num){
 node* yeni3=new node;
 yeni3->data=num;
 yeni3->next=NULL;
 if(head==NULL){
 head=yeni3;
 }
int length=0;
node* temp=head;
while(temp!=NULL){
    length++;
    temp=temp->next;
}
int mid=length/2;
temp=head;
for(int i=0;i<mid-1;i++){

    temp=temp->next;
}
yeni3->next=temp->next;
temp->next=yeni3;


}
int maxx(node* head){
    node* p=head;
    int m=p->data;
    while(p!=NULL){
        if(p->data>m){
            m=p->data;
        }
        p=p->next;
    }

return m;


}
void write(node* head){
    node* p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }

}
void add_begin(node*& head,int num){
    node* yeni=new node;
    yeni->data=num;
    yeni->next=head;
    head=yeni;


}
void add_end(node*& head,int num){
     node* yeni2=new node;
     yeni2->data=num;
     yeni2->next=NULL;
     node* p=head;
     if(p==NULL){
        p=yeni2;
     }else{

     while(p->next!=NULL){

        p=p->next;
     }
p->next=yeni2;

}
}

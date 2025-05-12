#include <iostream>

using namespace std;
struct node{
int data;
node* next;
};
int main()
{
    node* head=NULL;
    node s1={5};
    node s2={8};
    node s3={10};
    head=&s1;
     s1.next=&s2;
     s2.next=&s3;
     s3.next=NULL;

//yazdırma
node *p=head;
while(p != NULL){
    cout<<p->data<<" ";
    p=p->next;
}



    return 0;
}

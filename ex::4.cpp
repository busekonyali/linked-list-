#include <iostream>

using namespace std;
struct node{
int data;
node* next;
};
void write(node* head);
void add_begin(node*& head,int num);
void add_end(node*& head,int num);
void insertt(node*& head, int position, int value);

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
 pop_back(head);
pop_front(head);
erase(head,2);
write(head);
 cout<<endl;

 insertt(head,4,0);
 write(head);



    return 0;
}
void pop_back(node*&head)
{
    node* previousPtr = NULL;
    node* currentPtr = head;


        while (currentPtr->next != NULL) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->next;
        }

        previousPtr->next = NULL;
        delete currentPtr;
        cout << "pop back is done\n";
    }

void pop_front(node*&head)
{
    node* currentPtr;


        currentPtr = head->next;
        delete head;
        head = currentPtr;

        cout << "pop front is done\n";

}
void erase(node*& head,int position)
{
    int count = 1;
    node* previousPtr = NULL;
    node* currentPtr = head;

    while (count < position) {
        previousPtr = currentPtr;
        currentPtr = currentPtr->next;
        count++;
    }

    previousPtr->next = currentPtr->next;
    delete currentPtr;
    cout << "erase the item that placed at position " << position << "\n";
}

void insertt(node*& head, int position, int value) {
    int count = 1;
    node* previousPtr = nullptr;
    node* currentPtr = head;

    while (count < position && currentPtr != nullptr) {
        previousPtr = currentPtr;
        currentPtr = currentPtr->next;
        count++;
    }

    node* newNode = new node;
    newNode->data = value;
    newNode->next = currentPtr;

    if (previousPtr != nullptr) {
        previousPtr->next = newNode;
    } else {
        // Başta ekleme yapılıyorsa head güncellenir
        head = newNode;
    }

    cout << "insert " << value << " to position " << position << endl;


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

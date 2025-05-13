#include <iostream>

using namespace std;

struct node {
    int data;
    node* next;
};

void write(node* head);
void add_begin(node*& head, int veri);
void add_end(node*& head, int veri);

int main() {
    node* head = NULL;  // Başlangıçta liste boş
    int num;

    // 4 kez kullanıcıdan veri alıp sonuna ekliyoruz
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". num : ";
        cin >> num;
        add_end(head, num);  // Veriyi sona ekle
    }

    // Listeyi yazdır
    write(head);
add_begin(head,10);
write(head);
    return 0;
}

// Listeye sonuna ekleme fonksiyonu
void add_end(node*& head, int veri) {
    node* yeni = new node;
    yeni->data = veri;
    yeni->next = NULL;

    if (head == NULL) {
        // Eğer liste boşsa, yeni düğüm başa eklenir
        head = yeni;
    } else {
        // Liste boş değilse, son düğüme kadar gidilir ve yeni düğüm eklenir
        node* p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = yeni;
    }
}

// Listeyi ekrana yazdıran fonksiyon
void write(node* head) {
    node* p = head;  // Başlangıç noktasına atama yapılır
    while (p != NULL) {
        cout << p->data << " ";  // Veriyi yazdır
        p = p->next;  // Sonraki düğüme geç
    }
    cout << endl;
}
void add_begin(node*& head, int veri){

node* yeni2=new node;
yeni2->data=veri;
yeni2->next=head;
head=yeni2;


}


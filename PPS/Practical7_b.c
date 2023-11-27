#include<stdio.h>
#include<string.h>
void sort();
void info_take();
struct books{
    int id;
    char title[50];
    char publisher[50];
    int price;
};

void info_take(){
    struct books book;
    printf("Book ID: ");
    scanf("%d",&book.id);
    printf("Book Title: ");
    scanf("%s",&book.title);
    printf("Publisher : ");
    scanf("%s",&book.publisher);
    printf("Price: ");
    scanf("%d",&book.price);
    printf("Size of structure of Book ID %d: %d\n\tTitle: %s\n\tPublisher: %s\n\tPrice: %d\n",book.id, sizeof(book), book.title,book.publisher,book.price);
}


int main(){
    info_take();
    return 0;
}
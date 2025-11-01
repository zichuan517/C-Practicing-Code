#include <stdio.h>
typedef struct Book{
    char title[50];
    char author[20];
    double price;
    int quantity; 
}Book;

double CTV(Book *books, int size){
    double value = 0;
    for (int i=0; i<size; i++){
        value += books[i].price * books[i].quantity;
    }
    return value;
}
int main() {
    Book bookstore[] = {
        {"C Programming", "K&R", 45.50, 10},
        {"Data Structures", "Weiss", 68.00, 5},
        {"Algorithms", "Cormen", 85.00, 3}
    };
    
    int book_count = sizeof(bookstore) / sizeof(bookstore[0]);
    double total = CTV(bookstore, book_count);
    
    printf("书店库存总价值: ¥%.2f\n", total);
    
    return 0;
}
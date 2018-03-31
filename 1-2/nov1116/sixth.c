#include <stdio.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *first = NULL;
void push(int number);
int pop();

int main() {
int choice = 0, number;

printf("Enter your choice: \n"
    "1) Push integer\n"
    "2) Pop integer\n"
    "3) Exit\n");
scanf("%d", &choice);

while (choice != 3) {
    if (choice == 1) {
        printf("Enter Integer: ");
        scanf("%d", &number);
        printf("\n");
        push(number);
    }
    if (choice == 2) {
        number = pop();
        if (number == -1) {
            printf("Error: Stack empty.\n\n");
        }
        else {
            printf("Integer %d is popped.\n\n", number);
        }
    }

    printf("Enter your choice: \n"
        "1) Push integer\n"
        "2) Pop integer\n"
        "3) Exit\n");
    scanf("%d", &choice);
}
}


void push(int number)
{
 struct node *cur;
 cur = first;

 if (cur == NULL) {
     cur = (struct node *) malloc(sizeof(struct node));
     cur->data = number;
     cur->next = NULL;
     cur->prev = cur;
     first = cur;
     return;
 }

 if (cur != NULL) {
     while (cur->next != NULL) {
         cur = cur->next;
     }
     (cur->next) = (struct node *) malloc(sizeof(struct node));
     (cur->next)->data = number;
     (cur->next)->next = NULL;
     (cur->next)->prev = cur;
 }
}

int pop() {
int number;

if (first == NULL) {
    return -1;
}
else {
    struct node *cur, *prev;
    cur = first;
    prev = NULL;

    while (cur->next != NULL) {
        prev = cur;
        cur = cur->next;
    }

    number = cur->data;

    if (prev == NULL) {
        first = NULL;
    }
    else {
        prev->next = cur->next;
    }

    return number;
}
}

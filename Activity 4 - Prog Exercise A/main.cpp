#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void insert(int data);
void display();

struct node *head;

int main() {

    int n;
    while (1) {
        scanf("%d", &n);
        insert(n);
        if (n == 999) {
            display();
            break;
        }
    }

    return 0;
}

void insert(int data) {

    struct node *newNode = NULL;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->value = data;
    newNode->next = NULL;
    if (data < 10 || head == NULL) {
        newNode->next = head;
        head = newNode;
    } else if (data == 999) {
        struct node *second = head->next;
        struct node *third = head->next->next;
        second->next = newNode;
        newNode->next = third;
    } else {
        struct node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->next = NULL;
    }
}

void display() {
    struct node *temp = head;
    printf("Linked List contains ");
    while (temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
}

/* 
 * Activity 4 - Programming Exercise A
 * Create a program that allows the user to enter different integers. If the
 * user enters a number greater than or equal to 10, the number gets added to
 * the end of the list. If a number less than 10 is entered, it goes to the
 * start of the list. If 999 is entered, the number is placed after the second
 * node and the program displays the content of the linked list.
 */
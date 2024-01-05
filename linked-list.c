#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlistTransversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element = %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
struct node *insertAtIndex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct node *insertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct node *insertAfterNode(struct node *head, struct node *prevNode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
int main()
{
    struct node *head = NULL;
    int choice, data, index;
    while (1)
    {
        printf("\nLinked List operations:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at an index\n");
        printf("3. Insert at the end\n");
        printf("4. Insert after a node\n");
        printf("0. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data to insert at the beginning: ");
            scanf("%d", &data);
            head = insertAtFirst(head, data);
            break;
        case 2:
            printf("Enter the data to insert: ");
            scanf("%d", &data);
            printf("Enter the index to insert at: ");
            scanf("%d", &index);
            head = insertAtIndex(head, data, index);
            break;
        case 3:
            printf("Enter the data to insert at the end: ");
            scanf("%d", &data);
            head = insertAtEnd(head, data);
            break;
        case 4:
            printf("Enter the data to insert after a node: ");
            scanf("%d", &data);
            printf("Enter the value of the node after which to insert: ");
            scanf("%d", &index);
            struct node *temp = head;
            while (temp != NULL && temp->data != index)
            {
                temp = temp->next;
            }
            if (temp == NULL)
            {
                printf("Node not found.\n");
                return 1;
            }
            head = insertAfterNode(head, temp, data);
            break;
        case 0:
            printf("Exiting the program.\n");
            exit(0);
        default:
            printf("Invalid choice. Try again.\n");
        }
        printf("Linked List after the operation:\n");
        linkedlistTransversal(head);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create()
{
    struct node *head, *second, *third, *fourth, *fifth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value of 5 elements below: \n");

    printf("\n1st Element: ");
    scanf("%d", &head->data);
    head->next = second;

    printf("\n2nd Element: ");
    scanf("%d", &second->data);
    second->next = third;

    printf("\n3rd Element: ");
    scanf("%d", &third->data);
    third->next = fourth;

    printf("\n4th Element: ");
    scanf("%d", &fourth->data);
    fourth->next = fifth;

    printf("\n5th Element: ");
    scanf("%d", &fifth->data);
    fifth->next = NULL;

    return head;
}

struct node *display(struct node *head)
{
    int i = 0;
    while (head != NULL)
    {
        printf("\n[%d] Element: %d", i + 1, head->data);
        head = head->next;
        i++;
    }
}

struct node *insertatbeg(struct node *head)
{
    int ele;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the element you want to insert at the start: ");
    scanf("%d", &ele);
    ptr->next = head;
    ptr->data = ele;
    return ptr;
}

struct node *insertatend(struct node *head)
{
    int ele;
    struct node *p, *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    p = head;
    printf("\nEnter the element you want to insert at the end: ");
    scanf("%d", &ele);
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    ptr->data = ele;
    return head;
}

struct node *insertatindex(struct node *head)
{
    struct node *p, *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    p = head;
    int index, ele, i = 0;
    printf("\nEnter the element and index aftter which you want to insert: ");
    scanf("%d %d", &ele, &index);

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = ele;

    return head;
}

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    int ch;
    printf("\nPress 1: to Create\nPress 2: To display\nPress 3: To insert a node at the beginning\nPress 4: To insert a node at the end\nPress 5: To insert a node after kth node\n");
    printf("Press 0: To EXIT\n");
    while (1)
    {
        printf("\n\nPRESS A BUTTON: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
        {
            printf("\nGOOD DAY\n");
            goto end;
            break;
        }
        case 1:
        {
            head = create();
            break;
        }
        case 2:
        {
            display(head);
            break;
        }
        case 3:
        {
            head = insertatbeg(head);
            display(head);
            break;
        }
        case 4:
        {
            head = insertatend(head);
            display(head);
            break;
        }
        case 5:
        {
            head = insertatindex(head);
            display(head);
            break;
        }
        default:
        {
            printf("\nINVALID NUMBER\n");
            break;
        }
        }
    }

end:
    return 0;
}
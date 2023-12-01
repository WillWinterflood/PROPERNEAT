#include <stdio.h>
#include <stdlib.h>

 struct list {
    int data;
    struct list *next_element;
};
typedef struct {
    int data;
    list *next_element
}list;

int main()
{
    list *head = NULL;
    head = malloc(sizeof(list)); //allocating memory 
    head->data = 10;
    head->next_element->data = 20;
    head->next_element->next_element = NULL;
    list *current_element = head->next_element;
    list first_node;
    list second_node; //No need to create all these elements one by one,, will only need this second element after using element one therefore how do you simplify it?
    //blocks have arrows that point to the next block 
    // 
    first_node.data = 10;
    first_node.next_element = &second_node;
    second_node.next_element = 0;
    (first_node.next_element)->data = 20; //-> is a pointer to a struct as we are not using the struct directly 
    printf("%p\n", first_node.next_element);
            ((first_node.next_element)->data);
    printf("%p\n", second_node.next_element);
    // Run this program. Learn from the error. 

    // Why the error. 

    //notes fromlecture because the code doesnt work
    /* When you have a certain number of mallocs you need to free it
    do this by using free()
    want to free the whole list what should you do, if you free head, the first element will not be included 
    How would you free the whole list?
    ?
    */
}
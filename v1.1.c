#include<stdio.h>
#include<stdlib.h>
void main()
{
       struct node
       {
         int data;
         struct node *next;
       };
       struct node *head=NULL,*pos=NULL,*tail=NULL;
       int ch,entry,count;
       while(1)
       {
        printf("\n 1.INSERT\n 2.DISPLAY \n 3.COUNT \n 4.EXIT ");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1:
          {
           printf("\n Enter data:");
           scanf("%d",&entry);
           if(head==NULL)
           {
            head=(struct node *)malloc(sizeof(struct node));
            head->data=entry;
            pos=head;
            tail=head;
           }
           else
           {
            tail->next=( struct node *)malloc(sizeof(struct node));
            tail=tail->next;
            tail->data=entry;
           }break;
          }
          case 2:
          {
           pos=head;
           printf("\n ELEMENTS ARE:");
           while(pos!=NULL)
           {
            printf("\t %d",pos->data);
            pos=pos->next;
           }break;
          }
          case 3:
          {
            pos=head;
            while(pos!=NULL)
            {
               count++;
                pos=pos->next;
                printf("no of elements are:%d",count);
            }
          }
         break;
          case 4:
          {
            printf("\n good bye");
                  exit(0);
          }
    
        }
      }
}
	
   

//AUTHOR - SATYAM RAMAWAT
#include<conio.h>
#include<stdio.h>


struct doubly
{
    struct doubly *front;
    struct doubly *back;
    int i;
};

void main()
{
    struct doubly *head=0;
    struct doubly *last=0;
    struct doubly *p=0;
    struct doubly *temp=0;
    int ch,intch,user,cnt=0,t,add;
    clrscr();
    printf("\n\t 1. CREATE.");
    printf("\n\t 2. INSERT.");
    printf("\n\t 3. DELETE.");
    printf("\n\t 4. DISPLAY.");
    printf("\n\t 5.EXIT.");
    scanf("%d",&ch);

    while(ch!=5)
    {
        if(ch==1)
        {
            cnt=0;
            head=(struct doubly *)malloc(sizeof(struct doubly));
            head->back=0;
            head->front=0;
            printf("\n\t ENTER DATA::: ");
            scanf("%d",&head->i);
            cnt++;
            last=head;
        }
        if(ch==2)
        {

            printf("\n\t 1. INSERTION AT FRONT.");
            printf("\n\t 2. INSERTION AT MIDDLE.");
            printf("\n\t 3. INSERTION AT END.");
            scanf("%d",&intch);
            temp=(struct doubly *)malloc(sizeof(struct doubly));
            printf("\n\t ENTER DATA:::");
            scanf("%d",&temp->i);

            if(intch==1)
            {
                temp->front=0;
                temp->back=head;
                head=temp;
                cnt++;
            }
            if(intch==3)
            {
                p=head;
                while(p->back!=0)
                {
                    p=p->back;
                }
                temp->back=0;
                temp->front=p;
                p->back=temp;
                cnt++;
            }
            if(intch==2)
            {
                printf("\n\tNTER VALUE BETVN 1--%d",cnt);
                scanf("%d",&add);
                t=1;
                p=head;
                while(t<add)
                {
                    p=p->back;
                    t++;
                }
                temp->back=p->back;
                p->back->front=temp;
                p->back=temp;
                temp->front=p;

            }
        }
        if(ch==4)
        {
            p=head;
            while(p!=0)
            {
                printf("\t-->%d",p->i);
                p=p->back;
            }
            printf("\n\t total nodes %d",cnt);
        }
        if(ch==3)
        {
            printf("\n\t1. DELETE FRONT");
            printf("\n\t2. DELETE MIDDLE");
            printf("\n\t3. DELETE END");
            scanf("%d",&intch);
            if(intch==1)
            {

                head->back=t;
                free(head);
                head=t;
                head->front=0;
                cnt--;
            }
            if(intch==3)
            {
                p=head;
                while(p->back!=0)
                {
                    p=p->back;
                }
                temp->front=p;
                p->back=temp;
                temp->back=0;
                cnt--;
            }
            if(intch==2)
            {
                printf("\n\tNTER VALUE BETVN 1--%d",cnt);
                scanf("%d",&add);
                t=1;
                p=head;
                while(t<(add-1))
                {
                    p=p->back;
                    t++;
                }
                temp=p->back;
                p->back=temp->back;
                temp->back->front=p;
                free(temp);

            }

        }
        printf("\n\t 2. INSERT.");
        printf("\n\t 3. DELETE.");
        printf("\n\t 4. DISPLAY.");
        printf("\n\t 5.EXIT.");
        scanf("%d",&ch);
    }
    getch();
}

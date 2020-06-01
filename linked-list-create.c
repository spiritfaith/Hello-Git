#include <stdio.h>
#include <stdlib.h>

struct player
{
    int account;
    char name[20];
    int HP;
    int power;
    int intelligence;
    struct player *next;
};

typedef struct player Player;

Player *Build (void)
{
    Player pl1 = {1, "a1", 26446, 827, 499};
    Player pl2 = {2, "b2", 99999, 999, 999};
    Player pl3 = {3, "c3", 30889, 973, 120};
    Player *head;
    head = &pl1;
    pl1.next = &pl2;
    pl2.next = &pl3;
    pl3.next = NULL;
    return head;
}

Player *create (int num)
{
    Player *Pt, *prePt, *head = NULL;
    int i;
    for (i = 0; i < num; i++)
    {
        Pt = (Player *)malloc(sizeof(Player));
        if (Pt != NULL)
        {
            scanf("%d%s%d%d%d", &Pt->account, Pt->name, &Pt->HP, &Pt->power,
                    &Pt->intelligence);
            if (head == NULL)
            {
                prePt = head = Pt;
            }
            else
            {
                prePt->next = Pt;
                prePt = Pt;
            }
        }
        else
        {
            printf("Failed.\n");
            exit(0);
        }
    }
    Pt->next = NULL;
    return head;
}

int main()
{
    Player *head;
    head = Build();
    printf("The first player is %s",
            head->name);
    return 0;
}
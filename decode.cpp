#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct node
{
    node* next[11];
     int c=0;

    node()
    {

        for(int i=0; i<10; i++)
        {
            next[i] = NULL;
        }
    }
}*root;

void create(char* str,int len)
{
    node *curr = root;
    int i,id;

    for(i=0; i<len; i++)
    {
        id = str[i]-'0';

        if(curr->next[id]==NULL)
            curr->next[id] = new node();

        curr = curr->next[id];

    }
    ++ curr->c ;

}

bool found(node *curr,int paise)
{
      if(curr->c>1)
      {
          return 0;
      }
      if(paise)
      {
          return 0;
      }
      if(curr->c>0)
      {
          paise =1;;

      }
      int i,ret=1;

      for(i=0;i<10;i++)
      {
          if(curr->next[i])
          {
              ret &=found(curr->next[i],paise);
          }
      }
      return ret;
}
void del(node* curr)
{

    for(int i=0; i<10; i++)
    {
        if(curr->next[i])
            del(curr->next[i]);
    }
    delete(curr);
}
int main()
{
    int i=0,k=0,l,n,t,p=900;
    char s[500],s1[2];

    while(cin>>s){

        if(k==0)
        root = new node();

        if(strcmp(s,"9")==0)
            {
                i++;
              p=found(root,0);
        if(p==0)
            printf("Set %d is not immediately decodable\n",i);
        else
            printf("Set %d is immediately decodable\n",i);
        del(root);
        k=0;
            }
            else{
            l = strlen(s);
            create(s,l);
            k=1;
            }
        }


    return 0;
}


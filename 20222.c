#include<stdio.h>
#include<conio.h>
int main()
{
int set1,set2,set3,seti,i,j,l1,l2,n,m;
printf("enter the limit of the first set");
scanf("%d",&l1);
printf("enter the limit of the second set");
scanf("%d",&l2);
printf("enter the elements of the first set");
for(i=0;i<l1;i++)
{
scanf("%d",&set1);
}
printf("the elements entered is",&set1);


printf("the entered elements of set1 are:");

for(i=0;i<l2;i++)
{
scanf("%d",&set2);
printf("the elements in the second set is");
}

}

}

void intersection(int Set1[],int Set2[],int set3[])
{
    int n,i,j=0;
    n=Set1[0];
    for(i=1;i<=n;i++)
        if(ele_pre(Set2,Set1[i]))
            Set3[++j]=Set1[i];
    Set3[0]=j;
}
int ele_pre(int Set[],int x)
{
    int n,i;
    n=Set[0];
    for(i=1;i<=n;i++)
        if(Set[i]==x)
            return 1;
    return 0;
}
void set_union(int Set1[],int Set2[],int set3[])
{
    int n,i,m;
    n=Set1[0];
    for(i=1;i<=n;i++)
        Set3[i]=Set1[i];
    m=Set2[0];
    for(i=1;i<=m;i++)
        if(!ele_pre(Set1,Set2[i]))
            Set3[++n]=Set2[i];
    Set3[0]=n;
}
}

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    //calculation of upper body of tree
    int head_of_tree=((n-1)/2)+6;
    int head_of_tree_last_line_star_count=n+10;
    int star_count=1;
    int space_count=(head_of_tree_last_line_star_count+1)/2;
    //int mid_Position_of_star=(head_of_tree_last_line_star_count+1)/2;
    for(int i=1;i<=head_of_tree;i++)
    {
        for(int j=1;j<space_count;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=star_count;k++)
        {
            printf("*");
        }
        printf("\n");
        space_count--;
        star_count+=2;
    }
    //calculation of lower body of tree
    //always space_for_lower_body=5;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        printf(" ");
        for(int k=1;k<=n;k++)
        printf("*");

        printf("\n");
    }

}

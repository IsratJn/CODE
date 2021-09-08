#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int s[20];
    for(int i=0;i<t;i++){
        fgets(s[i],20,stdin);
    printf("%s",s[i]);
    }


}

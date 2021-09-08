
#include<stdio.h>
#include<string.h>

int main()
{
    int T, i,d,c1,c2,j;
    scanf("%d\n", &T);
     char s1[100],s2[100];
    for(i = 1; i<=T; i++){
        scanf("%[^\n]%*c", s1);
        scanf("%[^\n]%*c", s2);

        d=strcmp(s1,s2);
        for(j=0;s1[j];j++){
        if(s1[j] == ' ')
        c1++;}
        for(j=0;s2[j];j++){
        if(s2[j] == ' ')
        c2++;}

        if(d==0){
            printf("Case %d: Yes\n",i);
        }
         else if(c1!=c2)
      {
          printf("Case %d: Output Format Error\n",i);
      }
        else if(d!=0){
            printf("Case %d: Wrong Answer\n",i);
        }

    }


}

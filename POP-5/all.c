#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  for (int i=1;i<=n;i++)
  {
    for (int j=1;j<=n;j++){
      printf("*");
      
    }
    printf("\n");
  }
}
-----------------------------
#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
      printf("*");
    }
    printf("\n");
  }
}

--------------------------------

#include<stdio.h>
int main(){
  int n,space,star;
  scanf("%d",&n);
  space=n-1;
  star=1;
  for (int i=1;i<=n;i++){
    for (int j=1;j<=space;j++){
      printf(" ");
    }
    for (int k=1;k<=star;k++){
      printf("*");
    }
    space-=1;
    star+=2;
    printf("\n");
  }
}

--------------------------------

#include<stdio.h>
int main(){
  int n,space,star;
  scanf("%d",&n);
  space=0;
  star=(n*2)-1;
  for (int i=n;i>=1;i--){
    for (int j=1;j<=space;j++){
      printf(" ");
    }
    for (int k=1;k<=star;k++){
      printf("*");
    }
    printf("\n");
    star-=2;
    space+=1;
  }
}

-----------------------------------

#include<stdio.h>
int main(){
  int n,space;
  scanf("%d",&n);
  space=n-1;
  for (int i=1;i<=n;i++)
  {
   for (int j=1;j<=space;j++){
     printf(" ");
   }
   for (int k=1;k<=n;k++){
     printf("*");
   }
   printf("\n");
   space-=1;
  }
}

----------------------------------


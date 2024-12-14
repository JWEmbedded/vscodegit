#include <stdio.h>

void still(){
  printf("It is still difficult\n");
}

void dfs(int now){
  if(now == 3) return;
  dfs(now+1);
}

int main(){
  printf("what is your lunch?\n");
  printf("my favorite is seolyoon\n");
  still();
  dfs(0);
  return 0;
}

#include <stdio.h>
int main(){
int n,k;
  scanf("%d",&n);
  int a[n],b[n];
  for (int i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
  scanf("%d",&k);
  for (int i=0;i<k;i++){
  b[0]=a[n-1];
    for (int j=0;j<n;j++){
    b[j+i]=a[j];
    }
    for (int j=0;j<n;j++){
    a[j]=b[j];
    }
  }
  for (int i=0;i<n;i++){
  printf("%d",a[i]);
  }
  return 0;
}

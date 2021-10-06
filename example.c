

#include <stdio.h>
#define has main //macros
int has() {
int n,k,m,h,sum=0,allsum=0;
printf("enter the size of array :\n");
scanf("%d",&n);
int a[n];
printf("enter the array values :\n");
for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("enter the added value :\n");
scanf("%d",&k);
///
for (int i=0;i<n;i++){
    m=a[i];
    while(m){
     h=m%10;
     sum+=h;
     m/=10;
    }
    // printf("%d\n",sum);
    if(sum==k){
        allsum+=a[i];
    }
    sum=0;
}
 printf("Ans : %d\n ",allsum);
    return 0;
}

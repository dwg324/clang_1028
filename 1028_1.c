#include <stdio.h>
int main() {
    int a,n,arr[1000001]={0},cnt[1000001]={0};
    scanf("%d",&a);
    for(int i=0;i<a;i++) scanf("%d",&arr[i]);
    for(int i=0;i<a;i++) cnt[arr[i]]+=1;
    scanf("%d",&n);
    printf("%d",cnt[n]);
    return 0;
}
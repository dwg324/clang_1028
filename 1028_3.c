#include <stdio.h>
int main(){
    int n,arr[10001]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int min=10000,max=0;
    for(int i=0;i<n;i++) if(min>arr[i]) min=arr[i];
    for(int i=0;i<n;i++) if(max<arr[i]) max=arr[i];
    printf("%d %d",min,max);
}
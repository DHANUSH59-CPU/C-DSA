#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void mergesort(int a[],int n1,int b[],int n2,int res[]){
        int i=0,j=0,k=0;
        while(i<n1 && j<n2){
            if(a[i]<b[j]){
                res[k++]=a[i++];
            }
            else{
                res[k++]=b[j++];
            }
        }
        while(i<n1){
            res[k++]=a[i++];

        }
        while(j<n2){
            res[k++]=b[j++];
        }

}

void merge(int v[],int n){
    if(n<=1){
        return ;
    }
    int n1=n/2;
    int n2=n-n1;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    merge(a,n1);
    merge(b,n2);

    mergesort(a,n1,b,n2,v);
}

void display(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array :");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    clock_t start=clock();
    merge(a,n);
    clock_t end=clock();
    double duartion =start-end;
    display(a,n);
    printf("%lf",(double)(duartion)/(double)CLOCKS_PER_SEC);
    return 0;
}
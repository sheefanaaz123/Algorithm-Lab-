
// Let A be a list of n (not necessarily distinct) integers.
//  Write a program by using User DefinedFunction (UDF)s 
//  to test whether any item occurs more than⌈n/2⌉times in A.a)UDF should take
//   O(n2) time and use no additional space.b)UDF should take O(n) time and use O (1) additional space


#include<stdio.h>
#include<stdlib.h>
    
int UDF(int arr[],int n){

   int max = 0;
   for(int i=0;i<n;++i){
      if(max<arr[i])
         max=arr[i];
   }

   return max;
}

int  main(){

    int arr[]= {1,2,3,4,2,2,6,2,2,2,3};
    int n=11;

    for(int i=0;i<n;i++)
       printf("Index %d element :: %d\n",i,arr[i]);

    printf("BY O(n^2) approach\n");

    for(int i=0;i<n;++i){

        int num = arr[i];
        int count=0;
        for(int j=i+1;j<n;++j)
             if(num==arr[j])
                  count++;
             if(count>=n/2)
                  printf("%d occurred more than n/2 times\n",num);

    }

    int max = UDF(arr,n);
    int b[max];
    for(int i=0;i<max;++i)
        b[i] =0;
    for(int i=0;i<n;++i){
        int num=arr[i];
        int count=0;
        b[num]++;
    }
    printf("By O(n) approach\n");
    for(int i=0;i<max;++i)
       if(b[i] >n/2)
          printf("%d occured more than n/2 times\n",i);

return 0;
}
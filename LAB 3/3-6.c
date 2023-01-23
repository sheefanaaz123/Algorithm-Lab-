//Consider an n × n matrix A = (aij), each of whose elements aij is a 
// non negative real number and suppose that each row and column of A sums to an integer value.
//  We wish to replace each element aij with either⌊aij⌋or⌈aij⌉without disturbing the row and column
//   sums.Write a program by defining a user defined function that is used to produce the rounded 
//   matrixas described in the above example. Find out the time complexity of your algorithm/function.

#include<stdio.h>
#include<math.h>

float M[5][5];
float floatA[5][5];
float sum_row[5];
float sum_col[5];
float A[5][5];
int n;
int count = 0;

void display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%.1f\t",A[i][j]);
        }
        printf("\n");
    }
}
void Sum(){
        for(int i=0;i<n;i++){
            count++;
            for(int j=0;j<n;j++){
                count++;
                float A[i][j];
                A[i][j] = A[i][j]-(int)A[i][j];
                }
            }
            for(int i=0;i<n;i++){
                count++;
                for(int j=0;j<n;j++){
                    count++;
                    sum_row[i]=(sum_row[i]+floatA[i][j]);
                }
                sum_row[i]=round(sum_row[i]);
            }
            for(int i=0;i<n;i++){
                count++;
                for(int j=0;j<n;j++){
                    count++;
                    sum_col[i]=(sum_col[i]+floatA[j][i]);
                }
                sum_col[i]=round(sum_col[i]);
            }
}
                                    
void algo(){
    printf("\n");
      for(int w=0;w<n;w++){
        count++;
            for(int q=0;q<n;q++){
                count++;
                 if(sum_col[q]>0 && sum_row[w]>0){
                        A[w][q]=ceil(A[w][q]);
                            sum_col[q]=sum_col[q]-1;
                            sum_row[w]=sum_row[w]-1;
                }
                 else
                    A[w][q]=floor(A[w][q]);
                }
        }
}

int main(){

    printf("\nEnter the size of Matrix \n");
    scanf("%d",&n);

    printf("Enter The values of array\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            scanf("%f",&A[i][j]);
            }
            }
            printf("\nEntered Matrix\n");
            display();
            Sum();
            algo();
            printf("\nAfter Round off\n");
            display();
    printf("\nFrequency Count is  %d",count);

    return 0;
}
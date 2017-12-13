/*********************************************/
/** CPRE 185 – Homework 9 ********************/
/*********************************************/
/** Author – Kenneth A. Jacobson *************/
/** Lab section – C **************************/
/** Date started – 30.10.2017 ****************/
/** Comments – Alphabetical Sort of Array ****/
/*********************************************/

#include <stdio.h>

void strcopy(char a[5][4], char src[4], int row);
void swap(char a[5][4], int swapdest, int swapsrc);
void printArray(char a[5][4]);
int strcomp(char str1[4], char str2[4]);
void alphabetize(char a[5][4], int n);

void main(void){

char arr[5][4];
char input[4];
int i, j;
int row= 5, col= 4;
int n= sizeof(arr)/sizeof(arr[0][0]);

//input statement
for(i=0;i<5;i++){
  printf("Enter string #%d: ", i+1);
    scanf("%s", input);
    strcopy(arr, input, i);
    fflush(stdout);
}
printf("after input\n");

alphabetize(arr, n);

printf("after alphabetize\n");

printArray(arr);
}

void alphabetize(int a[5][4], int n){
    // Base case
    printf("start sort\n");
    if (n == 1)
        return;

    // One pass of bubble sort. After
    // this pass, the largest element
    // is moved (or bubbled) to end.
    for (int i=0; i<n-1; i++)
        if (strcomp(a[i], a[i+1])>1)
            swap(a, i, i+1);

    // Largest element is fixed,
    // recur for remaining array
    alphabetize(a, n-1);
}

void strcopy(int a[5][4],int src[4], int row){
  int i;
  for(i=0;i<4;i++){
    a[row][i]=src[i];
  }
}

void swap(char a[5][4], int swapdest, int swapsrc){
  int i;
  char hold[4];

  for(i=0;i<4;i++){
    hold[i]=a[swapdest][i];
  }

  for(i=0;i<4;i++){
    a[swapdest][i]=a[swapsrc][i];
  }

  strcopy(a, hold, swapsrc);
}

void printArray(char a[5][4]){
  int i, j;

  for(i=0;i<5;i++){
    for(j=0;j<4;j++){
      printf("%c, ", a[i][j]);
    }
    printf("\n");
  }
}

int strcomp(char str1[4], char str2[4]){
  if(str1[0]==str2[0]){
    if(str1[1]==str2[1]){
      if(str1[2]==str2[2]){
        if(str1[3]==str2[3]){
          return 0;
        }
        else if(str1[3]<str2[3]){
          return 1;
        }
        else{
          return 2;
        }
      }
      else if(str1[2]<str2[2]){
        return 1;
      }
      else{
        return 2;
      }
    }
    else if(str1[1]<str2[1]){
      return 1;
    }
    else{
      return 2;
    }
  }
  else if(str1[0]<str2[0]){
    return 1;
  }
  else{
    return 2;
  }
}

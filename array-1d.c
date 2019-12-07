void fill(int*,int);           //void fill(int [],int);

void sumarr(const int*,int);   //void sumarr(const int[],int); 

void display(const int*,int);  //void display(const int[],int);

int main() {
  int n=10;
  int arr[10];
  fill(arr,n);
  sumarr(arr,n);
  display(arr,n);  
  return 0;
}

void fill(int* parr,int n) {     //void fill(int parr[],int n)
  for(int i=0;i<n;i++)
    parr[i]=i*10+1;  //scanf("%d",&arr[i]);
}

void sumarr(const int* parr, int n) {
  int sum=0;
  for(int i=0;i<n;i++)
    sum+=*parr++;   //sum+=parr[i]  //sum+=*(parr+i)
}

void display(const int *parr,int n) {
  for(int i=0;i<n;i++)
    printf("%d\n",parr[i]);  //*parr++, *(parr+i)
}

/*** Bitwise operations with integers ***/
#include<stdio.h>

void int2bin(int num){
  int digit;
  unsigned int mask=(1<<((8*sizeof(num))-1));
  while(mask!=0){
    digit=((num&mask)==0)?0:1;
    printf("%d",digit);
    mask=mask>>1;
    }
  }

int inc_int(int N){
  int R=N;
  int M=1;
  while((N&M)!=0){
    N&=~M;
    M<<=1;
    }
  N|=M;
  return N;
  }

int add_bin(int A, int B){
  int r=0;
  int i1,i2,ci=0,o1,o2,o,co1,co2,co;
  unsigned int mask=1;
  while(mask!=0){
    o1=(A&mask)^(B&mask);
    co1=(A&mask)&(B&mask);
    o2=o1^ci;
    co2=o1&ci;
    co=co1|co2;
    o=o2;
    ci=co<<1;
    r=r|o;
    mask=mask<<1;
    }
  return r;
  }

int main(){
  int x, y;
//  x=0;
//  x=1;
//  x=192;
//  x=-1;
//  x=2147483648;
//  x=010;
//  x=0x8f2a;
  scanf("%d",&x);
//  y=37;
  scanf("%d",&y);
  // Conversion
  printf("  dec: %d\n  bin: ",x);
  int2bin(x);
  printf("\n");
  // Incrementation
  printf("  %d + 1 = %d\n",x,inc_int(x));  
  // Addition
  printf("  %d + %d = %d\n",x,y,add_bin(x,y));
  return 0;
  }


/*** Bitwise operations with floats ***/
#include<stdio.h>
union var{
   int i;
   float f;
   };

void write_bin(float a){
   int size=8*sizeof(a);
   int i,d;
   union var aa;
   aa.f=a;
   unsigned int mask=(1<<(size-1));
   for(i=1;i<=size;i++){
      d=((aa.i&mask)==0)?0:1;
      printf("%d",d);
      if(i%8==0) printf(" ");
      mask=mask>>1;
      }
   }

float power(float b, int e){
   if(e<0){
      e*=-1;
      b=1/b;
      }
   float p=1;
   for(;e>0;e--)
      p*=b;
   return p;
   }
void write_dec(float a){
   int *aa;
   int size=8*sizeof(a);
   int i,j,d;
   int S,K=0;
   double M=0;
   unsigned int mask=(1<<(size-1));
   aa=(int*)&a;
   for(i=1;i<=size;i++){
      if(((*aa)&mask)==0) d=0;
      else d=1;
      if(i==1) S=d;
      if(i>=2 && i<=9){
         j=i-1;
         K+=d*power(2,8-j);
         }
      if(i>=10){
         j=i-9;
         M+=d*power(0.5,j);
         }
      mask=mask>>1;
      }
   K-=127;
   printf("%.10f",power(-1,S)*power(2,K)*(1+M));
   }

int main(){
   float x=2.5;
//   float x=-2.5;
   printf("%f\n",x);
   printf("%.10f\n",x);
   write_dec(x);
   printf("\n");
   write_bin(x);
   printf("\n");
   return 0;
   }



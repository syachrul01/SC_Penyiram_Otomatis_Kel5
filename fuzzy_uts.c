#include<stdio.h>

int main() {

  float input_cahaya;
  
  int cahaya = 0;
  
  

  printf("Masukkan Resistansi LDR cahaya dalam Ohm\t: ");
  scanf("%f", &input_cahaya);
  printf("\n");


  //menetukan intentsitas cahayanya 
  if (input_cahaya <= 200){
    cahaya = 1; 
  }
  else if(input_cahaya > 200 && input_cahaya <= 600){
    cahaya = 0; //siang
  }
  else if(input_cahaya >= 200){
    cahaya = 2; //sore
  }
 
  
  //menentukan waktu penyiraman
  if (cahaya == 1){
    printf("Spraying : Menyiram Air di Pagi hari\n");
  }
  else if (cahaya == 0){
    printf("Not Spraying");
  }
  else if (cahaya == 2){
    printf("Spraying : Menyiram Air di Sore hari");
  }
  
  
  return 0;
}
#include <unistd.h>

void double_digit(int m, int num){
  char c;
  if (m != 1){
    double_digit(m - 1, num / 10);
  }
  c = (num % 10) + '0';
  write(1, &c, 1);
}

void ft_print_combn(int n){
  int a;
  
}

int main(){
  ft_print_combn(3);
  write(1, "\n", 1);
 return 0;
}


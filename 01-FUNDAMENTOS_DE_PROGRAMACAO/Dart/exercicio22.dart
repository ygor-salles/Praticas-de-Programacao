// 22 - Realizar as funções de fibonachi,
// fatorial e a somatória de N até 1, todas com recursividade.

import 'dart:io';

double fibonachi(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fibonachi(n - 1) + fibonachi(n - 2);
}

int fatorial(int n) {
  if (n == 0 || n == 1) return 1;
  return n * fatorial(n - 1);
}

int soma(int n) {
  if (n == 1) return 1;
  return n + soma(n - 1);
}

main(List<String> args) {
  print('Digite um número inteiro: ');
  int n = int.parse(stdin.readLineSync()!);
  print('Fibonachi: ${fibonachi(n)}');
  print('Fatorial: ${fatorial(n)}');
  print('Somatória 1 até N: ${soma(n)}');
}

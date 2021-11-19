// 6 - Elabore um programa que leia dois números n e m (m>=n) e escreva todos os números
// pares entre n e m inclusive.

import 'dart:io';

main(List<String> args) {
  print('Digite um valor inteiro para N: ');
  int n = int.parse(stdin.readLineSync()!);
  print('Digite um valor inteiro para M: ');
  int m = int.parse(stdin.readLineSync()!);

  for (int i = n; i <= m; i++) {
    if (i % 2 == 0) {
      print('par: $i');
    }
  }
}

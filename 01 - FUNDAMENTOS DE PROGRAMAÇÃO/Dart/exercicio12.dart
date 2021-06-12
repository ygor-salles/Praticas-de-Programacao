// 12 - Faça um programa que contenha uma função que recebe dois números
// positivos e retorna a soma dos N números inteiros existentes entre eles (inclusive).
// Use a função no programa principal.

import 'dart:io';

int somatoria(int a, int b) {
  int maior, menor;
  if (a > b) {
    maior = a;
    menor = b;
  } else {
    maior = b;
    menor = a;
  }

  int soma = 0;
  for (int i = menor; i <= maior; i++) {
    soma = soma + i;
  }
  return soma;
}

main(List<String> args) {
  print('Digite valor inteiro para A e B respectivamente: ');
  int a = int.parse(stdin.readLineSync()!);
  int b = int.parse(stdin.readLineSync()!);

  print('A somatória entre os números digitados é: ${somatoria(a, b)}');
}

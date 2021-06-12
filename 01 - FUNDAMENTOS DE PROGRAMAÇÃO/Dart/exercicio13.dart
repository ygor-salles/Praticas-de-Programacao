// 13 - Faça um programa que preencha um vetor com seis elementos
// numéricos inteiros. Calcule e mostre: todos os números pares;
// a quantidade de números pares; todos os números ímpares;
// a quantidade de números ímpares.

import 'dart:io';

main(List<String> args) {
  var array = [1, 2, 5, 7, 9, 3];

  // var array = []
  // var valor;
  // print('Digite seis valores númericos inteiros: ');
  // for (int i = 0; i < 6; i++) {
  //   valor = int.parse(stdin.readLineSync()!);
  //   array.add(valor);
  // }

  int contPar = 0;
  int contImpar = 0;
  print('\n');
  for (int item in array) {
    if (item % 2 == 0) {
      print('$item é par');
      contPar++;
    } else {
      print('$item é ímpar');
      contImpar++;
    }
  }

  print('\nA quantide de números pares é: $contPar');
  print('A quantide de números ímpares é: $contImpar');
}

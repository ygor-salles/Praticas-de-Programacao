// 1 - Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
// a. O novo peso quando a pessoa engorda 15% do peso digitado
// b. O novo peso quando a pessoa engorda 20% do peso digitado

import 'dart:io';

main(List<String> args) {
  print('Digite seu peso: ');
  var peso = double.parse(stdin.readLineSync()!);
  print('O peso da pessoa quando engorda 15% é: ${peso + peso * 0.15}');
  print('O peso da pessoa quando engorda 20% é: ${peso + peso * 0.20}');
}

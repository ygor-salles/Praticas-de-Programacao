// 2 - Dado um número inteiro positivo de 3 algarismos, inverter a ordem de seus
// algarismos. Os três algarismos do número dado são diferentes de zero.

import 'dart:io';

main(List<String> args) {
  print('Digite um número inteiro de 3 algarismos diferente de 0: ');
  var number = int.parse(stdin.readLineSync()!);

  int centena = number ~/ 100;
  int dezena = (number % 100) ~/ 10;
  int unidade = (number % 100) % 10;
  print("O número invertido é ${unidade}${dezena}${centena}");
}

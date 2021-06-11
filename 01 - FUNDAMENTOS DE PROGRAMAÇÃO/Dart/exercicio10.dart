// 10 - Leia valores numéricos até que o valor 0 for digitado. Em seguida,
// calcule a média dos valores digitados e informe o usuário.

import 'dart:io';

main(List<String> args) {
  double soma = 0;
  double quantidade = 0;
  double numero;

  print('Digite um número: ');
  numero = double.parse(stdin.readLineSync()!);
  while (numero != 0) {
    soma += numero;
    print('Digite um número: ');
    numero = double.parse(stdin.readLineSync()!);
    quantidade++;
  }
  print(
      'A média dos número digitados é: ${(soma / quantidade).toStringAsFixed(2)}');
}

// 3 - Ler dois números, armazenando-os nas variáveis num1 e num2. Verificar se o valor de
// num1 é maior que o valor de num2 e, em caso positivo, trocar os conteúdos das variáveis.

import 'dart:io';

main(List<String> args) {
  print('Digite valor de num1: ');
  int num1 = int.parse(stdin.readLineSync()!);
  print('Digite valor de num2: ');
  var num2 = int.parse(stdin.readLineSync()!);

  if (num1 > num2) {
    int aux;
    aux = num1;
    num1 = num2;
    num2 = aux;
  }

  print('Valor final de num1 é: ${num1}');
  print('Valor final de num2 é: ${num2}');
}

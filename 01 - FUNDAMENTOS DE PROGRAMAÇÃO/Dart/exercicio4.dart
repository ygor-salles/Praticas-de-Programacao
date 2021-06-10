// 4 - Escreva um algoritmo para calcular as raízes de uma equação do segundo grau (Ax2
// + Bx + C). Considere que o valor de A <> 0 e (B2– 4AC) > 0. Escreva os valores na tela.

/* Teste 2 raízes (a=1 b=-3 c=-10) //Teste 1 raíz (a=9 b=-12 c=4) //Teste 0 raíz (a=5 b=3 c=5) */

import 'dart:io';
import 'dart:math';

main(List<String> args) {
  print('Digite o valor de a: ');
  double a = double.parse(stdin.readLineSync()!);
  print('Digite o valor de b: ');
  double b = double.parse(stdin.readLineSync()!);
  print('Digite o valor de c: ');
  double c = double.parse(stdin.readLineSync()!);

  if (a == 0) {
    print('O valor de A deve ser diferente de 0!');
    return;
  }

  double delta = pow(b, 2) - 4 * a * c;
  if (delta > 0) {
    double x1 = (-b - sqrt(delta)) / (2 * a);
    double x2 = (-b + sqrt(delta)) / (2 * a);
    print('\nEquação possui raízes reais:');
    print('x1 = ${x1} \nx2 = ${x2}');
  } else if (delta == 0) {
    double x1 = (-b + sqrt(delta)) / (2 * a);
    print('\nEquação possui uma raiz real: \n${x1}');
  } else {
    print('\nEquação não possui raízes reais!');
  }
}

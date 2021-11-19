// Faça um menu de escolha: a, b, c d. Caso seja digitado a exiba o nome ana,
// b - bruno, c - carol, d - diana.

import 'dart:io';

main(List<String> args) {
  print('Digite uma letra (a, b, c d): ');
  String opcao = stdin.readLineSync()!;
  switch (opcao) {
    case 'a':
      print('Ana');
      break;
    case 'b':
      print('Bruno');
      break;
    case 'c':
      print('Carol');
      break;
    case 'd':
      print('Diana');
      break;
    default:
      print('Digite uma letra válida!');
      break;
  }
}

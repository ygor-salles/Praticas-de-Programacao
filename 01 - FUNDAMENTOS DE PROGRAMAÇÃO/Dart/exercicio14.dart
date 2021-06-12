// 14 - Leia um conjunto de nomes e os armazene em um vetor de forma dinâmica.
// Em seguida, leia um nome e verifique se o mesmo faz parte desse vetor.

import 'dart:io';

main(List<String> args) {
  var arrayNomes = [];

  String parar;
  do {
    print('\nEscreva um nome: ');
    String nome = stdin.readLineSync()!;
    arrayNomes.add(nome);

    print('Deseja parar? (S/N)');
    parar = stdin.readLineSync()!;
  } while (parar != 'S' && parar != 's');

  print('\nDigite um nome: ');
  String nomeTeste = stdin.readLineSync()!;
  if (arrayNomes.contains(nomeTeste)) {
    print('O nome $nomeTeste faz parte do vetor');
  } else {
    print('O nome $nomeTeste não faz parte do vetor');
  }
}

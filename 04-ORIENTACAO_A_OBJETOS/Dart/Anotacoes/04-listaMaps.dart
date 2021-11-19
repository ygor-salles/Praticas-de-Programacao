// Crie uma lista de cadastro de 3 usuários contendo os seguintes
// dados: nome, idade, cidade, estado e depois imprima apenas os nomes e idades
// de todos usuários

import 'dart:io';

main(List<String> args) {
  List<Map<String, dynamic>> listCadastro = [];

  for (int i = 0; i < 3; i++) {
    print('\nDigite seu nome: ');
    String nome = stdin.readLineSync()!;

    print('Digite seu idade: ');
    String idade = stdin.readLineSync()!;

    print('Digite seu cidade: ');
    String cidade = stdin.readLineSync()!;

    print('Digite seu estado: ');
    String estado = stdin.readLineSync()!;

    listCadastro.add(
        {"nome": nome, "idade": idade, "cidade": cidade, "estado": estado});
  }

  // imprimindo apenas nome e idade
  print('\n');
  for (var user in listCadastro) {
    print('NOME: ${user["nome"]} - IDADE: ${user["idade"]}');
  }
}

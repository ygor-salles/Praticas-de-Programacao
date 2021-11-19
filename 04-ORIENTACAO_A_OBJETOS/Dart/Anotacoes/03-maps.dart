// Crie um cadastro com usuário contendo os seguintes dados: nome, idade,
// cidade, estado e depois imprima todos esses dados em um objeto Json(map)

import 'dart:io';

main(List<String> args) {
  Map<String, dynamic> cadastro = {};

  print('Digite seu nome: ');
  String nome = stdin.readLineSync()!;
  cadastro["nome"] = nome;

  print('Digite seu idade: ');
  String idade = stdin.readLineSync()!;
  cadastro["idade"] = idade;

  print('Digite seu cidade: ');
  String cidade = stdin.readLineSync()!;
  cadastro["cidade"] = cidade;

  print('Digite seu estado: ');
  String estado = stdin.readLineSync()!;
  cadastro["estado"] = estado;

  print(cadastro);
}

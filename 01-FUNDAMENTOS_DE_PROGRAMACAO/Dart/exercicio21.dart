// 21 - Elabore um programa que receba a matrícula, a nota 1 e nota 2 de uma lista de alunos e
// escreva essas informações em um arquivo (nome do arquivo é exercicioArquivo.txt). A
// leitura de dados deve ser interrompida quando for digitado a matricula = 0.

import 'dart:io';

void main() async {
  print('Digite a matrícula: ');
  String matricula = stdin.readLineSync()!;

  String texto = '';
  while (matricula != '0') {
    print('Digite a nota N1 e N2 respectivamente: ');
    double n1 = double.parse(stdin.readLineSync()!);
    double n2 = double.parse(stdin.readLineSync()!);
    texto += 'Matricula $matricula - ';
    texto += 'Nota 1: $n1 - ';
    texto += 'Nota 2: $n2';
    texto += '\n';

    print('Digite a matrícula: ');
    matricula = stdin.readLineSync()!;
  }

  final filename = 'file.txt';
  await File(filename).writeAsString(texto);
}

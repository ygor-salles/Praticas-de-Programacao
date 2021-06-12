// 11 - imprimir o cabeçalho definido em uma função
// Curso: Sisitemas de Informacao
// Disciplina: Fundamentos de Progaramacao
// Universidade federal de Itajuba - Unifei
// e retornar em uma nova função o  conceito conforme a media do aluno que serão digitadas pelo usuário.
// Segue a tabela abaixo:
//     NOTA            CONCEITO
// de 0,0 a 4,9            D
// de 5,0 a 6,9            C
// de 7,0 a 8,9            B
// de 9,0 a 10,0           A

import 'dart:io';

void cabecalho() {
  print('Curso de Sistemas de Informação');
  print('Disciplina: Fundamentos de Programação');
  print('Universidade Federal de Itajubá - Unifei');
}

String retorna_conceito(double media) {
  if (media >= 0 && media <= 4.9)
    return 'D';
  else if (media >= 5 && media <= 6.9)
    return 'C';
  else if (media >= 7 && media <= 8.9)
    return 'B';
  else if (media >= 9 && media <= 10) return 'A';

  return 'NOT';
}

main(List<String> args) {
  cabecalho();
  print('Digite a média: ');
  double media = double.parse(stdin.readLineSync()!);

  String conceito = retorna_conceito(media);
  if (conceito == 'NOT')
    print('Digite uma média válida (1-9)!');
  else
    print('A média é $conceito');
}

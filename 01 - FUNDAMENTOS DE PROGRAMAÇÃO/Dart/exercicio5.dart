// 5 - A partir de valores digitados pelo usuário, das notas b1 e b2 de um aluno, informar se ele
// foi aprovado (media > = 6), reprovado (media < 3), ou se ficou de exame (3<=media<6). Se
// ficou de exame, solicitar a nota do exame ex e informar se o aluno foi aprovado ou
// reprovado.

import 'dart:io';

main(List<String> args) {
  print('Digite a nota B1: ');
  double b1 = double.parse(stdin.readLineSync()!);
  print('Digite a nota B2: ');
  double b2 = double.parse(stdin.readLineSync()!);

  double media = (b1 + b2) / 2;
  if (media >= 6)
    print('Aprovado!');
  else if (media < 3)
    print('Reprovado!');
  else
    print('Ficou de exame');
}

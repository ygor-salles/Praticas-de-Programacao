// 15 - Escreva um programa que leia uma matriz 5 x 5 de forma randômica
// e imprima sua diagonal primária e secundária.

import 'dart:math';

main() {
  List<List<int>> matriz = <List<int>>[];
  var aleatorio = new Random();

  for (var i = 0; i < 5; i++) {
    List<int> list = <int>[];
    for (var j = 0; j < 5; j++) {
      list.add(aleatorio.nextInt(10));
    }
    matriz.add(list);
  }

  print('Matriz gerada');
  print(matriz);

  print("\nDiagonal Primaria: ");
  for (int i = 0; i < 5; i++)
    for (int j = 0; j < 5; j++) if (j == i) print(' ${matriz[i][j]}');

  print("\n\nDiagonal Secundaria: ");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (j == (5 - 1 - i)) {
        print(' ${matriz[i][j]}');
      }
    }
  }
}

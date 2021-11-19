// 8 - Elabore um algoritmo para calcular e imprimir o valor de S, sendo S = -1/2 + 2/4 - 3/6 + 4/8
// -5/10 +, ..., +10/20

main(List<String> args) {
  double s = 0;
  int denominador = 2;
  for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
      s += (i / denominador);
    } else {
      s += -i / denominador;
    }
    denominador = denominador + 2;
  }

  print('O resultado da soma é: ${s}');
}
